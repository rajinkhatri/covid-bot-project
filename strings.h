#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <windows.h>
#include <conio.h>
using namespace std;

//class to provide the users with the reply
class random
{
    const int size = 3;
    string new_reply;
    string hi_reply[3] = {"hi!",
                          "How are you?",
                          "Hello there"};

    string who[3] = {"I am your bot :) ",
                     "I think you know who i am:)",
                     "I am your helper bot:)"};

    string what[3] = {"My name is helperbot",
                      "You can call me anything you like",
                      "They often call me a bot but i am just a bad code"};

    string intel[3] = {"Yes, I am intelligent",
                       "Not much but I can say more than you",
                       "Yeah, I am comparable to JARVIS"};

    string illness[3] = {
        "Why what happened?",
        "You might want to check your probability of being infected with corona. I can do that for you.",
        "You should get more rest and observe your symptoms to be extra careful.",
    };
    string goodm[3] = {
        "Good morning",
        "It is indeed a very good morning. Hope you have a great day.",
        "Good morning. Have a great day.",
    };
    string gooda[3] = {"Good Afternoon",
                       "Hope you have a great day",
                       "Its a very good day. I hope all your plans are fulfilled today. "};
    string goodn[3] = {"Good night",
                       "Have a great night",
                       "Sleep Well. Take care."};
    string fne[3] = {"Glad to hear that",
                     "Thats really good news.",
                     "As expected of you."};
    string nfne[3] = {"You can share your problems with me",
                      "I am here for you.",
                      "You will be fine. Beleive in yourself"};
    string love[3] = {"I love you too.",
                      "HAHA, Have you seen your face in the mirror?",
                      "Yeah, I also love you like a sibling."};
    string joke[3] = {"What do you call a boomerang that won’t come back?--->A stick",
                      "What time is it when the clock strikes 13?--->Time to get a new clock.",
                      "Why did the kid bring a ladder to school?--->Because she wanted to go to high school."};
    string thankyou[3] = {"Welcome!",
                          "It's my pleasure to serve you.",
                          "Happy to see that you are pleased."};

public:
    void hi_replies();
    void who_replies();
    void what_replies();
    void intelligence();
    void health();
    void activities();
    void guidelines();
    void dat();
    void gm();
    void ge();
    void gn();
    void rfine();
    void nrfine();
    void rlove();
    void rjoke();
    void tq();
};
void random::hi_replies()
{
    srand(time(NULL));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << hi_reply[index] << endl;
        }
    }
}

void random::who_replies()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << who[index] << endl;
        }
    }
}

void random::what_replies()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << what[i] << endl;
        }
    }
}

void random::health()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << illness[i] << endl;
        }
    }
}

void random::intelligence()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << intel[i] << endl;
        }
    }
}
void random::gm()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << goodm[index] << endl;
        }
    }
}
void random::ge()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << gooda[index] << endl;
        }
    }
}
void random::gn()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << goodn[index] << endl;
        }
    }
}
void random::rfine()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << fne[index] << endl;
        }
    }
}
void random::nrfine()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << nfne[index] << endl;
        }
    }
}
void random::rlove()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << love[index] << endl;
        }
    }
}
void random::rjoke()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << joke[index] << endl;
        }
    }
}
void random::tq()
{
    srand(time(0));
    int index = rand() % size;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            cout << thankyou[index] << endl;
        }
    }
}
void random::guidelines()
{
    cout << "The bot works by checking the keywords that you provide in the strings." << endl;
    Sleep(500);
    cout << "Here are the list of keywords for you to get started" << endl;
    cout << "symptoms ------->  To know about the symptoms of COVID" << endl;
    cout << "prevention -------> To know about the prevention of COVID" << endl;
    cout << "hospitals -------> To know about the major hospitals where you can get yourself tested" << endl;
    cout << "game -------> To play a number guessing game with the bot" << endl;
    cout << "probability -------> To check your chance of being contacted with COVID" << endl;
    cout << "activities -------> To view a list of activities to do during free time in lockdown" << endl;
    cout << "song -------> To listen to song" << endl;
    cout << "Also the bot can reply to various other questions you ask. So have fun talking with the Bot and get information as you desire" << endl;
}

void random::dat()
{
    time_t now = time(0);
    char *dt = ctime(&now);

    cout << "The current date and time is: " << endl
         << dt << endl;
}

