// ExerciciCPlusPlus.cpp : Aquesta és la classe principal. 
// M17-UF4 Videojocs Avançats - Exercici de C++

#include <iostream>
#include "BasePlayer.h"
#include "EnrageEnemy.h"
using namespace std;

int main()
{
    // Declarem i instànciem un EnrageEnemy amb una vida de 200 i un atac de 40.
    EnrageEnemy enemy_basic(200.0f,40.0f);
    // Declarem i instànciem un BasePlayer amb una vida de 300 i sense atac.
    BasePlayer player_basic(300.0f);
    // Declarem una variable de tipus punter de BasePlayer.
    BasePlayer* ptr_player_basic = &player_basic;

    // Mostrem per consola com està evolucionant la partida.
    cout << "The enemy has " << enemy_basic.getLife() << " of life. Also, it has " << enemy_basic.getDamage() << " of attack." << endl;

    cout << "The player has " << player_basic.getLife() << " of life." << endl;

    cout << "Now, the enemy is gonna attack the player! CAUTION! " << endl;

    // Fem ús del mètode ApplyDamage() per atacar al BasePlayer.
    player_basic.ApplyDamage(ptr_player_basic, enemy_basic.getDamage());

    cout << "The player survived to the attack. Thankfully, he still has " << player_basic.getLife() << " of life! :)" << endl;

    // Pausem l'execució per poder observar el que ha passat en la consola.
    system("pause");
}