#include <iostream>
#include <string>

class Player{
    std::string name;
    int life;
    int stamina;
    double money;
};

class Monsters{
    std::string monster_name;
    int monster_life;
    int monster_damage;

    public:
    void monster_attack(std::string monster_name, int monster_life, int monster_damage);
};

class Npc {
    std::string npc_name;
    std::string npc_item;
    
    public:
    void conversation(std::string name, std::string npc_item);
};