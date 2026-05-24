#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    int choice=0;
    string mood;
    string language;
    int age=0;
    //Main Menu
    do
    {
       cout<<"------------------------------"<<endl;
       cout<<"Music Recommender"<<endl;
       cout<<"1- Enter Mood"<<endl;
       cout<<"2- View Mood History"<<endl;
       cout<<"3- View Playlist History"<<endl;
       cout<<"4-Exit"<<endl; 
        cout<<"Enter your choice: ";
        cin>>choice;
       cout<<"------------------------------"<<endl;
 
    } while (choice >= 1 && choice <= 4); 
     // Input validation for main menu choice
    if (choice >4 && choice<1)
    {
        cout<<"Invalid choice. Please try again."<<endl;
        return 0;
    }
    

    if (choice==1)                  //Mood Selection
    {
        cout<<"------------------------------"<<endl;
        cout<<"Music Recommender"<<endl;
        cout<<"Enter your age. So, we can recommend you the best music according to your age."<<endl;
        cin>>age;
        cout<<"Enter mood: ";
        cin>>mood;
        cout<<"Enter your preffered langauge";
        cin>>language;
        if (age>=0&&age<=10)
        {   
         cout<<"------------------------------"<<endl;
         cout<<"Music Recommender"<<endl;   
         cout<<"Recommended songs for you: "<<endl;
        }
                    //age group 11-15
        else if (age>10&&age<=15)
        {
             if(mood=="Happy")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Sad")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Energetic")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Relaxed")
        {
            if(language=="English")
            {
                // Code for relaxed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for relaxed mood in Hindi
            }
            else
            {
                //Enter random songs for relaxed mood
            }
        }
        else if (mood=="romantic")
        {
            if(language=="English")
            {
                // Code for romantic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for romantic mood in Hindi
            }
            else
            {
                //Enter random songs for romantic mood
            }
        }
        else if (mood=="angry")
        {
            if(language=="English")
            {
                // Code for angry mood in English
            }
            else if (language=="Hindi")
            {
                // Code for angry mood in Hindi
            }
            else
            {
                //Enter random songs for angry mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if (mood=="calm")
        {
            if(language=="English")
            {
                // Code for calm mood in English
            }
            else if (language=="Hindi")
            {
                // Code for calm mood in Hindi
            }
            else
            {
                //Enter random songs for calm mood
            }
        }
        else if (mood=="motivated")
        {
            if(language=="English")
            {
                // Code for motivated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for motivated mood in Hindi
            }
            else
            {
                //Enter random songs for motivated mood
            }
        }
        else if (mood=="melancholic")
        {
            if(language=="English")
            {
                // Code for melancholic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for melancholic mood in Hindi
            }
            else
            {
                //Enter random songs for melancholic mood
            }
        }
        else if (mood=="depressed")
        {
            if(language=="English")
            {
                // Code for depressed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for depressed mood in Hindi
            }
            else
            {
                //Enter random songs for depressed mood
            }
        }
        else if (mood=="anxious")
        {
            if(language=="English")
            {
                // Code for anxious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for anxious mood in Hindi
            }
            else
            {
                //Enter random songs for anxious mood
            }
        }
        else if (mood=="bored")
        {
            if(language=="English")
            {
                // Code for bored mood in English
            }
            else if (language=="Hindi")
            {
                // Code for bored mood in Hindi
            }
            else
            {
                //Enter random songs for bored mood
            }
        }
        else if (mood=="upbeat")
        {
            if(language=="English")
            {
                // Code for upbeat mood in English
            }
            else if (language=="Hindi")
            {
                // Code for upbeat mood in Hindi
            }
            else
            {
                //Enter random songs for upbeat mood
            }
        }
        else if (mood=="peaceful")
        {
            if(language=="English")
            {
                // Code for peaceful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for peaceful mood in Hindi
            }
            else
            {
                //Enter random songs for peaceful mood
            }
        }
        else if (mood=="sentimental")
        {
            if(language=="English")
            {
                // Code for sentimental mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sentimental mood in Hindi
            }
            else
            {
                //Enter random songs for sentimental mood
            }
        }
        else if (mood=="hopeful")
        {
            if(language=="English")
            {
                // Code for hopeful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hopeful mood in Hindi
            }
            else
            {
                //Enter random songs for hopeful mood
            }
        }
        else if (mood=="lonely")
        {
            if(language=="English")
            {
                // Code for lonely mood in English
            }
            else if (language=="Hindi")
            {
                // Code for lonely mood in Hindi
            }
            else
            {
                //Enter random songs for lonely mood
            }
        }
        else if (mood=="confident")
        {
            if(language=="English")
            {
                // Code for confident mood in English
            }
            else if (language=="Hindi")
            {
                // Code for confident mood in Hindi
            }
            else
            {
                //Enter random songs for confident mood
            }
        }
       else if (mood=="gloomy")
        {
            if(language=="English")
            {
                // Code for gloomy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for gloomy mood in Hindi
            }
            else
            {
                //Enter random songs for gloomy mood
            }
        }
        else if (mood=="excited")
        {
            if(language=="English")
            {
                // Code for excited mood in English
            }
            else if (language=="Hindi")
            {
                // Code for excited mood in Hindi
            }
            else
            {
                //Enter random songs for excited mood
            }
        }
        else if (mood=="curious")
        {
            if(language=="English")
            {
                // Code for curious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for curious mood in Hindi
            }
            else
            {
                //Enter random songs for curious mood
            }
        }
        else if (mood=="grateful")
        {
            if(language=="English")
            {
                // Code for grateful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for grateful mood in Hindi
            }
            else
            {
                //Enter random songs for grateful mood
            }
        }
        else if (mood=="frustrated")
        {
            if(language=="English")
            {
                // Code for frustrated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for frustrated mood in Hindi
            }
            else
            {
                //Enter random songs for frustrated mood
            }
        }
        else if (mood=="Love")
        {
            if(language=="English")
            {
                // Code for love mood in English
            }
            else if (language=="Hindi")
            {
                // Code for love mood in Hindi
            }
            else
            {
                //Enter random songs for love mood
            }
        }
        else if (mood=="Cheerful")
        {
            if(language=="English")
            {
                // Code for cheerful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for cheerful mood in Hindi
            }
            else
            {
                //Enter random songs for cheerful mood
            }
        }
        else if (mood=="chill")
        {
            if(language=="English")
            {
                // Code for chill mood in English
            }
            else if (language=="Hindi")
            {
                // Code for chill mood in Hindi
            }
            else
            {
                //Enter random songs for chill mood
            }
        }
        else if (mood=="Sleepy")
        {
            if(language=="English")
            {
                // Code for sleepy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sleepy mood in Hindi
            }
            else
            {
                //Enter random songs for sleepy mood
            }
        }
        else if (mood=="Adventurous")
        {
            if(language=="English")
            {
                // Code for adventurous mood in English
            }
            else if (language=="Hindi")
            {
                // Code for adventurous mood in Hindi
            }
            else
            {
                //Enter random songs for adventurous mood
            }
        }
        else if (mood=="Reflective")
        {
            if(language=="English")
            {
                // Code for reflective mood in English
            }
            else if (language=="Hindi")
            {
                // Code for reflective mood in Hindi
            }
            else
            {
                //Enter random songs for reflective mood
            }
        }
        else if (mood=="Playful")
        {
            if(language=="English")
            {
                // Code for playful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for playful mood in Hindi
            }
            else
            {
                //Enter random songs for playful mood
            }
        }
        else if(mood=="Serene")
        {
            if(language=="English")
            {
                // Code for serene mood in English
            }
            else if (language=="Hindi")
            {
                // Code for serene mood in Hindi
            }
            else
            {
                //Enter random songs for serene mood
            }
        }
        else if (mood=="Festive")
        {
            if(language=="English")
            {
                // Code for festive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for festive mood in Hindi
            }
            else
            {
                //Enter random songs for festive mood
            }
        }
        else if (mood=="Euphoric")
        {
            if(language=="English")
            {
                // Code for euphoric mood in English
            }
            else if (language=="Hindi")
            {
                // Code for euphoric mood in Hindi
            }
            else
            {
                //Enter random songs for euphoric mood
            }
        }
        else if (mood=="Party")
        {
            if(language=="English")
            {
                // Code for party mood in English
            }
            else if (language=="Hindi")
            {
                // Code for party mood in Hindi
            }
            else
            {
                //Enter random songs for party mood
            }
        }
        else if (mood=="Aggressive")
        {
            if(language=="English")
            {
                // Code for aggressive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for aggressive mood in Hindi
            }
            else
            {
                //Enter random songs for aggressive mood
            }
        }
        else if (mood=="Hype"){
            if(language=="English")
            {
                // Code for hype mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hype mood in Hindi
            }
            else
            {
                //Enter random songs for hype mood
            }
        }
        else if (mood=="Workout")
        {
            if(language=="English")
            {
                // Code for workout mood in English
            }
            else if (language=="Hindi")
            {
                // Code for workout mood in Hindi
            }
            else
            {
                //Enter random songs for workout mood
            }
        }
        else if (mood=="Study")
        {
            if(language=="English")
            {
                // Code for study mood in English
            }
            else if (language=="Hindi")
            {
                // Code for study mood in Hindi
            }
            else
            {
                //Enter random songs for study mood
            }
        }
        else if (mood=="Travel")
        {
            if(language=="English")
            {
                // Code for travel mood in English
            }
            else if (language=="Hindi")
            {
                // Code for travel mood in Hindi
            }
            else
            {
                //Enter random songs for travel mood
            }
        }
        else if (mood=="Rainy")
        {
            if(language=="English")
            {
                // Code for rainy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for rainy mood in Hindi
            }
            else
            {
                //Enter random songs for rainy mood
            }
        }
        else if (mood=="Sunny")
        {
            if(language=="English")
            {
                // Code for sunny mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sunny mood in Hindi
            }
            else
            {
                //Enter random songs for sunny mood
            }
        }
        else if (mood=="Snowy")
        {
            if(language=="English")
            {
                // Code for snowy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for snowy mood in Hindi
            }
            else
            {
                //Enter random songs for snowy mood
            }
        }
        else if (mood=="Windy")
        {
            if(language=="English")
            {
                // Code for windy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for windy mood in Hindi
            }
            else
            {
                //Enter random songs for windy mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
        }




                            //age group 16-20
        else if (age>15&&age<=20)
        {
             if(mood=="Happy")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Sad")
        {
            if(language=="English")
            {
                // Code for sad mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sad mood in Hindi
            }
            else
            {
                //Enter random songs for sad mood
            }
        }
        else if(mood=="Energetic")
        {
            if(language=="English")
            {
                // Code for energetic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for energetic mood in Hindi
            }
            else
            {
                //Enter random songs for energetic mood
            }
        }
        else if(mood=="Relaxed")
        {
            if(language=="English")
            {
                // Code for relaxed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for relaxed mood in Hindi
            }
            else
            {
                //Enter random songs for relaxed mood
            }
        }
        else if (mood=="romantic")
        {
            if(language=="English")
            {
                // Code for romantic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for romantic mood in Hindi
            }
            else
            {
                //Enter random songs for romantic mood
            }
        }
        else if (mood=="angry")
        {
            if(language=="English")
            {
                // Code for angry mood in English
            }
            else if (language=="Hindi")
            {
                // Code for angry mood in Hindi
            }
            else
            {
                //Enter random songs for angry mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else if (mood=="calm")
        {
            if(language=="English")
            {
                // Code for calm mood in English
            }
            else if (language=="Hindi")
            {
                // Code for calm mood in Hindi
            }
            else
            {
                //Enter random songs for calm mood
            }
        }
        else if (mood=="motivated")
        {
            if(language=="English")
            {
                // Code for motivated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for motivated mood in Hindi
            }
            else
            {
                //Enter random songs for motivated mood
            }
        }
        else if (mood=="melancholic")
        {
            if(language=="English")
            {
                // Code for melancholic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for melancholic mood in Hindi
            }
            else
            {
                //Enter random songs for melancholic mood
            }
        }
        else if (mood=="depressed")
        {
            if(language=="English")
            {
                // Code for depressed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for depressed mood in Hindi
            }
            else
            {
                //Enter random songs for depressed mood
            }
        }
        else if (mood=="anxious")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if (mood=="bored")
        {
            if(language=="English")
            {
                // Code for bored mood in English
            }
            else if (language=="Hindi")
            {
                // Code for bored mood in Hindi
            }
            else
            {
                //Enter random songs for bored mood
            }
        }
        else if (mood=="upbeat")
        {
            if(language=="English")
            {
                // Code for upbeat mood in English
            }
            else if (language=="Hindi")
            {
                // Code for upbeat mood in Hindi
            }
            else
            {
                //Enter random songs for upbeat mood
            }
        }
        else if (mood=="peaceful")
        {
            if(language=="English")
            {
                // Code for peaceful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for peaceful mood in Hindi
            }
            else
            {
                //Enter random songs for peaceful mood
            }
        }
        else if (mood=="sentimental")
        {
            if(language=="English")
            {
                // Code for sentimental mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sentimental mood in Hindi
            }
            else
            {
                //Enter random songs for sentimental mood
            }
        }
        else if (mood=="hopeful")
        {
            if(language=="English")
            {
                // Code for hopeful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hopeful mood in Hindi
            }
            else
            {
                //Enter random songs for hopeful mood
            }
        }
        else if (mood=="lonely")
        {
            if(language=="English")
            {
                // Code for lonely mood in English
            }
            else if (language=="Hindi")
            {
                // Code for lonely mood in Hindi
            }
            else
            {
                //Enter random songs for lonely mood
            }
        }
        else if (mood=="confident")
        {
            if(language=="English")
            {
                // Code for confident mood in English
            }
            else if (language=="Hindi")
            {
                // Code for confident mood in Hindi
            }
            else
            {
                //Enter random songs for confident mood
            }
        }
       else if (mood=="gloomy")
        {
            if(language=="English")
            {
                // Code for gloomy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for gloomy mood in Hindi
            }
            else
            {
                //Enter random songs for gloomy mood
            }
        }
        else if (mood=="excited")
        {
            if(language=="English")
            {
                // Code for excited mood in English
            }
            else if (language=="Hindi")
            {
                // Code for excited mood in Hindi
            }
            else
            {
                //Enter random songs for excited mood
            }
        }
        else if (mood=="curious")
        {
            if(language=="English")
            {
                // Code for curious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for curious mood in Hindi
            }
            else
            {
                //Enter random songs for curious mood
            }
        }
        else if (mood=="grateful")
        {
            if(language=="English")
            {
                // Code for grateful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for grateful mood in Hindi
            }
            else
            {
                //Enter random songs for grateful mood
            }
        }
        else if (mood=="frustrated")
        {
            if(language=="English")
            {
                // Code for frustrated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for frustrated mood in Hindi
            }
            else
            {
                //Enter random songs for frustrated mood
            }
        }
        else if (mood=="Love")
        {
            if(language=="English")
            {
                // Code for love mood in English
            }
            else if (language=="Hindi")
            {
                // Code for love mood in Hindi
            }
            else
            {
                //Enter random songs for love mood
            }
        }
        else if (mood=="Cheerful")
        {
            if(language=="English")
            {
                // Code for cheerful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for cheerful mood in Hindi
            }
            else
            {
                //Enter random songs for cheerful mood
            }
        }
        else if (mood=="chill")
        {
            if(language=="English")
            {
                // Code for chill mood in English
            }
            else if (language=="Hindi")
            {
                // Code for chill mood in Hindi
            }
            else
            {
                //Enter random songs for chill mood
            }
        }
        else if (mood=="Sleepy")
        {
            if(language=="English")
            {
                // Code for sleepy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sleepy mood in Hindi
            }
            else
            {
                //Enter random songs for sleepy mood
            }
        }
        else if (mood=="Adventurous")
        {
            if(language=="English")
            {
                // Code for adventurous mood in English
            }
            else if (language=="Hindi")
            {
                // Code for adventurous mood in Hindi
            }
            else
            {
                //Enter random songs for adventurous mood
            }
        }
        else if (mood=="Reflective")
        {
            if(language=="English")
            {
                // Code for reflective mood in English
            }
            else if (language=="Hindi")
            {
                // Code for reflective mood in Hindi
            }
            else
            {
                //Enter random songs for reflective mood
            }
        }
        else if (mood=="Playful")
        {
            if(language=="English")
            {
                // Code for playful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for playful mood in Hindi
            }
            else
            {
                //Enter random songs for playful mood
            }
        }
        else if(mood=="Serene")
        {
            if(language=="English")
            {
                // Code for serene mood in English
            }
            else if (language=="Hindi")
            {
                // Code for serene mood in Hindi
            }
            else
            {
                //Enter random songs for serene mood
            }
        }
        else if (mood=="Festive")
        {
            if(language=="English")
            {
                // Code for festive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for festive mood in Hindi
            }
            else
            {
                //Enter random songs for festive mood
            }
        }
        else if (mood=="Euphoric")
        {
            if(language=="English")
            {
                // Code for euphoric mood in English
            }
            else if (language=="Hindi")
            {
                // Code for euphoric mood in Hindi
            }
            else
            {
                //Enter random songs for euphoric mood
            }
        }
        else if (mood=="Party")
        {
            if(language=="English")
            {
                // Code for party mood in English
            }
            else if (language=="Hindi")
            {
                // Code for party mood in Hindi
            }
            else
            {
                //Enter random songs for party mood
            }
        }
        else if (mood=="Aggressive")
        {
            if(language=="English")
            {
                // Code for aggressive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for aggressive mood in Hindi
            }
            else
            {
                //Enter random songs for aggressive mood
            }
        }
        else if (mood=="Hype"){
            if(language=="English")
            {
                // Code for hype mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hype mood in Hindi
            }
            else
            {
                //Enter random songs for hype mood
            }
        }
        else if (mood=="Workout")
        {
            if(language=="English")
            {
                // Code for workout mood in English
            }
            else if (language=="Hindi")
            {
                // Code for workout mood in Hindi
            }
            else
            {
                //Enter random songs for workout mood
            }
        }
        else if (mood=="Study")
        {
            if(language=="English")
            {
                // Code for study mood in English
            }
            else if (language=="Hindi")
            {
                // Code for study mood in Hindi
            }
            else
            {
                //Enter random songs for study mood
            }
        }
        else if (mood=="Travel")
        {
            if(language=="English")
            {
                // Code for travel mood in English
            }
            else if (language=="Hindi")
            {
                // Code for travel mood in Hindi
            }
            else
            {
                //Enter random songs for travel mood
            }
        }
        else if (mood=="Rainy")
        {
            if(language=="English")
            {
                // Code for rainy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for rainy mood in Hindi
            }
            else
            {
                //Enter random songs for rainy mood
            }
        }
        else if (mood=="Sunny")
        {
            if(language=="English")
            {
                // Code for sunny mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sunny mood in Hindi
            }
            else
            {
                //Enter random songs for sunny mood
            }
        }
        else if (mood=="Snowy")
        {
            if(language=="English")
            {
                // Code for snowy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for snowy mood in Hindi
            }
            else
            {
                //Enter random songs for snowy mood
            }
        }
        else if (mood=="Windy")
        {
            if(language=="English")
            {
                // Code for windy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for windy mood in Hindi
            }
            else
            {
                //Enter random songs for windy mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
        }





        //age group 21-25
        else if (age>20&&age<=25)
        {
             if(mood=="Happy")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Sad")
        {
            if(language=="English")
            {
                // Code for sad mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sad mood in Hindi
            }
            else
            {
                //Enter random songs for sad mood
            }
        }
        else if(mood=="Energetic")
        {
            if(language=="English")
            {
                // Code for energetic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for energetic mood in Hindi
            }
            else
            {
                //Enter random songs for energetic mood
            }
        }
        else if(mood=="Relaxed")
        {
            if(language=="English")
            {
                // Code for relaxed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for relaxed mood in Hindi
            }
            else
            {
                //Enter random songs for relaxed mood
            }
        }
        else if (mood=="romantic")
        {
            if(language=="English")
            {
                // Code for romantic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for romantic mood in Hindi
            }
            else
            {
                //Enter random songs for romantic mood
            }
        }
        else if (mood=="angry")
        {
            if(language=="English")
            {
                // Code for angry mood in English
            }
            else if (language=="Hindi")
            {
                // Code for angry mood in Hindi
            }
            else
            {
                //Enter random songs for angry mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else if (mood=="calm")
        {
            if(language=="English")
            {
                // Code for calm mood in English
            }
            else if (language=="Hindi")
            {
                // Code for calm mood in Hindi
            }
            else
            {
                //Enter random songs for calm mood
            }
        }
        else if (mood=="motivated")
        {
            if(language=="English")
            {
                // Code for motivated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for motivated mood in Hindi
            }
            else
            {
                //Enter random songs for motivated mood
            }
        }
        else if (mood=="melancholic")
        {
            if(language=="English")
            {
                // Code for melancholic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for melancholic mood in Hindi
            }
            else
            {
                //Enter random songs for melancholic mood
            }
        }
        else if (mood=="depressed")
        {
            if(language=="English")
            {
                // Code for depressed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for depressed mood in Hindi
            }
            else
            {
                //Enter random songs for depressed mood
            }
        }
        else if (mood=="anxious")
        {
            if(language=="English")
            {
                // Code for anxious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for anxious mood in Hindi
            }
            else
            {
                //Enter random songs for anxious mood
            }
        }
        else if (mood=="bored")
        {
            if(language=="English")
            {
                // Code for bored mood in English
            }
            else if (language=="Hindi")
            {
                // Code for bored mood in Hindi
            }
            else
            {
                //Enter random songs for bored mood
            }
        }
        else if (mood=="upbeat")
        {
            if(language=="English")
            {
                // Code for upbeat mood in English
            }
            else if (language=="Hindi")
            {
                // Code for upbeat mood in Hindi
            }
            else
            {
                //Enter random songs for upbeat mood
            }
        }
        else if (mood=="peaceful")
        {
            if(language=="English")
            {
                // Code for peaceful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for peaceful mood in Hindi
            }
            else
            {
                //Enter random songs for peaceful mood
            }
        }
        else if (mood=="sentimental")
        {
            if(language=="English")
            {
                // Code for sentimental mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sentimental mood in Hindi
            }
            else
            {
                //Enter random songs for sentimental mood
            }
        }
        else if (mood=="hopeful")
        {
            if(language=="English")
            {
                // Code for hopeful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hopeful mood in Hindi
            }
            else
            {
                //Enter random songs for hopeful mood
            }
        }
        else if (mood=="lonely")
        {
            if(language=="English")
            {
                // Code for lonely mood in English
            }
            else if (language=="Hindi")
            {
                // Code for lonely mood in Hindi
            }
            else
            {
                //Enter random songs for lonely mood
            }
        }
        else if (mood=="confident")
        {
            if(language=="English")
            {
                // Code for confident mood in English
            }
            else if (language=="Hindi")
            {
                // Code for confident mood in Hindi
            }
            else
            {
                //Enter random songs for confident mood
            }
        }
       else if (mood=="gloomy")
        {
            if(language=="English")
            {
                // Code for gloomy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for gloomy mood in Hindi
            }
            else
            {
                //Enter random songs for gloomy mood
            }
        }
        else if (mood=="excited")
        {
            if(language=="English")
            {
                // Code for excited mood in English
            }
            else if (language=="Hindi")
            {
                // Code for excited mood in Hindi
            }
            else
            {
                //Enter random songs for excited mood
            }
        }
        else if (mood=="curious")
        {
            if(language=="English")
            {
                // Code for curious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for curious mood in Hindi
            }
            else
            {
                //Enter random songs for curious mood
            }
        }
        else if (mood=="grateful")
        {
            if(language=="English")
            {
                // Code for grateful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for grateful mood in Hindi
            }
            else
            {
                //Enter random songs for grateful mood
            }
        }
        else if (mood=="frustrated")
        {
            if(language=="English")
            {
                // Code for frustrated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for frustrated mood in Hindi
            }
            else
            {
                //Enter random songs for frustrated mood
            }
        }
        else if (mood=="Love")
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if (mood=="Cheerful")
        {
            if(language=="English")
            {
                // Code for cheerful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for cheerful mood in Hindi
            }
            else
            {
                //Enter random songs for cheerful mood
            }
        }
        else if (mood=="chill")
        {
            if(language=="English")
            {
                // Code for chill mood in English
            }
            else if (language=="Hindi")
            {
                // Code for chill mood in Hindi
            }
            else
            {
                //Enter random songs for chill mood
            }
        }
        else if (mood=="Sleepy")
        {
            if(language=="English")
            {
                // Code for sleepy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sleepy mood in Hindi
            }
            else
            {
                //Enter random songs for sleepy mood
            }
        }
        else if (mood=="Adventurous")
        {
            if(language=="English")
            {
                // Code for adventurous mood in English
            }
            else if (language=="Hindi")
            {
                // Code for adventurous mood in Hindi
            }
            else
            {
                //Enter random songs for adventurous mood
            }
        }
        else if (mood=="Reflective")
        {
            if(language=="English")
            {
                // Code for reflective mood in English
            }
            else if (language=="Hindi")
            {
                // Code for reflective mood in Hindi
            }
            else
            {
                //Enter random songs for reflective mood
            }
        }
        else if (mood=="Playful")
        {
            if(language=="English")
            {
                // Code for playful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for playful mood in Hindi
            }
            else
            {
                //Enter random songs for playful mood
            }
        }
        else if(mood=="Serene")
        {
            if(language=="English")
            {
                // Code for serene mood in English
            }
            else if (language=="Hindi")
            {
                // Code for serene mood in Hindi
            }
            else
            {
                //Enter random songs for serene mood
            }
        }
        else if (mood=="Festive")
        {
            if(language=="English")
            {
                // Code for festive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for festive mood in Hindi
            }
            else
            {
                //Enter random songs for festive mood
            }
        }
        else if (mood=="Euphoric")
        {
            if(language=="English")
            {
                // Code for euphoric mood in English
            }
            else if (language=="Hindi")
            {
                // Code for euphoric mood in Hindi
            }
            else
            {
                //Enter random songs for euphoric mood
            }
        }
        else if (mood=="Party")
        {
            if(language=="English")
            {
                // Code for party mood in English
            }
            else if (language=="Hindi")
            {
                // Code for party mood in Hindi
            }
            else
            {
                //Enter random songs for party mood
            }
        }
        else if (mood=="Aggressive")
        {
            if(language=="English")
            {
                // Code for aggressive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for aggressive mood in Hindi
            }
            else
            {
                //Enter random songs for aggressive mood
            }
        }
        else if (mood=="Hype"){
            if(language=="English")
            {
                // Code for hype mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hype mood in Hindi
            }
            else
            {
                //Enter random songs for hype mood
            }
        }
        else if (mood=="Workout")
        {
            if(language=="English")
            {
                // Code for workout mood in English
            }
            else if (language=="Hindi")
            {
                // Code for workout mood in Hindi
            }
            else
            {
                //Enter random songs for workout mood
            }
        }
        else if (mood=="Study")
        {
            if(language=="English")
            {
                // Code for study mood in English
            }
            else if (language=="Hindi")
            {
                // Code for study mood in Hindi
            }
            else
            {
                //Enter random songs for study mood
            }
        }
        else if (mood=="Travel")
        {
            if(language=="English")
            {
                // Code for travel mood in English
            }
            else if (language=="Hindi")
            {
                // Code for travel mood in Hindi
            }
            else
            {
                //Enter random songs for travel mood
            }
        }
        else if (mood=="Rainy")
        {
            if(language=="English")
            {
                // Code for rainy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for rainy mood in Hindi
            }
            else
            {
                //Enter random songs for rainy mood
            }
        }
        else if (mood=="Sunny")
        {
            if(language=="English")
            {
                // Code for sunny mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sunny mood in Hindi
            }
            else
            {
                //Enter random songs for sunny mood
            }
        }
        else if (mood=="Snowy")
        {
            if(language=="English")
            {
                // Code for snowy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for snowy mood in Hindi
            }
            else
            {
                //Enter random songs for snowy mood
            }
        }
        else if (mood=="Windy")
        {
            if(language=="English")
            {
                // Code for windy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for windy mood in Hindi
            }
            else
            {
                //Enter random songs for windy mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
        }



        //age group 26-30
        
        else if (age>25&&age<=30)
        {
            if(language=="English")
            {
                // Code for happy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for happy mood in Hindi
            }
            else
            {
                //Enter random songs for happy mood
            }
        }
        else if(mood=="Sad")
        {
            if(language=="English")
            {
                // Code for sad mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sad mood in Hindi
            }
            else
            {
                //Enter random songs for sad mood
            }
        }
        else if(mood=="Energetic")
        {
            if(language=="English")
            {
                // Code for energetic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for energetic mood in Hindi
            }
            else
            {
                //Enter random songs for energetic mood
            }
        }
        else if(mood=="Relaxed")
        {
            if(language=="English")
            {
                // Code for relaxed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for relaxed mood in Hindi
            }
            else
            {
                //Enter random songs for relaxed mood
            }
        }
        else if (mood=="romantic")
        {
            if(language=="English")
            {
                // Code for romantic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for romantic mood in Hindi
            }
            else
            {
                //Enter random songs for romantic mood
            }
        }
        else if (mood=="angry")
        {
            if(language=="English")
            {
                // Code for angry mood in English
            }
            else if (language=="Hindi")
            {
                // Code for angry mood in Hindi
            }
            else
            {
                //Enter random songs for angry mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else if (mood=="calm")
        {
            if(language=="English")
            {
                // Code for calm mood in English
            }
            else if (language=="Hindi")
            {
                // Code for calm mood in Hindi
            }
            else
            {
                //Enter random songs for calm mood
            }
        }
        else if (mood=="motivated")
        {
            if(language=="English")
            {
                // Code for motivated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for motivated mood in Hindi
            }
            else
            {
                //Enter random songs for motivated mood
            }
        }
        else if (mood=="melancholic")
        {
            if(language=="English")
            {
                // Code for melancholic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for melancholic mood in Hindi
            }
            else
            {
                //Enter random songs for melancholic mood
            }
        }
        else if (mood=="depressed")
        {
            if(language=="English")
            {
                // Code for depressed mood in English
            }
            else if (language=="Hindi")
            {
                // Code for depressed mood in Hindi
            }
            else
            {
                //Enter random songs for depressed mood
            }
        }
        else if (mood=="anxious")
        {
            if(language=="English")
            {
                // Code for anxious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for anxious mood in Hindi
            }
            else
            {
                //Enter random songs for anxious mood
            }
        }
        else if (mood=="bored")
        {
            if(language=="English")
            {
                // Code for bored mood in English
            }
            else if (language=="Hindi")
            {
                // Code for bored mood in Hindi
            }
            else
            {
                //Enter random songs for bored mood
            }
        }
        else if (mood=="upbeat")
        {
            if(language=="English")
            {
                // Code for upbeat mood in English
            }
            else if (language=="Hindi")
            {
                // Code for upbeat mood in Hindi
            }
            else
            {
                //Enter random songs for upbeat mood
            }
        }
        else if (mood=="peaceful")
        {
            if(language=="English")
            {
                // Code for peaceful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for peaceful mood in Hindi
            }
            else
            {
                //Enter random songs for peaceful mood
            }
        }
        else if (mood=="sentimental")
        {
            if(language=="English")
            {
                // Code for sentimental mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sentimental mood in Hindi
            }
            else
            {
                //Enter random songs for sentimental mood
            }
        }
        else if (mood=="hopeful")
        {
            if(language=="English")
            {
                // Code for hopeful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hopeful mood in Hindi
            }
            else
            {
                //Enter random songs for hopeful mood
            }
        }
        else if (mood=="lonely")
        {
            if(language=="English")
            {
                // Code for lonely mood in English
            }
            else if (language=="Hindi")
            {
                // Code for lonely mood in Hindi
            }
            else
            {
                //Enter random songs for lonely mood
            }
        }
        else if (mood=="confident")
        {
            if(language=="English")
            {
                // Code for confident mood in English
            }
            else if (language=="Hindi")
            {
                // Code for confident mood in Hindi
            }
            else
            {
                //Enter random songs for confident mood
            }
        }
       else if (mood=="gloomy")
        {
            if(language=="English")
            {
                // Code for gloomy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for gloomy mood in Hindi
            }
            else
            {
                //Enter random songs for gloomy mood
            }
        }
        else if (mood=="excited")
        {
            if(language=="English")
            {
                // Code for excited mood in English
            }
            else if (language=="Hindi")
            {
                // Code for excited mood in Hindi
            }
            else
            {
                //Enter random songs for excited mood
            }
        }
        else if (mood=="curious")
        {
            if(language=="English")
            {
                // Code for curious mood in English
            }
            else if (language=="Hindi")
            {
                // Code for curious mood in Hindi
            }
            else
            {
                //Enter random songs for curious mood
            }
        }
        else if (mood=="grateful")
        {
            if(language=="English")
            {
                // Code for grateful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for grateful mood in Hindi
            }
            else
            {
                //Enter random songs for grateful mood
            }
        }
        else if (mood=="frustrated")
        {
            if(language=="English")
            {
                // Code for frustrated mood in English
            }
            else if (language=="Hindi")
            {
                // Code for frustrated mood in Hindi
            }
            else
            {
                //Enter random songs for frustrated mood
            }
        }
        else if (mood=="Love")
        {
            if(language=="English")
            {
                // Code for love mood in English
            }
            else if (language=="Hindi")
            {
                // Code for love mood in Hindi
            }
            else
            {
                //Enter random songs for love mood
            }
        }
        else if (mood=="Cheerful")
        {
            if(language=="English")
            {
                // Code for cheerful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for cheerful mood in Hindi
            }
            else
            {
                //Enter random songs for cheerful mood
            }
        }
        else if (mood=="chill")
        {
            if(language=="English")
            {
                // Code for chill mood in English
            }
            else if (language=="Hindi")
            {
                // Code for chill mood in Hindi
            }
            else
            {
                //Enter random songs for chill mood
            }
        }
        else if (mood=="Sleepy")
        {
            if(language=="English")
            {
                // Code for sleepy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sleepy mood in Hindi
            }
            else
            {
                //Enter random songs for sleepy mood
            }
        }
        else if (mood=="Adventurous")
        {
            if(language=="English")
            {
                // Code for adventurous mood in English
            }
            else if (language=="Hindi")
            {
                // Code for adventurous mood in Hindi
            }
            else
            {
                //Enter random songs for adventurous mood
            }
        }
        else if (mood=="Reflective")
        {
            if(language=="English")
            {
                // Code for reflective mood in English
            }
            else if (language=="Hindi")
            {
                // Code for reflective mood in Hindi
            }
            else
            {
                //Enter random songs for reflective mood
            }
        }
        else if (mood=="Playful")
        {
            if(language=="English")
            {
                // Code for playful mood in English
            }
            else if (language=="Hindi")
            {
                // Code for playful mood in Hindi
            }
            else
            {
                //Enter random songs for playful mood
            }
        }
        else if(mood=="Serene")
        {
            if(language=="English")
            {
                // Code for serene mood in English
            }
            else if (language=="Hindi")
            {
                // Code for serene mood in Hindi
            }
            else
            {
                //Enter random songs for serene mood
            }
        }
        else if (mood=="Festive")
        {
            if(language=="English")
            {
                // Code for festive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for festive mood in Hindi
            }
            else
            {
                //Enter random songs for festive mood
            }
        }
        else if (mood=="Euphoric")
        {
            if(language=="English")
            {
                // Code for euphoric mood in English
            }
            else if (language=="Hindi")
            {
                // Code for euphoric mood in Hindi
            }
            else
            {
                //Enter random songs for euphoric mood
            }
        }
        else if (mood=="Party")
        {
            if(language=="English")
            {
                // Code for party mood in English
            }
            else if (language=="Hindi")
            {
                // Code for party mood in Hindi
            }
            else
            {
                //Enter random songs for party mood
            }
        }
        else if (mood=="Aggressive")
        {
            if(language=="English")
            {
                // Code for aggressive mood in English
            }
            else if (language=="Hindi")
            {
                // Code for aggressive mood in Hindi
            }
            else
            {
                //Enter random songs for aggressive mood
            }
        }
        else if (mood=="Hype"){
            if(language=="English")
            {
                // Code for hype mood in English
            }
            else if (language=="Hindi")
            {
                // Code for hype mood in Hindi
            }
            else
            {
                //Enter random songs for hype mood
            }
        }
        else if (mood=="Workout")
        {
            if(language=="English")
            {
                // Code for workout mood in English
            }
            else if (language=="Hindi")
            {
                // Code for workout mood in Hindi
            }
            else
            {
                //Enter random songs for workout mood
            }
        }
        else if (mood=="Study")
        {
            if(language=="English")
            {
                // Code for study mood in English
            }
            else if (language=="Hindi")
            {
                // Code for study mood in Hindi
            }
            else
            {
                //Enter random songs for study mood
            }
        }
        else if (mood=="Travel")
        {
            if(language=="English")
            {
                // Code for travel mood in English
            }
            else if (language=="Hindi")
            {
                // Code for travel mood in Hindi
            }
            else
            {
                //Enter random songs for travel mood
            }
        }
        else if (mood=="Rainy")
        {
            if(language=="English")
            {
                // Code for rainy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for rainy mood in Hindi
            }
            else
            {
                //Enter random songs for rainy mood
            }
        }
        else if (mood=="Sunny")
        {
            if(language=="English")
            {
                // Code for sunny mood in English
            }
            else if (language=="Hindi")
            {
                // Code for sunny mood in Hindi
            }
            else
            {
                //Enter random songs for sunny mood
            }
        }
        else if (mood=="Snowy")
        {
            if(language=="English")
            {
                // Code for snowy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for snowy mood in Hindi
            }
            else
            {
                //Enter random songs for snowy mood
            }
        }
        else if (mood=="Windy")
        {
            if(language=="English")
            {
                // Code for windy mood in English
            }
            else if (language=="Hindi")
            {
                // Code for windy mood in Hindi
            }
            else
            {
                //Enter random songs for windy mood
            }
        }
        else if (mood=="nostalgic")
        {
            if(language=="English")
            {
                // Code for nostalgic mood in English
            }
            else if (language=="Hindi")
            {
                // Code for nostalgic mood in Hindi
            }
            else
            {
                //Enter random songs for nostalgic mood
            }
        }
        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
        }




                        //age group 30+
        else if (age>30)
        {
             if(mood=="Happy")
        {
            // Code for happy mood
        }
        else if(mood=="Sad")
        {
            // Code for sad mood
        }
        else if(mood=="Energetic")
        {
            // Code for energetic mood
        }
        else if(mood=="Relaxed")
        {
            // Code for relaxed mood
        }
        else if (mood=="romantic")
        {
            // Code for romantic mood
        }
        else if (mood=="angry")
        {
            // Code for angry mood
        }
        else if (mood=="nostalgic")
        {
            // Code for nostalgic mood
        }
        else if (mood=="calm")
        {
            // Code for calm mood
        }
        else if (mood=="motivated")
        {
            // Code for motivated mood
        }
        else if (mood=="melancholic")
        {
            // Code for melancholic mood
        }
        else if (mood=="depressed")
        {
            // Code for depressed mood
        }
        else if (mood=="anxious")
        {
            // Code for anxious mood
        }
        else if (mood=="bored")
        {
            // Code for bored mood
        }
        else if (mood=="upbeat")
        {
            // Code for upbeat mood
        }
        else if (mood=="peaceful")
        {
            // Code for peaceful mood
        }
        else if (mood=="sentimental")
        {
            // Code for sentimental mood
        }
        else if (mood=="hopeful")
        {
            // Code for hopeful mood
        }
        else if (mood=="lonely")
        {
            // Code for lonely mood
        }
        else if (mood=="confident")
        {
            // Code for confident mood
        }
       else if (mood=="gloomy")
        {
            // Code for gloomy mood
        }
        else if (mood=="excited")
        {
            // Code for excited mood
        }
        else if (mood=="curious")
        {
            // Code for curious mood
        }
        else if (mood=="grateful")
        {
            // Code for grateful mood
        }
        else if (mood=="frustrated")
        {
            // Code for frustrated mood
        }
        else if (mood=="Love")
        {
            // Code for hopeful mood
        }
        else if (mood=="Cheerful")
        {
            // Code for cheerful mood
        }
        else if (mood=="chill")
        {
            // Code for chill mood
        }
        else if (mood=="Sleepy")
        {
            // Code for sleepy mood
        }
        else if (mood=="Adventurous")
        {
            // Code for adventurous mood
        }
        else if (mood=="Reflective")
        {
            // Code for reflective mood
        }
        else if (mood=="Playful")
        {
            // Code for playful mood
        }
        else if(mood=="Serene")
        {
            // Code for serene mood
        }
        else if (mood=="Festive")
        {
            // Code for festive mood
        }
        else if (mood=="Euphoric")
        {
            // Code for euphoric mood
        }
        else if (mood=="Party")
        {
            // Code for party mood
        }
        else if (mood=="Aggressive")
        {
            // Code for aggressive mood
        }
        else if (mood=="Hype"){
            // Code for hype mood
        }
        else if (mood=="Workout")
        {
            // Code for workout mood
        }
        else if (mood=="Study")
        {
            // Code for study mood
        }
        else if (mood=="Travel")
        {
            // Code for travel mood
        }
        else if (mood=="Rainy")
        {
            // Code for rainy mood
        }
        else if (mood=="Sunny")
        {
            // Code for sunny mood
        }
        else if (mood=="Snowy")
        {
            // Code for snowy mood
        }
        else if (mood=="Windy")
        {
            // Code for windy mood
        }
        else if (mood=="nostalgic")
        {
            // Code for nostalgic mood
        }
        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
        }
    else
     {
            cout<<"Invalid age entered. Please try again."<<endl;
     }
        
      
        
    }
    


