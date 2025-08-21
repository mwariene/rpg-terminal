#include "functions.hpp" 
# include "classes.hpp"

std::vector<std::string> introduction(){
    typewrite("\nJogador, digite seu nome: ",75);
    std::cin >> name;    // Input da variável de nome
    inventory.push_back("sanduiche");
    inventory.push_back("adaga");

    // Mensagem inicial
    typewrite("\nBem-vinde, " + name + "!\n\n",75);
    typewrite("Seus pontos iniciais sao:\n");
    typewrite(" Vida: 100 pontos\n Estamina: 100 pontos\n Forca: 10 pontos\n\n");

    typewrite("Seu inventario inicialmente contem os seguintes itens:\n[");
    for (int i = 0; i<inventory.size();i++){
        typewrite(" " + inventory[i]);
    }
    std::cout << " ]\n\n";

    return inventory;
}