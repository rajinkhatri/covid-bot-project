#include<iostream>
// #include<cstring>
#include<vector>
#include<windows.h>
#include<fstream>
#include<string>
using namespace std;
//class to print the information about corona
 class bot{
     int num = 0;
     int size_array = 75;
     string out;
     public:
     bot(){};
     void symptoms();
     void treatment();
     void hospital();
 };
void bot::symptoms(){
        fstream sym("symptoms.txt");

    while (1)
    {
        getline(sym, out);
        cout<< out << endl;
        if (sym.eof())
        {
            cout << "*********************" << endl;
            break;
        }
    Sleep(1000);
    }
    sym.close();
}
void bot::treatment()
{
    cout << "prevention" << endl;
    fstream prev("treatment.txt");
    while (1)
    {
        getline(prev, out);
        cout << out << endl;
        Sleep(1000);
        if (prev.eof())
        {
            cout << "************" << endl;
            break;
        }
    }
}
void bot::hospital()
{
    cout << "hospitals" << endl;
    char ch25;
    cout<<"Would to like to open the MAPS to know about the hospitals?"<<endl;
    cin>>ch25;
    if ( ch25 == 'y' || ch25 == 'Y'){
        string map = "start https://www.google.com/maps/@27.6922368,85.344256,13z";
        system(map.c_str());
                    }
    else{
        fstream hos("hospitals.txt");
        getline(hos, out);
        cout << out << endl;
        Sleep(1000);
        if (hos.eof())
        {
            cout << "****************" << endl;
            //  break;
        }
}
}

//new class to determine the probability of the corona
class prob{
    int prob1,prob2,prob3,prob4,prob5, prob6,prob7;
    float total_prob;
    // string answer;
    char ans;
    public:
    prob(){};
    void infection_prob();
};
void prob::infection_prob(){
    cout<<"Let's start with the questions"<<endl;
    Sleep(200);
    cout<<"I will ask a series of question and based on that i will calculate ur probability of being infected"<<endl;
    Sleep(200);
    cout<<"Do you have any  f the symptoms mentioned below?"<<endl;
    cout<<"Fever, Common cold, Dry Cough"<<endl;
    cin>>ans;
    if (ans == 'y' ){
        prob1 = 20;
    }
    else {
        prob1 = 0;
    }
    Sleep(700);
    cout<<"Did you go to visit outside in the last few days?"<<endl;
    cin>>ans;
        if (ans == 'y' ){
        prob2 = 20;
    }
    else {
        prob2 = 0;
    }
    Sleep(700);
    cout<<"Were you in contact with any infected person?"<<endl;
    cin>>ans;
        if (ans == 'y' ){
        prob3 = 20;
    }
    else {
        prob3 = 0;
    }
    Sleep(700);
    cout<<"Do you regulary use mask and sanitizers?"<<endl;
    cin>>ans;
    if (ans == 'y' ){
        prob4 = -10;
    }
    else {
        prob4 = 10;
    }
    Sleep(700);
    cout<<"Have you been vaccinated against corona?"<<endl;
    cin>>ans;
    if (ans == 'y'){
        prob5 = -10;
    }
    else {
        prob5 = 10;
    }
    Sleep(700);
    cout<<"Has anyone from your family suffered from corona before?"<<endl;
    cin>>ans;
        if (ans == 'y' ){
        prob6 = 10;
    }
    else {
        prob6 = 0;
    }
    Sleep(700);
    cout<<"Do you have any other diseases?"<<endl;
    cin>>ans;
    if ( ans == 'y'){
        prob7 = 10;
    }
    else {
        prob7 = 0;
    }

    total_prob = (prob1 + prob2 + prob3 + prob4 + prob5 + prob6 + prob7) *(100/70);
    cout<<"Your probability of being infected with corona is"<<total_prob<<endl;
    Sleep(800);

if (total_prob <= 10){
    cout<<"You are in the safe zone. you should continue following such good habits"<<endl;
}
else if (total_prob >10 && total_prob <= 40){
    cout<<"You have the risk to suffer from corona. I suggest you to stay at home and take necessary precautions "<<endl;
}
else if (total_prob >40 && total_prob <= 75){
    cout<<"You are in the high danger. I ask you to immediately consult a doctor or hospital and do the pcr test to confirm your status"<<endl;
}
else {
    cout<<"You are in the red alert zone. You should seek immediate attention."<<endl;
}
}


