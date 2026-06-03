#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string language;  //Strings
string type;

string getMoodFile(string mood);   //Function Prototypes
void suggestSongs(string mood);
void saveMood(string mood);
void showMoodHistory();
void showPlaylistHistory();
void saveFeedback();

int main()
{
    while(true) // Infinite loop for the main menu
    {
        int choice = 0;
        string mood;

        // Main Menu

        cout<<"------------------------------"<<endl;
        cout<<"Music Recommender"<<endl;
        cout<<"1- Enter Mood"<<endl;
        cout<<"2- View Mood History"<<endl;
        cout<<"3- View Playlist History"<<endl;
        cout<<"4-Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<"------------------------------" << endl;

        if(choice<=4 && choice>=1) //The main if that checks the user input for the main menu
        {
            if(choice==1) // Mood Selection
            {
                if(choice==1) //For checking invalid mood input
                {
                    cout<<"=====================================\n";
                    cout<<"      WELCOME TO MUSIC WORLD\n";
                    cout<<"=====================================\n";

                    suggestSongs(mood);

                    cout<<"\n\nEnjoy Your Music!\n";
                }
                else
                {
                    cout<<"Invalid mood entered. Please try again."<<endl;
                }
            }

            else if(choice==2)// View Mood History
            {
                showMoodHistory();
            }

            else if(choice==3) // View Playlist History
            {
                showPlaylistHistory();
            }

            else if(choice==4) // Exit the program
            {
                cout<<"Exiting program. Goodbye!"<<endl;
                return 0; //Used to exit the program
            }

            cout<<"\nDo you want to give feedback? (y/n)"; //Taking feedback from the user

            char feedbackChoice;
            cin >> feedbackChoice;

            if(feedbackChoice=='y'||feedbackChoice=='Y')
            {
                saveFeedback(); //Function that saves the feedback in a file
            }
            else
            {
                cout<<"Thank you for using the Music Recommender!"<<endl;
            }
        }
        else
        {
            cout<<"Invalid choice! Please try again."<<endl;
        }
    }
}
                                    //Functions
void suggestSongs(string mood) //Suggests song according to mood, language and type
{
    string language, type, line;

    cout<<"=====================================\n";
    cout<<"       SONG RECOMMENDATION SYSTEM\n";
    cout<<"=====================================\n";

    cout<<"\nEnter Your Mood: "; //Asks for mood input from the user
    cin>>mood;

    ofstream fout("mood_history.txt", ios::app); //Opening the moods on the file. We use append mode to add the new mood to the end of the file without overwriting the existing moods.   
    fout<<mood<<endl; //Writes the mood to the file and moves to the next line
    fout.close(); // Closes the mood file

    // lowercase conversion
    for(int i = 0; i < mood.length(); i++) //Converts the mood input to lowercase to ensure case-insensitive matching with the mood files
    {
        mood[i] = tolower(mood[i]);
    }

    // Calls getMoodFile to translate alias/synonyms into exact matching filenames
    mood=getMoodFile(mood);

    string filename=mood + ".txt"; //Creates the filename by adding .txt extension to the mood

    ifstream file(filename);//opens the file with the name of the mood and .txt extension

    if(!file)
    {
        cout<<"\nMood file not found!\n";
        return;
    }

    cout<<"\nChoose Language:\n";
    cout<<"hindi\nenglish\nrandom\n";

    cout<<"\nEnter Language: ";
    cin>>language;

    cout<<"\nChoose Type:\n";
    cout<<"90s\nrecent\n";

    cout << "\nEnter Type: ";
    cin >> type;

    // lowercase conversion language
    for(int i = 0; i < language.length(); i++)//Converts the language input to lowercase to ensure case-insensitive matching with the mood files
    {
        language[i] = tolower(language[i]);
    }

    // lowercase conversion type
    for(int i = 0; i < type.length(); i++)//Converts the type input to lowercase to ensure case-insensitive matching with the mood files
    {
        type[i] = tolower(type[i]);
    }

    string search = language + " " + type;//Creates the search string by combining the language and type with a space in between

    bool found=false;

    while(getline(file, line))
    {
        if(line==search)
        {
            found=true;

            // quote line
            getline(file, line);

            cout << "\n====================================\n";
            cout << line << endl;
            cout << "====================================\n";

            cout << "\nRecommended Songs:\n\n";

            // 3 songs show
            ofstream playlistFile("playlist.txt", ios::app);// Opens the playlist file in append mode to save the recommended songs without overwriting the existing playlist history

            for(int i = 0; i < 3; i++)
            {
                if(getline(file, line))
                {
                    cout<<i + 1 <<". " <<line<<endl;
                    playlistFile<<line<<endl; // save song
                }
            }

            playlistFile.close(); // close file
            break;// Breaks the loop after finding the matching language and type and displaying the recommended songs
        }
    }

    if(!found)
    {
        cout << "\nNo songs found for this category.\n";
    }

    file.close();
}

string getMoodFile(string mood)
{
    ifstream file("moods.txt");

    if(!file)
    {
        cout << "moods.txt NOT OPENED!" << endl;
        return mood;// Returns the original mood if the moods.txt file cannot be opened
    }

    string line;

    while(getline(file, line))
    {
        string key="";
        string value="";
        bool foundEqual=false;

        for(int i=0;i<line.length();i++)// Parses each line to separate the key and value based on the equal sign
        {
            if(line[i]=='=') // Checks for the equal sign to determine where the key ends and the value begins
            {
                foundEqual=true;
                continue; // Skip the equal sign and continue to the next character
            }

            // space ignored
            if(line[i] == ' ')
            {
                continue;
            }

            if(foundEqual == false)
            {
                key += line[i];// Builds the key string until the equal sign is found
            }
            else
            {
                value += line[i];// Builds the value string after the equal sign is found
            }
        }

        if(key == mood)
        {
            file.close();
            return value;
        }
    }

    file.close();
    return mood;
}

void showMoodHistory()
{
    cout << "\nMood History:\n";

    ifstream fin("mood_history.txt");

    string mood;

    while(getline(fin, mood))
    {
        cout << "- " << mood << endl;
    }

    fin.close();
}

void showPlaylistHistory()
{
    ifstream file("playlist.txt");

    string line;

    if(!file)
    {
        cout << "No playlist history found!\n";
        return;
    }

    cout << "\nPlaylist History:\n";

    while(getline(file, line))
    {
        cout << "- " << line << endl;
    }

    file.close();
}

void saveFeedback()
{
    ofstream file("suggestions.txt");

    string feedback;

    cin.ignore();

    cout<<"Enter feedback: ";
    getline(cin,feedback);

    file<<feedback<<endl;
    file.close();

    cout<<"Feedback saved!\n";
}
