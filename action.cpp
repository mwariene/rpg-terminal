#include "functions.hpp"
# include "classes.hpp"

std::vector<std::string> catch_item(){
    if (inventory.size()<=5){
        inventory.push_back((object));
    }
    else{
        std::cout << "Inventario cheio!";
    }
    return inventory;
}

int attack(int power){
    int attack_dice = (std::rand() % 4) + 1;
    return power * attack_dice;
}

int heal(){
    int heal_dice = (std::rand() % 5) + 1;
    return heal_dice * 10;
}