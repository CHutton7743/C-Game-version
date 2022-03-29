#include "Actor.h"
using namespace std;
Actor::Actor() {
    string Name;
    string Role;
    string Race;
    int money;
}
Actor::~Actor() {

}

// setter method for player
void Actor::setName(string s){ 
    Name = s;
}
void Actor::setRole (string s){ 
    Role = s;
}
void Actor::setRace(string s){ 
    Race = s;
}
void Actor::setMoney(int s){ 
    money = s;
}

// getter methods for player
string Actor::getName(){ 
    return Name;
}
string Actor::getRole(){ 
    return Role;
}
string Actor::getRace(){ 
    return Race;
}
int Actor::getMoney (){ 
    return money;
}

// setters for mainstats
void Actor::setMaxHealth(int a){
    maxHealth = a;
}
void Actor::setHealth(int a){
    health = a;
}
void Actor::setAttack(int a){
    attack = a;
}
void Actor::setDefense(int a){
    defense = a;
}

// getters for mainstats
int Actor::getMaxHealth(){
    return maxHealth;
}
int Actor::getHealth(){
    return health;
}
int Actor::getAttack(){
    return attack;
}
int Actor::getDefense(){
    return defense;
}   

// inventory methods
void Actor::addToInventory(std::string item){ 

}
void Actor::removeFromInventory(std::string item){ 

}

// Roles for player character
void Actor::mage(){ 
    setAttack(10);
    setDefense(3);
    setHealth(20);
}
void Actor::ranger(){ 
    setAttack(6);
    setDefense(6);
    setHealth(30);
}
void Actor::warrior(){ 
    setAttack(4);
    setDefense(10);
    setHealth(40);
}

// races for player
void Actor::orc() {
    maxHealth += 5;
    attack += 2;
    defense += 2;
}
void Actor::elf() {
    maxHealth += 2;
    attack += 5;
    defense += 2;
}
void Actor::human(){ 
    maxHealth += 3;
    attack += 3;
    defense += 3;
}
void Actor::gnome(){ 
    maxHealth += 2;
    attack += 5;
    defense += 2;  
}
void Actor::halfling(){ 
    maxHealth += 6;
    attack += 1;
    defense += 2;
}