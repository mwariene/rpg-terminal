#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

//Declaração das variáveis globais
extern std::string name;
extern int life;
extern int power;
extern std::vector<std::string> inventory;
extern std::string object;
extern bool game;

// Declaração das funções

// Efeito máquina de escrever
inline
void typewrite(std::string text, int delay=30){
    for (int i=0; i <= text.size();i++){
        std::cout << text[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));}
}

// Print inventário
inline 
void cout_inventory(){
    for (int i = 0; i<inventory.size();i++){
        typewrite(" " + inventory[i]);
    }
    std::cout << " ]\n\n";
}

// introduction.cpp
std::vector<std::string> introduction();

// action_inventory.cpp
std::vector<std::string> use_item();
std::vector<std::string> drop_item();
std::vector<std::string> action_inventory();

// action.cpp
std::vector<std::string> catch_item();
int attack(int power);
int heal();

// interaction.cpp

