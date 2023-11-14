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

    Character* player1 = new Character("����");
    player1->set_health(50)->set_speed(5);

    Character* player2 = new Character("����");
    player2->set_health(160)->set_damage(4)
        ->set_defence(1)->set_speed(15);

    Berserk* player3 = new Berserk("��������");

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
    ����������� ����� Book �� ���������� ������:
    - ��������
    - ����
    - �����
    - ��� �������
    - ���������� �������

    � ������ Book ����������� ����������� �� ���������, � ����������� � �����������.
    �������� ��������� (�.�. ������� � �������).


    ����������� ����� Library. �� ������������ �� ���� ��������� ��������
    ������ Book. ����� ����������� ����� ��� ���������� ����� � ����������, 
    ������ ���������� ���� �� �������� � ���� �������. ����������� �����,
    ��������� �� ����� ����� ���������� �����. � ����������� ������� ������ ����.
*/

