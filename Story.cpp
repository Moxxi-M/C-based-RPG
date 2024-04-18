#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int healthPoints = 30;
int manaPoints = 0;
int staminaLevel = 50;
int luckLevel = 10;
int dabloonDollars = 3;
int displaystats = 1;

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
    cout << "Welcome to your adventure" << endl
         << "..." << endl
         << "choose your choices wisley." << endl;

    cout << " Please configure your settings: " << endl;
    cout << " - Display stats before choices (ALL) (1:yes) (2:no)" << endl;
    cin >> displaystats;
    cout << endl;

    cout
        << "You find yourself standing in a deep forest" << endl
        << "You're injured ..." << endl;

    // story choice 1
    int choice1;
    cout << "You stumble around the forest, and encounter a fork in the trees do you go left (1) or forward (2)?" << endl;
    displayStats();
    cin >> choice1;

    if (choice1 == 1)
    {
        int choice2;
        cout << "You head down the left path, which leads you deeper into the forest..." << endl
             << "You hear weird animals growling and hissing around you" << endl
             << "..." << endl
             << "You continue walking, and see a small clearing with a firey glow..." << endl
             << "Do you go toward the clearing (1) or try to hide for the night (2)";
        displayStats();
        cin >> choice2;
    }
    else if (choice1 == 2)
    {
        // second choice
        int choice2;
        cout << "You follow the path onward, which opens up into a vibrant meadow..." << endl
             << "You see a small hut in the distance"
             << endl
             << "Do you go toward it (1) or try to find a diffrent path (2)" << endl;
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
