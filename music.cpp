#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    int choice=0;
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
 
    } while (choice > 1 && choice < 4); 
    
}


