
#include "Story.h"
#include <string>
#include <chrono>
#include <thread>
#include <vector>

Story::Story() {
    
}
Story::~Story() {
    
}
void Story::openingScroll() {
    const char *races[29] = {"human", "elf", "orc", "halfling", "gnome"};
    string one = "Welcome player, in this game you will go on a short adventure. You will have the choice to either save the village of embryville or betray them in their darkest hour.";
    string two = "The choice is on you. In a few moments you will be introduced to Margo who will help you get started. Good luck out there adventurer!";
    string margoOne = "Margo: Hello adventurer! My name is Margo, What is your name? ";
    scrollingText(one);
    std::this_thread::sleep_for(chrono::seconds(2));
    cout << endl;
    scrollingText(two);
    std::this_thread::sleep_for(chrono::seconds(2));
    cout << endl;
    scrollingText(margoOne);
}
void Story::setRace() {
    string margoTwo = "Margo: A fitting name! Forgive my old eyes, they arent what they used to be. What people do you represent? Gnomes, Humans, Orcs, Elves or Halflings";
    scrollingText(margoTwo);
    std::this_thread::sleep_for(chrono::seconds(2));
    std::this_thread::sleep_for(chrono::seconds(2));

}
void Story::setRole (){
    string margoThree = "Margo: We have many people like you around here. Welcome!";
    string margoFour = "Margo: and what is it that you specialize in? Are you a Mage, a Warrior or a Ranger?";

    scrollingText(margoThree);
    scrollingText(margoFour);
    std::this_thread::sleep_for(chrono::seconds(2));
    cout << endl;
    std::this_thread::sleep_for(chrono::seconds(2));
    cout << endl;

}
void Story::MonologueOne() {
    string margoFive = "Margo: Im sure that you will accomplish great things!";   
    scrollingText(margoFive);
    std::this_thread::sleep_for(chrono::seconds(2));
    string one = "Margo: Great! Now that we know who you are";
}
string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}
void Story::villageStory() {
    
}
void Story::makeMyOwnDestiny() {
    
}
void Story::randomEncounter() {
    
}
void Story::generalStore() {
    bool answer;
    while (answer == false) {
        int selection;
        cin >> selection;
        switch (selection) {
            case '1': 
                break;
            case '2':
                break;
            case '3': 
                break;
            case '4': 
                break;
            case '5': answer = true;
                break;
            default:
                cout << "invalid option!";
        } //switch
    }
}
void Story::printGeneralStore() {
    cout<< "|_______________________________________________________|" << endl;
    cout<< "|             Welcome to the General Store              |" << endl;
    cout<< "|       Please select one of the following options      |" << endl;
    cout<< "|               \'1\' to buy healing potions            |" << endl;
    cout<< "|               \'2\' to buy                            |" << endl;
    cout<< "|               \'3\' to sell weapons                   |" << endl;
    cout<< "|               \'4\' to sell armor                     |" << endl;
    cout<< "|               \'5\' to leave the blacksmith           |" << endl;
    cout<< "|_______________________________________________________|" << endl;
    
}
void Story::blackSmith() {
    cout<< "|_______________________________________________________|" << endl;
    cout<< "|             Welcome to the Blacksmith                 |" << endl;
    cout<< "|     Please select one of the following options        |" << endl;
    cout<< "|               \'1\' to buy weapons                    |" << endl;
    cout<< "|               \'2\' to buy armor                      |" << endl;
    cout<< "|               \'3\' to sell weapons                   |" << endl;
    cout<< "|               \'4\' to sell armor                     |" << endl;
    cout<< "|               \'5\' to leave the blacksmith           |" << endl;
    cout<< "|_______________________________________________________|" << endl;
}
void Story::printBlackSmith() {

}
void Story::scrollingText(string &inputString) {
    for(int i =0; i< inputString.size();i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(35));
        std::cout << inputString[i] << std::flush;
    }
        std::cout << std::endl; // start a new line
}
bool Story::isValidrole(string input){
    string classes[] = {"mage", "warrior", "ranger"};
     for (int i=0; i < classes->length(); i++) {
            if (input == classes[i]) {
                return true;
            }
        }
        return false;
}
bool Story::isValidRace(string input){
    string races[] = {"human", "elf", "orc", "gnome", "dwarf"};
     for (int i=0; i < races->length(); i++) {
            if (input == races[i]) {
                return true;
            }
        }
        return false;
}