//class to play the game
class num_game
{
    string num;
    int num1;
    char ch, ch1;

public:
    int get_input();
    char char_input();
    void play_game();
};
int num_game::get_input()
{
    Sleep(1000);
    cout << "\t\t\t\t\t\t\t\t\t>";
    getline(cin, num);
    try
    {
        if (num == "1" || num == "2" || num == "3" || num == "4" || num == "5" || num == "6" || num == "7" || num == "8" || num == "9" || num == "10")
        {
            int num1 = stoi(num);
        }
        else
            throw(num);
    }
    catch (string)
    {
        cout << "Please provide a valid input" << endl;
        get_input();
    }

    return num1;
}

char num_game::char_input()
{
    cout << "Do you still want to play the game?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t>";
    cin >> ch;
    fflush(stdin);
    if (ch == 'y' || ch == 'Y')
    {
        play_game();
    }
    else if (ch == 'n' || ch == 'N')
    {
        cout << "Thank you for playing the game" << endl;
    }
    else
    {
        cout << "Wrong expression" << endl;
    }
    return ch;
}

void num_game::play_game()
{
    srand(time(NULL));

    while (1)
    {
        cout << "Enter the number you want to guess." << endl;
        int s_number = 1 + rand() % 10;
        int g_number = get_input();
        if (g_number == s_number)
        {
            cout << "The number to be guessed is " << s_number << endl;
            cout << "You guessed the right number." << endl;
        }
        else
        {
            cout << "The number to be guessed is " << s_number << endl;
            cout << "You lose. Better luck next time." << endl;
        }
        char ch1 = char_input();
        if (ch1 == 'y' || ch1 == 'Y')
        {
            play_game();
        }
        else
        {
            break;
        }
    };
}

//class to play the music
class music
{
    string choice;
    string nchoice;
    string echoice;
    string mchoice;
    string ichoice;
    char ch;

public:
    void play_music();
    void play_nepali();
    void play_english();
    void play_corona();
    void play_mixed();
};
void music::play_nepali()
{
    bool flag = true;
    cout << "Which song would you like to listen to?" << endl;
    cout << "Please select your choice using the number" << endl;
    cout << "1. Bimbaakash- Najeek" << endl;
    cout << "2. Ashutosh KC - MAYA" << endl;
    cout << "3. Kathmandu Bazar | Beest Production " << endl;
    cout << "4. Duma Dum Mast Kalander ( Remix Cover) | Fiddler's Green" << endl;
    cout << "5. Birsiney Hau Ki - The Elements" << endl;
    cout << "6. Sajjan Raj Vaidya - Hawaijahaj " << endl;
    cout << "7. Or search from the entire playlist" << endl;
    cout << "Or Press 0 to Exit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t"
         << ">";
    cin >> nchoice;
    fflush(stdin);
    try
    {
        if ((nchoice == "1" || nchoice == "2" || nchoice == "3" || nchoice == "4" || nchoice == "5" || nchoice == "6" || nchoice == "7" || nchoice == "0") && flag)
        {
            if (nchoice == "1")
            {
                string n1 = "start https://www.youtube.com/watch?v=AMRGmAh2NTk";
                system(n1.c_str());
            }
            else if (nchoice == "2")
            {
                string n2 = "start https://www.youtube.com/watch?v=kEbcHhNsRoU";
                system(n2.c_str());
            }
            else if (nchoice == "3")
            {
                string n3 = "start https://www.youtube.com/watch?v=H57Z67SYwhw";
                system(n3.c_str());
            }
            else if (nchoice == "4")
            {
                string n4 = "start https://www.youtube.com/watch?v=G9IznvTagO8";
                system(n4.c_str());
            }
            else if (nchoice == "5")
            {
                string n5 = "start https://www.youtube.com/watch?v=H7bzyggFYSE";
                system(n5.c_str());
            }
            else if (nchoice == "6")
            {
                string n6 = "start https://www.youtube.com/watch?v=Kni9OFsh8UM";
                system(n6.c_str());
            }
            else if (nchoice == "7")
            {
                string n7 = "start https://www.youtube.com/playlist?list=PL5FF0k1tOeoWNTf_iOljEihzqPBuyG4Te";
                system(n7.c_str());
            }
            else if (nchoice == "0")
            {
                cout << "Thank you" << endl;
                flag = false;
            }
        }
        else
        {
            throw(nchoice);
        }
    }
    catch (string)
    {
        cout << "INVALID INPUT" << endl;
        play_nepali();
    }
}

