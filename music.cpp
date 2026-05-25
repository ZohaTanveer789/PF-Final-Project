#include<iostream>
#include<string>
#include<fstream>
using namespace std;
    
    string language;
    string type;
     void saveMood(string mood);
    void showMoodHistory();
    void showPlaylistHistory();
    void saveFeedback();
    void happyMood();
    void sad();
    void energeticMood();
    void relaxedMood();
    void romanticMood();
    void angryMood();
int main(){
    int choice=0;
    
string mood;
    
    //Main Menu
    
    
       cout<<"------------------------------"<<endl;
       cout<<"Music Recommender"<<endl;
       cout<<"1- Enter Mood"<<endl;
       cout<<"2- View Mood History"<<endl;
       cout<<"3- View Playlist History"<<endl;
       cout<<"4-Exit"<<endl; 
        cout<<"Enter your choice: ";
        cin>>choice;
       cout<<"------------------------------"<<endl;
       if (choice >=4 || choice<=1)
   {
    

    if (choice==1)                  //Mood Selection
    {
        cout<<"Enter mood-Happy, Sad, Energetic, Romantic, Angry, Relaxed: ";
        cin>>mood;
        for(char &c : mood)
{
    c = tolower(c);
}
        cout<<"Enter your prefered song type:90s or recently released :";
        cin>>type;
        if(mood=="Happy")
        { saveMood(mood);
            happyMood();
        }
        else if(mood=="Sad")
        {
            sad();
            saveMood( mood);
        }
        else if(mood=="Energetic")
        {
            saveMood( mood);
             energeticMood();
            
                  
        }
        else if(mood=="Romantic")
        {
            saveMood( mood);
             romanticMood();
        }
         else if (mood=="Angry")
        {
            saveMood(mood);
             angryMood();
        }
        else if(mood=="Relaxed")
        {
            relaxedMood();
            saveMood( mood);
        }
        else if (mood=="angry")
        {
            saveMood(mood);
             angryMood();
        }

        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }}
    
    else if (choice==2)             //View Mood History
    {
         showMoodHistory();
    }
    else if (choice==3)             //View Playlist History
    {
        showPlaylistHistory();
    }
    else if (choice==4)             //Exit
    {
        cout<<"Exiting program. Goodbye!"<<endl;
        return 0;
    }
    cout<<"Do you want to give feedback? (y/n)";
    char feedbackChoice;
    cin>>feedbackChoice;
    if (feedbackChoice=='y' || feedbackChoice=='Y')
    {
        saveFeedback();
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
void happyMood() {
    
            // Code for happy mood
            cout<<"You are in a happy mood! Here are some language options for you:\nEnglish\nHindi\nRandom"<<endl;
            cin>>language;
            
            if(language=="English")
            {
    

                cout<<"You are in a cheerful mood! Here are some song recommendations for you:";
                if(type=="90s")
                {
                    // Code for cheerful mood in English (90s)
                }
                else if (type=="recently released")
                {
                    // Code for cheerful mood in English (recently released)
                }
                else
                {
                    cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                }
            }
            else if (language=="Hindi")
            {
                // Code for cheerful mood in Hindi
                cout<<"You are in a cheerful mood! Here are some song recommendations for you:";
                if(type=="90s")
                {
                    // Code for cheerful mood in Hindi (90s)
                }
                else if (type=="recently released")
                {
                    // Code for cheerful mood in Hindi (recently released)
                }
                else
                {
                    cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                }
            }
            else
            {
                //Enter random songs for cheerful mood
                cout<<"You are in a cheerful mood! Here are some song recommendations for you:";
                if(type=="90s")
                {
                    // Code for cheerful mood with random songs (90s)
                }
                else if (type=="recently released")
                {
                    // Code for cheerful mood with random songs (recently released)
                }
                else
                {
                    cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                }

            } 
        }
        void sad()
        {
            // Code for sad mood
            cout<<"You are in a sad mood! Here are some language options for you:\nEnglish\nHindi\nRandom"<<endl;
                if(language=="English")
                {
                    // Code for sad mood in English
                    
                    cout<<"You are in a sad mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for sad mood in English (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for sad mood in English (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else if (language=="Hindi")
                {
                    // Code for sad mood in Hindi
                    cout<<"You are in a sad mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for sad mood in Hindi (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for sad mood in Hindi (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else
                {
                    //Enter random songs for sad mood
                    cout<<"You are in a sad mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for sad mood with random songs (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for sad mood with random songs (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }

             
        }
        void energeticMood()
        { cout<<"You are in an energetic mood! Here are some language options for you:\nEnglish\nHindi\nRandom"<<endl;
            // Code for energetic mood
                if(language=="English")
                {
                    cout<<"You are in an energetic mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for energetic mood in English (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for energetic mood in English (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else if (language=="Hindi")
                {
                    // Code for energetic mood in Hindi
                    cout<<"You are in an energetic mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for energetic mood in Hindi (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for energetic mood in Hindi (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else
                {
                    //Enter random songs for energetic mood
                    cout<<"You are in an energetic mood! Here are some song recommendations for you:";
                }
            
        }
        void relaxedMood()
        {
            cout<<"You are in a relaxed mood! Here are some language options for you:\nEnglish\nHindi\nRandom"<<endl;
            // Code for relaxed mood
                if(language=="English")
                {
                    // Code for relaxed mood in English
                    cout<<"You are in a relaxed mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for relaxed mood in English (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for relaxed mood in English (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";

                    }
                }
                else if (language=="Hindi")
                {
                    // Code for relaxed mood in Hindi
                    cout<<"You are in a relaxed mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for relaxed mood in Hindi (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for relaxed mood in Hindi (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else
                {
                    //Enter random songs for relaxed mood
                    cout<<"You are in a relaxed mood! Here are some song recommendations for you:";
                }}
                void romanticMood()
        {   if(language=="English")
                {
                    // Code for romantic mood in English
                    cout<<"You are in a romantic mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for romantic mood in English (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for romantic mood in English (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else if (language=="Hindi")
                {
                    // Code for romantic mood in Hindi
                    cout<<"You are in a romantic mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for romantic mood in Hindi (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for romantic mood in Hindi (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else
                {
                    //Enter random songs for romantic mood
                    cout<<"You are in a romantic mood! Here are some song recommendations for you:";
                }
                 
        }
        void angryMood()
        {
            cout<<"You are in an angry mood! Here are some language options for you:\nEnglish\nHindi\nRandom"<<endl;
            // Code for angry mood

                if(language=="English")
                {
                    // Code for angry mood in English
                    cout<<"You are in an angry mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for angry mood in English (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for angry mood in English (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }   
                }
                else if (language=="Hindi")
                {
                    // Code for angry mood in Hindi
                    cout<<"You are in an angry mood! Here are some song recommendations for you:";
                    if(type=="90s")
                    {
                        // Code for angry mood in Hindi (90s)
                    }
                    else if (type=="recently released")
                    {
                        // Code for angry mood in Hindi (recently released)
                    }
                    else
                    {
                        cout<<"Invalid song type. Please choose either '90s' or 'recently released'.";
                    }
                }
                else
                {
                    //Enter random songs for angry mood
                    cout<<"You are in an angry mood! Here are some song recommendations for you:";
                }
            }   


 

     // Input validation for main menu choic
    
void saveMood(string mood) {
    ofstream file("mood_history.txt", ios::app);
    file << mood << endl;
    file.close();
}


void showMoodHistory() {

    cout << "\nMood History:\n";
    ifstream file("mood_history.txt");
    string mood;
    while (getline(file, mood)) {
        cout << "- " << mood << endl;
    }
    file.close();
}

void showPlaylistHistory() {
    ifstream file("playlist.txt");
    string line;

    cout << "\nPlaylist History:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void saveFeedback() {
    ofstream file("suggestions.txt");
    string feedback;

    cin.ignore();
    cout << "Enter feedback: ";
    getline(cin, feedback);

    file << feedback << endl;
    file.close();

    cout << "Feedback saved!\n";
}
