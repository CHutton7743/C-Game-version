#include <iostream>
#include "Story.h" 
#include "Actor.h"
#include "NPC.h"
#include "Dice.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Story newStory;
  Dice dice;
  Actor newActor;

  newStory.openingScroll();
  cin >>newActor.Name;

  newStory.setRace();
  string temp;
  cin >> temp;

  while(newStory.isValidRace(temp) != true) {
    string exception = "Thats impossible! \n what are you really?";
    newStory.scrollingText(exception);
  }

  newStory.setRole();
  cin >> temp;

  while(!newStory.isValidrole(temp)) {
    string exception = "Thats impossible! \n what are you really?";
    newStory.scrollingText(exception);
  }
    return 0;
}
