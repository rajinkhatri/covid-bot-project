#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<windows.h>
using namespace std;

//class to provide the users with the reply 
class random{
    const int size = 3;
    string new_reply;
    string hi_reply[3]={"hi!",
    "How are you?",
    "Hello there"};

    string who[3]={"I am your bot :) ",
    "I think you know who i am:)",
    "I am your helper bot:)"};

    string what[3]={"My name is helperbot",
    "You can call me anything you like",
    "They often call me a bot but i am just a bad code"};

    string intel[3]={"Yes, I am intelligent",
    "Not much but I can say more than you",
    "Yeah, I am comparable to JARVIS"};

    string illness[4]={"Why what happened?",
    "You can check the information i provide to know more",
    "You should get more rest",
    "You should take extra care"};

    public:        
    void hi_replies();
    void who_replies();
    void what_replies();
    void intelligence();
    void health();
    void activities();
    void guidelines();


};
void random::hi_replies(){
    srand(time(NULL));
    int index = rand() % size;
    for (int i = 0; i < size; i++){
        if(i == index){
        cout<<hi_reply[index]<<endl;
    }
	 }
}

void random::who_replies(){
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i <size; i++){
        if ( i == index){
            cout<<who[index]<<endl;
        }
    }
}

void random::what_replies(){
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i<size; i++){
        if ( i == index){
            cout<<what[i]<<endl;
        }
    }
}

void random::health(){
      srand(time(0));
    int index = rand() % size;
    for (int i = 0; i<size; i++){
        if ( i == index){
            cout<<illness[i]<<endl;
        }
    }  
}

void random::intelligence(){
        srand(time(0));
    int index = rand() % size;
    for (int i = 0; i<size; i++){
        if ( i == index){
            cout<<intel[i]<<endl;
        }
    }
}

void random::activities(){
        fstream sym("activities.txt");

    while (1)
    {
        getline(sym, new_reply);
        cout<< new_reply << endl;
        Sleep(100);
        if (sym.eof())
        {
            cout << "*********************" << endl;
            break;
        }
    }
    sym.close();
}

void random::guidelines(){
    cout<<"The bot works by checking the keywords that you provide in the strings."<<endl;
    Sleep(500);
    cout<<"Here are the list of keywords for you to get started"<<endl;
    cout<<"symptoms ------->  To know about the symptoms of COVID"<<endl;
    cout<<"prevention -------> To know about the prevention of COVID"<<endl;
    cout<<"hospitals -------> To know about the major hospitals where you can get yourself tested"<<endl;
    cout<<"game -------> To play a number guessing game with the bot"<<endl;
    cout<<"probability -------> To check your chance of being contacted with COVID"<<endl;
    cout<<"activities -------> To view a list of activities to do during free time in lockdown"<<endl;
    cout<<"Also the bot can reply to various other questions you ask. So have fun talking with the Bot and get information as you desire"<<endl;
}

//class to play the game
class num_game{
    int num;
    char ch, ch1;
    public:
    int get_input();
    char char_input();
    void play_game();
};
 int num_game::get_input(){
     Sleep(1000);
         cin>>num;
        if ( num < 0 || num > 10  ){
            cout<<"Out of range";
        }
        else{
            cout<<"You guessed "<<num<<endl;
        }

     return num;
 }

 char num_game::char_input(){
     cout<<"Do you still want to play the game?[Y/N]"<<endl;
     cin>>ch;
    if ( ch == 'y' || ch == 'Y'){
        play_game();
    }
    else if ( ch == 'n' || ch == 'N'){
        cout<<"Thank you for playing the game"<<endl;
    }
    else {
        cout<<"Wrong expression"<<endl;
    }
    return ch;
 }

void num_game::play_game(){
   srand(time(NULL));

    while(1){
        cout<<"Enter the number you want to guess"<<endl;
        int s_number = 1 + rand() % 10;
        int g_number = get_input();
        if(g_number == s_number){
            cout<<"The number to be guessed is "<<s_number<<endl;
            cout<<"You guessed the right number"<<endl;
        }
        else{
            cout<<"The number to be guessed is "<<s_number<<endl;
            cout<<"Your luck runs out now"<<endl;
        }
         char ch1 = char_input();
        if ( ch1 == 'y'){
            play_game();
        }
        else{
            break;
        }

    };

}

// class guessdis{
//     int chance;
//     string diss;
//     public:
//     int check();
//     void finalguess();
// };

// int guessdis::check(){
//     cout<<"I will try to guess the disease or illness you have so please say about your symptoms honestly"<<endl;
//     cout<<"Please enter the symptoms that you are having.";
//     cin>>diss;
//     if (diss.find("fever")!= string::npos){
//         chance=1;
//     }
//     if (diss.find("fever")!= string::npos && diss.find("cold")!= string::npos){
//         chance = 2;
//     }
//     if (diss.find("fever") != string::npos && diss.find("cold") != string::npos && diss.find("cough")!= string::npos){
//         chance = 3;
//     }
//     else{
//         chance = 0;
//     }
//     return chance;

// }

// void guessdis::finalguess(){
//      int chance2 = check();
//     if (chance2 == 0){
//         cout<<"Sorry, I couldnt guess the disease";
//     }
//     if (chance2 == 1){
//         cout<<"It might be a normal fever. But it's better to take the medicines quickly";
//     }
//     if (chance2 == 2){
//         cout<<"You are showing the symptoms of corona. It's better to take the probability test quickly"<<endl;
//     }
//     if ( chance2 == 3){
//         cout<<"You already seem to be suffering from corona. Why not take the probability test "<<endl;
//     }
// }


