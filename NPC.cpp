#include "NPC.h"

NPC:: NPC() {

}
NPC::~NPC(){
    
}

// setters for mainstats
void NPC::setMaxHealth(int a) {
    maxHealth = a;
}
void NPC::setHealth(int a) {
    health = a;
}
void NPC::setAttack(int a) {
    attack = a;
}
void NPC::setDefense(int a) {
    defense = a;
}

// getter methods for mainstats
int NPC::getMaxHealth() {
    return maxHealth;
}
int NPC::getHealth() {
    return health;
}
int NPC::getAttack() {
    return attack;
}
int NPC::getDefense() {
    return defense;
}  
// Methods to build different pre built monsters

// kobold encounter
void NPC::kobold() {
    setMaxHealth(7);
    setHealth(getMaxHealth());
    setAttack(3);
    setDefense(6); 
}
// goblin encounter
void NPC::goblin() {
    setMaxHealth(7);
    setHealth(getMaxHealth());
    setAttack(3);
    setDefense(6); 
}
// cockatrice encounter
void NPC::cockatrice() {
    setMaxHealth(7);
    setHealth(getMaxHealth());
    setAttack(3);
    setDefense(6); 
}
// skeleton encounter
void NPC::skeleton() {
    setMaxHealth(7);
    setHealth(getMaxHealth());
    setAttack(3);
    setDefense(6); 
}
// Gelatinous ooze encounter
void NPC::gelatinousOoze() {
    setMaxHealth(7);
    setHealth(getMaxHealth());
    setAttack(3);
    setDefense(6); 
}
