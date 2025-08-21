#include "functions.hpp"
#include "classes.hpp"

void Npc::conversation(std::string npc_name, std::string npc_item){
    char option;
    std::cout << "\nDeseja falar com " + npc_name + "? s/n\n";
    std::cin >> option;

    if (option == 's'){
        typewrite(npc_name+": Ola, "+name+"! Leve este "+npc_item+" com voce!\n\n");
        if (inventory.size()< 5){
            inventory.push_back(npc_item);
            typewrite("Inventario atual:\n[");
            cout_inventory();
        }
        else{
            typewrite("Seu inventario esta cheio!\n");
        }}
    else{
        typewrite(npc_name+": Ate mais!\n");
    }

}

void Monsters::monster_attack(std::string monster_name, int monster_life, int monster_power){
    int turn = 0;
    while (monster_life > 0 && life > 0){
        if (turn%2==0){    // Seu turno
            int choice;
            typewrite("\nVoce vai lutar com "+monster_name+"!\nEscolha uma opção\n 0- Atacar\n 1- Curar\n 2- Fugir\n");
            std::cin >> choice;

            if (choice==0){
                int damage = attack(monster_power);
                monster_life = monster_life - damage;
                typewrite("Voce atacou "+monster_name+", que agora tem "+std::to_string(monster_life)+" de vida.\n");}
            else if (choice==1){
                int restore = heal();
                life = life + restore;
                typewrite("Voce se curou. Seus pontos de vida agora sao "+std::to_string(life)+"\n");}
            else if (choice==2){
                std::cout << "Voce desistiu da luta e fugiu.\n";
                break;}
        }
        else{     // Turno do oponente
            life = life - attack(power);
            typewrite(monster_name+" te atacou! Voce tem "+std::to_string(life)+" pontos de vida.\n");}

        if (monster_life <= 0){
            typewrite("Voce derrotou "+monster_name+"!\n\n");
        }
        else if (life <= 0){
            typewrite(monster_name+" te derrotou. Fim de jogo :(\n");
            game = false;
        }
        else{
            turn++;
        }
    }}
