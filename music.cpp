#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    int choice=0;
    string mood;
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
        cout<<"Enter mood";
        cin>>mood;
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

        else
        {
            cout<<"Invalid mood entered. Please try again."<<endl;
        }
    }
    
}

