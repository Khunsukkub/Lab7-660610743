#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    string name , movie , Date , brabra;
    int SID;
    char snum[9];

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin.get(snum , 3);
    SID = atoi(snum) - 12;

    cin.ignore(9999, '\n');

    cout << "Fahsai: I think you may be GEAR " << SID << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;


    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin, movie);


    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin, Date);

    cout << "Fahsai: " << Date << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin, brabra);

    cout << "Fahsai: 555+ see you " << Date << ". Bye Bye \\(^ ^)/";



}