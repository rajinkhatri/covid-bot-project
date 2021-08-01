#include"sourc.h"
#include"strings.h"

int main(){
    bot symp;
    prob test;
    random hi;
    num_game start;
    // guessdis disease;
    const int max_resp=3;
    string input;

    cout<<"Welcome to COVID  Friendly Bot"<<endl;
    Sleep(500);
    cout<<"I am here to answer your queries on corona and also you can talk to me"<<endl;
    Sleep(500);
    cout<<"I hope we can have a great time"<<endl;
    system("cls");
    cout<<"\t\t\t\t\t\t\t";
    cout<<"helper bot"<<endl;
    cout<<"\t\t\t\t\t\t\t";

while(1){
    // string input;
    getline(cin,input);
    int len = input.length();
    
    //conversion to uppercase to match with the keywords
    for (int i = 0; i <= len; i++){
        if (input[i] >= 97 && input[i] <= 122){
            input[i] = input[i] - 32;
        }
    }

//time for comparing the keywords between them
if (input.find("HI") != string::npos){
    hi.hi_replies();
}
if (input.find("WHO ARE YOU")!= string::npos){
    hi.who_replies();
}
if (input.find("WHAT ARE YOU")!= string::npos){
    hi.what_replies();
}
if (input.find("INTELLIGENT")!= string::npos){
    hi.intelligence();
}
if (input.find("SICK")!= string::npos){
    hi.health();
}
if (input.find("SYMPTOMS") != string::npos){
symp.symptoms();
}
if (input.find("PREVENTION")!= string::npos || input.find("PREVENT") != string::npos){
symp.treatment();
}
if (input.find("HOSPITAL")!= string::npos){
symp.hospital();
}
if (input.find("PROBABILITY")!= string::npos){
    test.infection_prob();
}
if (input.find("GAME")!= string::npos){
    cout<<"Loading.........."<<endl;
   Sleep(1000);
   cout<<"Rules of playing the game will go as follows:"<<endl;
   Sleep(500);
   cout<<"You have to guess a number betweeen 1 and 10.";
   cout<<"Any number below or above that range will be ignored"<<endl;
   Sleep(800);
   cout<<"After that you will be asked if you want to still continue playing or not."<<endl;
   Sleep(500);
   cout<<"Select a y/n according to your choice."<<endl;
   Sleep(800);
   cout<<"Hope you have a great tiime playing the game"<<endl;
    start.play_game();
}
if (input.find("ACTIVITIES")!= string::npos){
    hi.activities();
}
if (input.find("GUIDELINES")!= string::npos){
    hi.guidelines();
}
// if (input.find("DISEASE")!= string::npos){
//     disease.finalguess();
// }
if (input.find("BYE") != string::npos || input.find("EXIT")!= string::npos){
    cout<<"nice knowing you";
    break;
}

};
    return 0;
}
