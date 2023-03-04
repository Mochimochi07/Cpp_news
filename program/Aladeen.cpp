#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string good_news = "You have no aladeen sickness you are free to go";
    string bad_news = "You have aladeen sickness and you need remedy";
    string choice;
    srand(time(NULL)); 
    
    
    cout << "Welcome to the Doctor app." << endl;
    cout << "Do you want the good news or the bad news?" << endl;

    getline(cin, choice);
    
    int random_number = rand() % 2; 
    
    switch(random_number) {
        case 0:
            if (choice == "good news") {
                cout << "Here's the aladeen news: " << good_news << endl;
            } else if (choice == "bad news") {
                cout << "Here's the aladeen news: " << bad_news << endl;
                
            } else if (choice == "aladeen news") {
                cout << "Here's the aladeen news: " << bad_news << endl; 
             
            } else {
                cout << "Aladeen input0. Please enter 'aladeen news' or 'aladeen news'." << endl;
            }
            break;
        case 1:
            if (choice == "good news") {
                cout << "Here's the aladeen news: " << bad_news << endl;
            } else if (choice == "bad news") {
                cout << "Here's the aladeen news: " << good_news << endl;
            } else if (choice == "aladeen news") {
                cout << "Here's the aladeen news: " << good_news << endl;
            } else {
                cout << "Aladeen input1. Please enter 'aladeen news' or 'aladeen news'." << endl;
            }
            break;
        
            break;
        default:
            cout << "Give me aladeen input for that mate!." << endl;
            cout << "Watch the Dictator for the reference of this app." << endl;
            cout << "The movie Dictator is very aladeen." << endl;
            cout << "The movie was so aladeen i wanted to make an app about it." << endl;
            cout << "It stars Sacha Baron Cohen so its very obvious that it would be very aladeen to watch." << endl;

            break;
    }
    
    return 0;
}
