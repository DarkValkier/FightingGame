#pragma once
#include <string>

using namespace std;

class Character
{
	string name = "";
	int health = 100;
	int damage = 5;
	int defence = 0;

public:
	Character();
	Character(string);
	~Character();

	void print_stats();
	int attack(Character&);
	int take_damage(int);
	bool alive();

	string get_name();
	int get_health();
	int get_damage();
	int get_defence();

	Character& set_name(string);
	Character& set_health(int);
	Character& set_damage(int);
	Character& set_defence(int);
};

