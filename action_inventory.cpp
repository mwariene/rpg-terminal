#include "functions.hpp"
#include "classes.hpp"

std::vector<std::string> use_item(){
    int index;
    std::cout << "Digite a posicao do item no inventario: ";
    std::cin >> index;
    inventory.erase(inventory.begin() + index);
    //codar para mudar valores de pontos de vida
    return inventory;
}

std::vector<std::string> drop_item(){
    int index;
    std::cout << "Digite a posicao do item no inventario: ";
    std::cin >> index;
    inventory.erase(inventory.begin() + index);
    return inventory;
}

std::vector<std::string> action_inventory() {
    int option;
    int index;
    
    std::cout << "\nSelecione uma opcao:\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(750));
    std::cout << " 0 - Checar inventario\n";
    std::cout << " 1 - Usar item\n";
    std::cout << " 2 - Dropar item\n";
    std::cin >> option;

    typewrite("Inventario atual:\n[");
    cout_inventory();

    if (option == 1) {
        use_item();
        std::cout << "Inventario atualizado:\n[";
        cout_inventory();
    }
    else if (option == 2) {
        drop_item();
        std::cout << "Inventario atualizado:\n[";
        cout_inventory();
    }
    else{
    }

    return inventory;
}