#include "sourc.h"
#include "strings.h"

int main()
{
    system("Color 70");
    bot symp;
    prob test;
    random hi;
    num_game start;
    music songs;
    const int max_resp = 3;
    string input;
    string ch;

    cout << "Welcome to COVID  Friendly Bot." << endl;
    Sleep(500);
    cout << "\t\tI am here to answer your queries on corona and also you can talk to me." << endl;
    Sleep(1000);
    cout << "\t\tI hope we can have a great time sharing information and talking to each other." << endl;
    Sleep(1000);
    system("cls");
    cout << "\t\t\t\t";
    cout << "COVID Bot" << endl;
    cout << "***************************************************************************************" << endl;

    while (1)
    {
        // string input;
        cout << "\t\t\t\t\t\t\t\t\t>";
        // scanf("\t\t\t\t\t\t\t%s",input);
        getline(cin, input);
        int len = input.length();

        //conversion to uppercase to match with the keywords
        for (int i = 0; i <= len; i++)
        {
            if (input[i] >= 97 && input[i] <= 122)
            {
                input[i] = input[i] - 32;
            }
        }

        //time for comparing the keywords between them
        if (input.find("HI") != string::npos || input.find("HELLO") != string::npos)
        {
            hi.hi_replies();
        }
        if (input.find("WHO ARE YOU") != string::npos)
        {
            hi.who_replies();
        }
        if (input.find("WHAT ARE YOU") != string::npos)
        {
            hi.what_replies();
        }
        if (input.find("INTELLIGENT") != string::npos)
        {
            hi.intelligence();
        }
        if (input.find("SICK") != string::npos || input.find("ILL") != string::npos)
        {
            hi.health();
        }
        if (input.find("SYMPTOMS") != string::npos)
        {
            symp.symptoms();
        }
        if (input.find("PREVENTION") != string::npos || input.find("PREVENT") != string::npos || input.find("TREATMENT") != string::npos)
        {
            symp.treatment();
        }
        if (input.find("HOSPITAL") != string::npos)
        {
            symp.bhospital();
        }
        if (input.find("PROBABILITY") != string::npos || input.find("TEST") != string::npos)
        {
            test.infection_prob();
        }
        if (input.find("GAME") != string::npos)
        {
            cout << "Loading>>>>>>>>>>>>>" << endl;
            Sleep(1000);
            cout << "Rules of playing the game will go as follows:" << endl;
            Sleep(500);
            cout << "You have to guess a number betweeen 1 and 10.";
            cout << "Any number below or above that range will be ignored" << endl;
            Sleep(800);
            cout << "After that you will be asked if you want to still continue playing or not." << endl;
            Sleep(500);
            cout << "Select a y/n according to your choice." << endl;
            Sleep(800);
            cout << "Hope you have a great tiime playing the game" << endl;
            start.play_game();
        }
        if (input.find("ACTIVITIES") != string::npos || input.find("BORED") != string::npos)
        {
            cout << "\t\t\t\tWhat can I do to entertain you?[PLAY GAME OR  PLAY SONG]";
        }
        if (input.find("GUIDELINES") != string::npos || input.find("MANUAL") != string::npos || input.find("HELP") != string::npos)
        {
            hi.guidelines();
        }
        if (input.find("SONG") != string::npos || input.find("MUSIC") != string::npos)
        {
            songs.play_music();
            cout << "Would you like to try again?[Y/N]" << endl;
            cout << "\t\t\t\t\t\t\t\t\t";
            getline(cin,ch);
            fflush(stdin);
            if (ch == "y" || ch == "Y")
            {
                songs.play_music();
            }
            else
            {
                cout << "Thank you." << endl;
            }
        }
        if (input.find("BYE") != string::npos || input.find("EXIT") != string::npos)
        {
            cout << "Bye" << endl;
            cout << "Nice knowing you. Hope to see you again soon";
            break;
        }
        if (input.find("DATE") != string::npos)
        {
            hi.dat();
        }
        if (input.find("WORLD") != string::npos)
        {
            cout<<"Opening CORONA World Meter"<<endl;
            Sleep(700);
            string wm = "start https://www.worldometers.info/coronavirus/";
            system(wm.c_str());
        }
        if (input.find("NEPAL") != string::npos /*|| input.find("CORONA CASES") != string::npos*/)
        {
            cout<<"Opening CORONA Nepal Meter"<<endl;
            Sleep(700);
            string nm = "start https://www.worldometers.info/coronavirus/country/nepal/";
            system(nm.c_str());
        }
        if (input.find("FINE") != string::npos)
        {
            hi.rfine();
        }
        if (input.find("THANK YOU") != string::npos)
        {
            hi.tq();
        }
        if (input.find("GOOD MORNING") != string::npos)
        {
            hi.gm();
        }
        if (input.find("GOOD EVENING") != string::npos)
        {
            hi.ge();
        }
        if (input.find("GOOD NIGHT") != string::npos)
        {
            hi.gn();
        }
        if (input.find("BIRTHDAY") != string::npos)
        {
            cout << "Happy Birthday. Have a great day"<<endl;
        }
        if (input.find("I LOVE YOU") != string::npos)
        {
            hi.rlove();
        }
        if (input.find("JOKE") != string::npos)
        {
            hi.rjoke();
        }
        if (input.length() == 0)
        {
            cout << "enter a valid command" << endl;
        }
    };
    return 0;
}