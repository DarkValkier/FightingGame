#include <iostream>
#include <Windows.h>
#include "Character.h"
#include "Arena.h"
#include "Berserk.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Arena arena;

    Character* player1 = new Character("Вася");
    player1->set_health(50)->set_speed(5);

    Character* player2 = new Character("Петя");
    player2->set_health(160)->set_damage(4)
        ->set_defence(1)->set_speed(15);

    Berserk* player3 = new Berserk("Анатолий");

    Arena arena2;

    arena.add_character(player1);
    arena.add_character(player2);
    arena.add_character(player3);
    arena += arena2;

    cout << "Arena fighters:" << endl;
    arena.print_characters();

    cout << " == FIGHT ==" << endl;
    arena.fight();
    cout << " == END OF FIGHT ==" << endl;

    cout << "Arena fighters:" << endl;
    arena.print_characters();

    cout << endl << endl << endl;

    delete player1;
    delete player2;
    delete player3;
}



/*
    Реализовать класс Book со следующими полями:
    - название
    - жанр
    - автор
    - год выпуска
    - количество страниц

    В классе Book реализовать конструктор по умолчанию, с параметрами и копирования.
    Добавить аксессоры (т.е. геттеры и сеттеры).


    Реализовать класс Library. Он представляет из себя хранилище объектов
    класса Book. Нужно реализовать метод для добавления книги в библиотеку, 
    методы сортировки книг по названию и году выпуска. Реализовать метод,
    выводящий на экран книги указанного жанра. В деструкторе очищать список книг.
*/