void music::play_english()
{
    bool flag = true;
    cout << "Which song would you like to listen to?" << endl;
    cout << "Please select your choice using the number" << endl;
    cout << "1. Måneskin - Beggin'" << endl;
    cout << "2. George Ezra - Budapest" << endl;
    cout << "3. Joel Adams - Please Don't Go" << endl;
    cout << "4. Ollie - Stuck" << endl;
    cout << "5. Shakira - Waka Waka (This Time for Africa)" << endl;
    cout << "6. Rick Astley - Never Gonna Give You Up" << endl;
    cout << "7. Or search from the entire playlist"<<endl;
    cout << "Or Press 0 to Exit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t"
         << ">";
    cin >> echoice;
    fflush(stdin);
    try
    {
        if ((echoice == "1" || echoice == "2" || echoice == "3" || echoice == "4" || echoice == "5" || echoice == "6" || echoice == "7" || echoice == "0") && flag)
        {
            if (echoice == "1")
            {
                string e1 = "start https://www.youtube.com/watch?v=zrFI2gJSuwA";
                system(e1.c_str());
            }
            else if (echoice == "2")
            {
                string e2 = "start https://www.youtube.com/watch?v=VHrLPs3_1Fs";
                system(e2.c_str());
            }
            else if (echoice == "3")
            {
                string e3 = "start https://www.youtube.com/watch?v=S2oxFIsENgM";
                system(e3.c_str());
            }
            else if (echoice == "4")
            {
                string e4 = "start https://www.youtube.com/watch?v=ZWq_GMSO4rk";
                system(e4.c_str());
            }
            else if (echoice == "5")
            {
                string e5 = "start https://www.youtube.com/watch?v=pRpeEdMmmQ0";
                system(e5.c_str());
            }
            else if (echoice == "6")
            {
                string e6 = "start https://www.youtube.com/watch?v=dQw4w9WgXcQ";
                system(e6.c_str());
            }
            else if (echoice == "7")
            {
                string e7 = "start https://www.youtube.com/playlist?list=PL5FF0k1tOeoVPuwQouCX19vKAEZNycoOC";
                system(e7.c_str());
            }
            else if (echoice == "0")
            {
                cout << "Thank you" << endl;
                flag = false;
            }
        }
        else
        {
            throw(echoice);
        }
    }
    catch (string)
    {
        cout << "INVALID INPUT" << endl;
        play_english();
    }
}

