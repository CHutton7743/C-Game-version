#include "Dice.h"
#include <iostream>
#include <random>

Dice::Dice() {

}
Dice::~Dice() {

}
int Dice::rollDice(int dicesides) {
int max = dicesides;
int min = 1;
return  (max - min + 1) + min;
}
