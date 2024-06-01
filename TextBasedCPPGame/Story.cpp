#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
using namespace std;

// Stat Vars
int healthPoints = 30;
int sanityPoints = 80;
int manaPoints = 0;
int staminaLevel = 50;
int dabloonDollars = 3;
int defencePoints = 75;

// Hidden Stat Vars
int luckLevel = 1 + rand() % (100 - 1 + 1);

// Gameplay Vars
int displaystats;
string player_Name;
int Player_class = 1;
string player_class_name;
int Activate_Tutorial;

// potentially more stats?

void displayStats() // system could be replaced with a /viewstat command to view a specific stat
{
    if (displaystats == 1)
    {
        cout << "Stats:" << endl
             << "----------" << endl
             << "Class: " << player_class_name << endl
             << "Health: " << healthPoints << endl
             << "Defence: " << defencePoints << endl
             << "Stamina: " << staminaLevel << endl
             << "Mana: " << manaPoints << endl
             << "Sanity: " << sanityPoints << endl
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
    int Player_class = Player_class * 1;

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
    cout << "Make your decisions wisely." << endl;
    cout << "`this is a small passion project (currently still is)` ~ Moksh N." << endl;

    Sleep(2400); // readablity pause

    // gameplay configuration
    cout << endl;
    cout << "Please customise your GAMEPLAY: "
         << endl
         << "Please enter your IGN (in-game-name): ";
    cin >> player_Name;

    // player selecting class
    cout << endl
         << "Please select your class:" << endl;
    cout << "(1) ~ Assassin" << endl
         << "(2) ~ Mage" << endl
         << "(3) ~ Tank" << endl
         << "(4) ~ Knight" << endl
         << "(5) ~ Raider" << endl;

    cin >> Player_class;

    while (Player_class != 1 && Player_class != 2 && Player_class != 3 && Player_class != 4 && Player_class != 5)
    {
        cout << "Please select a class from the list above.";
        cin >> Player_class;
    }

    /*
    ANNOUNCING BUFFS
    Possible stats:
    manaPoints
    staminaLevel
    defencePoints
    healthPoints
    sanityPoints
    */

    if (Player_class == 1)
    { // assassin
        staminaLevel = 83;
        defencePoints = 75;
        Sleep(300);
        cout << "[ Assassin class has been selected. You have been buffed appropriatley. ]" << endl
             << endl;
        Sleep(300);
        player_class_name = "Assassin";
    }

    if (Player_class == 2)
    { // Mage
        manaPoints = 50;
        defencePoints = 75;
        Sleep(300);
        cout << "[ Mage class has been selected. You have been buffed appropriatley. ]" << endl
             << endl;
        Sleep(300);
        player_class_name = "Mage";
    }

    if (Player_class == 3)
    { // Tank
        healthPoints = 100;
        defencePoints = 95;
        Sleep(300);
        cout << "[ Tank class has been selected. You have been buffed appropriatley. ]" << endl
             << endl;
        Sleep(300);
        player_class_name = "Tank";
    }

    if (Player_class == 4)
    { // Knight
        healthPoints = 95;
        staminaLevel = 64;
        Sleep(300);
        cout << "[ Knight class has been selected. You have been buffed appropriatley. ]" << endl
             << endl;
        Sleep(300);
        player_class_name = "Knight";
    }

    if (Player_class == 5)
    { // Raider
        healthPoints = 65;
        sanityPoints = 90;
        Sleep(300);
        cout << "[ Raider class has been selected. You have been buffed appropriatley. ]" << endl
             << endl;
        Sleep(300);
        player_class_name = "Raider";
    }

    // player selecting settings
    cout << "Would you like to display stats before making a choice [ALL] (1) Yes (2) No"
         << endl; // add ablility to view stats at any time with /stats command ??

    cin >> displaystats; // select choice

    while (displaystats != 1 && displaystats != 2)
    {
        cout << "Please pick a valid input " << endl;
        cout << "Would you like to display your stats before making a choice [ALL] (1) Yes (2) No: ";
        cin >> displaystats;
        cout << endl;
    }

    cout << endl;

    cout << "Would you like to read the TUTORIAL? [ONE TIME PER RUN] (1) Yes (2) No: " << endl;
    cin >> Activate_Tutorial;

    while (Activate_Tutorial != 1 && Activate_Tutorial != 2)
    {
        cout << "please select a valid option.";
        cin >> Activate_Tutorial;
    }

    if (Activate_Tutorial == 1)
    {
        cout << "[insert tutorial text here.]";
    }
    else
    {
        Activate_Tutorial == 2;
    }
    Sleep(2400);

    // starting game

    cout << "starting game";

    PrintElipse();
    Sleep(600);
    cout << "[";
    Sleep(300);
    cout << "LO4D1NG ";
    Sleep(300);
    cout << "C0MpL3tE]" << endl;
    Sleep(150);
    cout << "-----------------------------------------------------------------------------" << endl;

    Sleep(1000);

    cout << "You find yourself standing in a deep forest" << endl;
    Sleep(550);
    cout << "You're injured";
    PrintElipse();
    cout << endl;
    cout
        << " -------------------" << endl
        << " |  ^   ^   ^   ^  |" << endl
        << " | /|\\ /|\\ /|\\ /|\\ |" << endl
        << " | /|\\ /|\\ /|\\ /|\\ |" << endl
        << " | /|\\ /|\\ /|\\ /|\\ |" << endl
        << " -------------------" << endl;

    Sleep(1500);

    // story choice 1
    int choice1 = 0;
    cout << endl;
    cout << endl;
    cout << "You stumble around the forest, and encounter a fork in the trees do you go left (1) or forward (2)?" << endl;
    cout << endl;
    displayStats();
    cin >> choice1;

    while (choice1 != 1 && choice1 != 2)
    {
        cout << "You stumble in confusion. Perhaps you should choose left (1) or right (2)." << endl;
        cin >> choice1;
        cout << endl;
    }

    if (choice1 == 1)
    {
        int choice2;
        cout << endl
             << "You head down the left path, which leads you deeper into the forest";
        PrintElipse();
        Sleep(850);
        cout << "You hear weird animals growling and hissing around you";
        PrintElipse();
        Sleep(250);
        cout << "You continue walking, and see a small clearing with a firey glow";
        PrintElipse();
        Sleep(800);
        cout << endl;
        cout << "Do you go toward the clearing (1) or try to hide for the night (2)" << endl;
        cout << endl;
        Sleep(150);
        displayStats();
        cin >> choice2;

        while (choice1 != 1 && choice1 != 2)
        {
            cout << "You stumble in confusion. Perhaps you should choose an option, (1) or (2)." << endl;
            cin >> choice1;
            cout << endl;
        }

        // start of cult path

        if (choice2 == 1)
        {
            int choice3 = 0;
            cout << endl;
            cout << "You walk toward the clearing, catching a glipse of a red-hot altar, with a group of people surrounding it";
            PrintElipse();
            cout << "You crawl behind the bushes and see a cultist group "
                 << endl;

            PrintElipse();
            Sleep(400);
            cout << "They are chanting: ";
            PrintElipse();
            Sleep(900);
            cout << " ' Ph ";
            Sleep(500);
            cout << "'nglui mglw'nafh";
            Sleep(500);
            cout << "Cthulhu R'lyeh ";
            Sleep(250);
            cout << "wgah'nagl fhtagn!'";
            Sleep(900);
            cout << endl
                 << endl;
            Sleep(800);
            cout << "As they chant they march in unison around an altar," << endl;
            Sleep(1000);
            cout << "3tched with bl4shpem0us $ymb0ls th4t app3ar t# emit a gLow. "
                 << endl;
            sanityPoints = sanityPoints - 10;
            Sleep(1700);
            cout << "Circling the altar are tall firey torches casting large shadows across the floor,"
                 << endl;
            Sleep(1000);
            cout << "The chanting grows louder as the cultists walk with rythmic and hypnotic movments." << endl;
            Sleep(1800);
            cout << "Their covered tattered robes of crimson and black, concealing their faces behind grotesque masks of bones and leather";
            PrintElipse();
            Sleep(3400);
            cout << endl;
            cout << "Their melodic chant continues yet you must make a choice: " << endl;
            Sleep(2000);
            cout << " (1) ~ Join the cult and become an instrument in the awakening of Cthulhu." << endl;
            Sleep(350);
            cout << " (2) ~ Stop the cults goal of summoning Cuthulu to the world." << endl;
            Sleep(350);
            cout << " (3) ~ Run away from the demonic cultists and try to avoid their haunting chants." << endl;

            displayStats();

            if (choice3 == 1)
            {
                // start of murderer path + main access to temple of sacrifice
                cout << "You smear some mud on your face, mimicing demonic markings";
                PrintElipse();
                cout << endl
                     << "You start to join the chant as the cult members notice you emerging from the shrubery."
                     << endl;
                cout << "Your limping out of the shrubbery as the cult members slow down." << endl
                     << "You put pressure on your limping leg to stand straight.";
                Sleep(700);
                healthPoints = healthPoints - 13;
            }

            if (choice3 == 2)
            {
                // start of deer distraction allow you to get away and warn a near by village
                cout << "You look around for a means of distraction, you see a rock and a stick."
                     << endl;
                cout << "You must pick one to distract the cult and avoid suspicion";
                PrintElipse();

                int choice4;
                cout << "Choose Wisely: "
                     << endl
                     << "(1) ~ You throw a rock";
                Sleep(300);
                cout << "(2) ~ You throw a stick";
                displayStats();
                cin >> choice4;

                if (choice4 == 1)
                {
                    // throw rock
                }

                if (choice4 == 2)
                {
                    // throw stick
                }
            }

            if (choice3 == 3)
            {
                // start of chase scene, must make choices path should be 1, 2, 1
            }
        }

        if (choice2 == 2)
        {
            int choice3 = 0; // redeclaring
            cout << "You walk toward some shrubery, you feel tired and would like to rest. Animals hiss around you; loud thudding and inaudable chants come from a field in the distance." << endl
                 << "You must make a decision, your injuries could get worse if you continue, do you:" << endl;
            cout << " (1) ~ Gather supplies for a small shelter for the night. " << endl
                 << " (2) ~ Keep walking in search of assistance..." << endl
                 << " (3) ~ Try to make your way back... " << endl; // shelter path

            if (choice3 = 1)
            {
                int choice4;
                cout << "You look around, searching for things on the ground." << endl;
                Sleep(1000);
                cout << "You find some supplies, what do you select to make a shelter: " << endl;
                cout << " (1) ~ Logs, Vines, Rocks ";           // reduces sanity stat ./ increases health stat
                cout << " (2) ~ Leaves, Large Branches, Dirt "; // reduces sanity stat ./ reduces health stat
                cout << " (3) ~ Sap, Moss, Sticks ";            // increases sanity stat ./ slightly decreases health stat
                cin >> choice4;
            }

            if (choice3 = 2) // keep walking toward village
            {
                cout << "~UPCOMING PATH~";
            }

            if (choice3 = 3) // get lost toward cave
            {
                cout << "~UPCOMING PATH~";
            }
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
            cout << "You walk back yet loose your way " << endl;
        }
    }

    // The story will continue! This will be an exciting project!!
    // I have LOADS of ideas

    return 0;
}
