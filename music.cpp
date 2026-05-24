#include<iostream>
#include<string>
#include<fstream>
using namespace std;
 int musicrecommender(string mood)  //Music Recommender Function
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
int main(){
    int choice=0;
    string mood;
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
        musicrecommender(mood);//Function call for music recommender
        
    }
    
}

