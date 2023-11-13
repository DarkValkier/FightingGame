#pragma once
#include <string>
#include <iostream>

using namespace std;

class Character
{
	string name = "";
	int health = 100;
	int damage = 5;
	int defence = 0;
	int speed = 10;

public:
	Character();
	Character(string, int = 100, int = 5, int = 0, int = 10);
	Character(const Character&);
	~Character();

	virtual void print_stats();
	virtual int attack(Character&);
	virtual int take_damage(int);
	virtual bool alive();

	virtual string get_name();
	virtual int get_health();
	virtual int get_damage();
	virtual int get_defence();
	virtual int get_speed();

	virtual Character* set_name(string);
	virtual Character* set_health(int);
	virtual Character* set_damage(int);
	virtual Character* set_defence(int);
	virtual Character* set_speed(int);
};

