#include "functions.hpp" // Declara funções e variáveis que serão utilizadas
# include "classes.hpp"

// Declaração das variáveis globais
std::vector<std::string> inventory;
std::string name;
int life = 100;
int power = 10;
std::string object;
bool game = true;


////////////////////

int main() {
    introduction(); // Mensagem inicial e ajustes iniciais
    char operation;
    typewrite("\nVamos comecar? (s/n)\n");
    std::cin >> operation;

    if (operation=='n'){
        typewrite("\nQue pena!");
    }
    else{
        while (game){
            int operation;
            typewrite("\nO que voce quer fazer agora?\n");
            typewrite(" 0- Inventario\n 1- Lutar\n 2- Conversar\n 3- Pegar item\n 4- Sair do jogo\n");
            std::cin >> operation;

            Npc npc_1; 
            Monsters monster_1;

            switch (operation) {
                case 0: 
                    action_inventory();
                    break;
                case 1:
                    monster_1.monster_attack("ET Bilu", 120, 10);
                    break;
                case 2:
                    npc_1.conversation("Mosfet", "barbante");
                    break;
                case 3:
                    catch_item();
                    break;
                case 4:
                    game = false;
                default:
                    std::cout << "err pare!\n";
                    game = false;}}
        
    typewrite("\n\nObrigada por jogar!\n");
    return 0;
}}
