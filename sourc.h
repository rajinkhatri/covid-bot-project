#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
//class to print the information about corona
class bot
{
    int num = 0;
    int size_array = 75;
    string out;

public:
    bot(){};
    void symptoms();
    void treatment();
    void hospitals();
    void bhospital();
};
void bot::symptoms()
{
    fstream sym("symptoms.txt");

    while (1)
    {
        getline(sym, out);
        cout << out << endl;
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
void bot::hospitals()
{
    fstream hos("hospitals.txt");
    while (1)
    {
        getline(hos, out);
        cout << out << endl;
        Sleep(1000);
        if (hos.eof())
        {
            cout << "************" << endl;
            break;
        }
    }
}
void bot::bhospital()
{
    string ch25;
    cout << "Would to like to open the MAPS to know about the hospitals?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ch25;
    fflush(stdin);
    try
    {
        if (ch25 == "y" || ch25 == "Y" && ch25.length() < 2 && ch25.length() != 0)
        {
            string map = "start https://www.google.com/maps/@27.6922368,85.344256,13z";
            system(map.c_str());
        }
        else
            throw(ch25);
    }
    catch (string)
    {
        hospitals();
    }
}

//new class to determine the probability of the corona
class prob
{
    float total_prob = 0;
    string ans;

public:
    prob(){};
    void infection_prob();
    int handling(string, float);
};
int prob::handling(string ans, float prob)
{
    try
    {
        if ((ans == "y" || ans == "Y") && ans.length() < 2 && ans.length() != 0)
        {
            prob += 20;
        }
        else
        {
            throw(ans);
        }
    }
    catch (string)
    {
        prob += 0;
    }
    return prob;
}
void prob::infection_prob()
{
    cout << "Let's start with the questions" << endl;
    Sleep(1000);
    cout << "I will ask a series of question and based on that i will calculate ur probability of being infected" << endl;
    Sleep(1000);
    cout << "Do you have any  of the symptoms mentioned below?[Y/N]" << endl;
    cout << "Fever, Common cold, Dry Cough" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    fflush(stdin);
    float p1 = handling(ans, total_prob);

    Sleep(700);
    cout << "Did you go to visit outside in the last few days?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    float p2 = handling(ans, total_prob);

    Sleep(700);
    cout << "Were you in contact with any infected person?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    float p3 = handling(ans, total_prob);

    Sleep(700);
    cout << "Do you regulary use mask and sanitizers?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    float p4 = handling(ans, total_prob);

    Sleep(700);
    cout << "Have you been vaccinated against corona?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    float p5 = handling(ans, total_prob);

    Sleep(700);
    cout << "Has anyone from your family suffered from corona before?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    float p6 = handling(ans, total_prob);

    Sleep(700);
    cout << "Do you have any other diseases?[Y/N]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t";
    cin >> ans;
    fflush(stdin);
    float p7 = handling(ans, total_prob);

    float total_prob1 = p1 + p2 + p3 - p4 - p5 + p6 + p7;
    cout << "Your probability of being infected with corona is " << (total_prob1 * 10) / 14 << " %." << endl;
    Sleep(800);

    if (total_prob <= 10)
    {
        cout << "You are in the safe zone. You should continue following such good habits" << endl;
    }
    else if (total_prob > 10 && total_prob <= 40)
    {
        cout << "You have the risk to suffer from corona. I suggest you to stay at home and take necessary precautions " << endl;
    }
    else if (total_prob > 40 && total_prob <= 75)
    {
        cout << "You are in the high danger. I ask you to immediately consult a doctor or hospital and do the pcr test to confirm your status" << endl;
    }
    else
    {
        cout << "You are in the red alert zone. You should seek immediate attention." << endl;
    }
}
