#include <iostream>
#include <Windows.h>
#include "Character.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Character player1("Вася");
    player1.print_stats();
    cout << endl;

    Character player2("Петя");
    player2.print_stats();
    cout << endl;

    while (player1.alive() && player2.alive())
    {
        int player1_damage = player1.attack(player2);
        int player2_damage = player2.attack(player1);

        cout << player1.get_name() << " атаковал " << player2.get_name() << " и нанёс " << player1_damage << " урона" << endl;
        cout << player2.get_name() << " атаковал " << player1.get_name() << " и нанёс " << player2_damage << " урона" << endl;
        cout << endl;
    }
    
    player1.print_stats();
    cout << endl;
    player2.print_stats();
    cout << endl;

    /*
        1. Поменять вывод "Игрок 1" и "Игрок 2" на имена этих игроков
        2. В классе Character сделать конструктор, принимающий имя игрока
        3. Сделать так, чтобы персонажи дрались до тех пор, пока у одного
           из них не закончится здоровье.
    
    */

}
