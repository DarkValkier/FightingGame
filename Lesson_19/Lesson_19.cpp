#include <iostream>
#include <Windows.h>
#include "Character.h"
#include "Arena.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Arena arena;

    Character player1("Вася");
    player1.set_health(50).set_speed(5);

    Character player2("Петя");
    player2.set_health(160).set_damage(4)
        .set_defence(1).set_speed(15);

    Character player3("Анатолий");

    arena.add_character(player1);
    arena.add_character(player2);
    arena.add_character(player3);

    cout << "Arena fighters:" << endl;
    arena.print_characters();

    cout << " == FIGHT ==" << endl;
    arena.fight();
    cout << " == END OF FIGHT ==" << endl;

    cout << "Arena fighters:" << endl;
    arena.print_characters();
}