void music::play_corona()
{
    bool flag = true;
    cout << "Which song would you like to listen to?" << endl;
    cout << "Please select your choice using the number" << endl;

    cout << "1. Corona Virus Prevention Song " << endl;
    cout << "2. CORONA VIRUS - AWARENESS NEPALI SONG" << endl;
    cout << "3. CORONA VIRUS, NEPALI SONG | MELINA RAI | BINAY KARKI " << endl;
    cout << "4. Corona Virus Awareness Song(Hindi Version)" << endl;
    cout << "5. Hindi Song Corona," << endl;
    cout << "6. Corona Public Awareness Song Ft. Maha Jodi" << endl;
    cout << "7. Or search from the entire playlist"<<endl;
    cout << "Or Press 0 to Exit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t>";
    cin >> mchoice;
    fflush(stdin);
    try
    {
        if ((mchoice == "1" || mchoice == "2" || mchoice == "3" || mchoice == "4" || mchoice == "5" || mchoice == "6" || mchoice == "7" || mchoice == "0") && flag)
        {
            if (mchoice == "1")
            {
                string m1 = "start https://www.youtube.com/watch?v=fMENSEDpU_I";
                system(m1.c_str());
            }
            else if (mchoice == "2")
            {
                string m2 = "start https://www.youtube.com/watch?v=fQdrdG8ojzU";
                system(m2.c_str());
            }
            else if (mchoice == "3")
            {
                string m3 = "start https://www.youtube.com/watch?v=fQdrdG8ojzU";
                system(m3.c_str());
            }
            else if (mchoice == "4")
            {
                string m4 = "start https://www.youtube.com/watch?v=ajTBEOPLg9E";
                system(m4.c_str());
            }
            else if (mchoice == "5")
            {
                string m5 = "start https://www.youtube.com/watch?v=cby_nwnIgKQ";
                system(m5.c_str());
            }
            else if (mchoice == "6")
            {
                string m6 = "start https://www.youtube.com/watch?v=9OSZqz_MsDw";
                system(m6.c_str());
            }
            else if (mchoice == "7")
            {
                string m7 = "start https://www.youtube.com/playlist?list=PL5FF0k1tOeoWG7RDfNGbPdgrf-DBw2X0E";
                system(m7.c_str());
            }
            else if (ichoice == "0")
            {
                cout << "Thank you" << endl;
                flag = false;
            }
        }
        else
        {
            throw(mchoice);
        }
    }
    catch (string)
    {
        cout << "INVALID INPUT" << endl;
        play_corona();
    }
}
void music::play_mixed()
{
    bool flag = true;
    cout << "Which song would you like to listen to?" << endl;
    cout << "Please select your choice using the number" << endl;
    cout << "1. Bimbaakash- Najeek" << endl;
    cout << "2. Duma Dum Mast Kalander ( Remix Cover) | Fiddler's Green" << endl;
    cout << "3. George Ezra - Budapest" << endl;
    cout << "4. Rick Astley - Never Gonna Give You Up" << endl;
    cout << "5. CORONA VIRUS - AWARENESS NEPALI SONG" << endl;
    cout << "6. Corona Public Awareness Song Ft. Maha Jodi" << endl;
    cout << "7. Or search from the entire playlist";
    cout << "Or Press 0 to Exit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t"
         << ">";
    cin >> ichoice;
    fflush(stdin);
    try
    {
        if ((ichoice == "1" || ichoice == "2" || ichoice == "3" || ichoice == "4" || ichoice == "5" || ichoice == "6" || ichoice == "7" || ichoice == "0") && flag)
        {
            if (ichoice == "1")
            {
                string m1 = "start https://www.youtube.com/watch?v=AMRGmAh2NTk";
                system(m1.c_str());
            }
            else if (ichoice == "2")
            {
                string m2 = "start https://www.youtube.com/watch?v=G9IznvTagO8";
                system(m2.c_str());
            }
            else if (ichoice == "3")
            {
                string m3 = "start https://www.youtube.com/watch?v=VHrLPs3_1Fs";
                system(m3.c_str());
            }
            else if (ichoice == "4")
            {
                string m4 = "start https://www.youtube.com/watch?v=dQw4w9WgXcQ";
                system(m4.c_str());
            }
            else if (ichoice == "5")
            {
                string m5 = "start https://www.youtube.com/watch?v=fQdrdG8ojzU";
                system(m5.c_str());
            }
            else if (ichoice == "6")
            {
                string m6 = "start https://www.youtube.com/watch?v=9OSZqz_MsDw";
                system(m6.c_str());
            }
            else if (ichoice == "7")
            {
                string m7 = "start https://www.youtube.com/playlist?list=PLAPo1R_GVX4IZGbDvUH60bOwIOnZplZzM";
                system(m7.c_str());
            }
            else if (ichoice == "0")
            {
                cout << "Thank you" << endl;
                flag = false;
            }
        }
        else
        {
            throw(ichoice);
        }
    }
    catch (string)
    {
        cout << endl
             << "INVALID INPUT" << endl;
        fflush(stdin);
        play_mixed();
    }
}
void music::play_music()
{
    cout << "what kind of songs would you like to listen to?" << endl;
    Sleep(700);
    cout << "1. Nepali songs" << endl;
    cout << "2. English songs" << endl;
    cout << "3. Corona Songs" << endl;
    cout << "4. Mixed Songs" << endl;
    Sleep(800);
    bool flag = true;
    cout << "Please select the number based on your choice" << endl;
    cout << "Or Press 0 to Exit" << endl;
    cout << "\t\t\t\t\t\t\t\t\t"
         << ">";
    cin >> choice;
    fflush(stdin);
    try
    {
        if (((choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "0") && flag && choice.length() < 2 && choice.length() != 0))
        {
            if (choice == "1")
            {
                play_nepali();
            }

            if (choice == "2")
            {
                play_english();
            }

            if (choice == "3")
            {
                play_corona();
            }

            if (choice == "4")
            {
                play_mixed();
            }
            if (choice == "0")
            {
                cout << "Thank you" << endl;
                flag = false;
            }
        }
        else
        {
            throw(choice);
        }
    }
    catch (string)
    {
        cout << endl
             << "\t\t\t\tINVALID INPUT" << endl;
        fflush(stdin);
        play_music();
    }
}
