#ifndef STORY_H
#define STORY_H
#include <iostream>

using namespace std;

class Story {
    public:
        Story();
        ~Story();
        void openingScroll();
        void setRole();
        void setRace();
        void MonologueOne();
        void villageStory();
        void makeMyOwnDestiny();
        void randomEncounter();
        void generalStore();
        void blackSmith();
        void printGeneralStore();
        void printBlackSmith();
        void scrollingText(string &inputString);
        bool isValidrole(string input);
        bool isValidRace(string input);
        string convertToString(char* a, int size);
};
#endif
