#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
using namespace std;

int healthPoints = 30;
int manaPoints = 0;
int staminaLevel = 50;
int luckLevel = 1 + rand() % (100 - 1 + 1);
int dabloonDollars = 3;
bool displaystats = 1;

void displayStats()
{
    if (displaystats == 1)
    {
        cout << "Stats:" << endl
             << "Health: " << healthPoints << endl
             << "Mana: " << manaPoints << endl
             << "Stamina: " << staminaLevel << endl
             << "Dabloons: " << dabloonDollars << endl;
    }
}

void PrintElipse()
{
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << "." << endl;
}

int main()
{

    // Loot array (future loot)
    struct LootItem
    {
        string name;
        string description;
        int minluckLevel;
    };

    LootItem lootArray[] = {
        {"Coin", "A shiny coin [Grants 10 dabloons].", 0},
        {"Leather Gloves", "Basic leather glove for protection and damage.", 10},
        {"Bag of coins", "A small bag of shiny coins! [Grants 50 dabloons].", 15}};

    // Introduction
    cout << "Welcome to your adventure" << endl;
    PrintElipse();
    cout << "choose your choices wisley." << endl;

    Sleep(2400); // readablity pause

    cout << endl;
    cout << " Please configure your settings: "
         << endl
         << " - Display stats before choices (ALL) (1:yes) (2:no)" << endl; // add ablility to view stats at any time with /stats command ??

    cin >> displaystats; // select choice
    cout << endl;

    Sleep(2400);

    cout << "starting game";
    PrintElipse();
    Sleep(600);
    cout << "[";
    Sleep(300);
    cout << "LO4D1G ";
    Sleep(300);
    cout << "C0MpL3tE]" << endl;
    Sleep(150);
    cout << "ENJOY" << endl
         << "-----------------------------------------------------------------------------" << endl;

    Sleep(1000);

    cout
        << "You find yourself standing in a deep forest" << endl
        << "You're injured";
    PrintElipse();

    Sleep(1500);

    // story choice 1
    int choice1;
    cout << endl;
    cout << "You stumble around the forest, and encounter a fork in the trees do you go left (1) or forward (2)?" << endl;
    cout << endl;
    displayStats();
    cin >> choice1;

    if (choice1 == 1)
    {
        int choice2;
        cout << "You head down the left path, which leads you deeper into the forest";
        PrintElipse();
        cout << endl;
        cout << "You hear weird animals growling and hissing around you";
        PrintElipse();
        cout << "You continue walking, and see a small clearing with a firey glow";
        PrintElipse();
        cout << "Do you go toward the clearing (1) or try to hide for the night (2)" << endl;
        cout << endl;
        displayStats();
        cin >> choice2;

        // start of cult path

        if (choice2 == 1)
        {
            cout << endl;
            cout << "You walk toward the clearing, catching a glipse of a red-hot altar, with a group of people surrounding it";
            PrintElipse();
            cout << endl
                 << "";
        }
    }
    else if (choice1 == 2)
    {
        // second choice
        int choice2;
        cout << "You follow the path onward, which opens up into a vibrant meadow";
        PrintElipse();
        cout << endl;
        cout << "You see a small hut in the distance"
             << endl
             << "Do you go toward it (1) or try to find a diffrent path (2)" << endl;
        cout << endl;
        displayStats();
        cin >> choice2;
        if (choice2 == 1)
        {
            cout << "You walk towards the house.." << endl;
        }
        else if (choice2 == 2)
        {
            cout << "You walk towards the house.." << endl;
        }
    }
    else
    {
        cout << "You stumble in confusion. Perhaps you should choose left or right next time." << endl;
    }

    // The story will continue! This will be an exciting project!!

    return 0;
}
