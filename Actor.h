#ifndef Actor_H
#define Actor_H
#include <string>

class Actor{
    private:
        int maxHealth;
        int health;
        int attack;
        int defense; 
    public:
        //default consturctor
        Actor();
        ~Actor();
        
        // player specific variables
        std::string Name;
        std::string Role;
        std::string Race;
        int money;

        // setters for mainstats
        void setMaxHealth(int a);
        void setHealth(int a);
        void setAttack(int a);
        void setDefense(int a);

        // getters for mainstats
        int getMaxHealth();
        int getHealth();
        int getAttack();
        int getDefense();    

        // setter method for player
        void setName(std::string name);
        void setRole (std::string role);
        void setRace(std::string race);
        void setMoney(int coins);
        
        // getter methods for player
        std::string getName();
        std::string getRole();
        std::string getRace();
        std::string getGender();
        int getMoney ();

        // inventory methods
        void addToInventory(std::string item);
        void removeFromInventory(std::string item);

        // Roles for player character
        void mage();
        void ranger();
        void warrior();

        // races for player
        void orc();
        void elf();
        void human();
        void gnome();
        void halfling();
};
#endif