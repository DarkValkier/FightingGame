#include <iostream>
#include <Windows.h>
#include "Character.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Character player1("����");
    player1.print_stats();
    cout << endl;

    Character player2("����");
    player2.print_stats();
    cout << endl;

    while (player1.alive() && player2.alive())
    {
        int player1_damage = player1.attack(player2);
        int player2_damage = player2.attack(player1);

        cout << player1.get_name() << " �������� " << player2.get_name() << " � ���� " << player1_damage << " �����" << endl;
        cout << player2.get_name() << " �������� " << player1.get_name() << " � ���� " << player2_damage << " �����" << endl;
        cout << endl;
    }
    
    player1.print_stats();
    cout << endl;
    player2.print_stats();
    cout << endl;

    /*
        1. �������� ����� "����� 1" � "����� 2" �� ����� ���� �������
        2. � ������ Character ������� �����������, ����������� ��� ������
        3. ������� ���, ����� ��������� ������� �� ��� ���, ���� � ������
           �� ��� �� ���������� ��������.
    
    */

}
