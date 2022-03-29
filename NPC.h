#ifndef NPC_H
#define NPC_H
class NPC{
    private:
        int maxHealth;
        int health;
        int attack;
        int defense; 
    public:
    // Methods to build different pre built monsters
    NPC();
    ~NPC();

    void kobold();
    void goblin();
    void cockatrice();
    void skeleton();
    void gelatinousOoze();

    // setters for mainstats
    void setMaxHealth(int a);
    void setHealth(int a);
    void setAttack(int a);
    void setDefense(int a);

    // getter methods for mainstats
    int getMaxHealth();
    int getHealth();
    int getAttack();
    int getDefense();  
};
#endif