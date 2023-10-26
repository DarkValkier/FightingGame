#include "Character.h"
#include <iostream>

using namespace std;

Character::Character() {}
Character::Character(string _name):name(_name) {}
Character::~Character() {}

string Character::get_name() {
	return name;
}

int Character::get_health() {
	return health;
}

int Character::get_damage() {
	return damage;
}

int Character::get_defence() {
	return defence;
}

Character& Character::set_name(string _name) {
	name = _name;
	return *this;
}

Character& Character::set_health(int _health) {
	health = _health;
	return *this;
}

Character& Character::set_damage(int _damage) {
	damage = _damage;
	return *this;
}

Character& Character::set_defence(int _defence) {
	defence = _defence;
	return *this;
}

void Character::print_stats() {
	cout << " - " << name << endl;
	cout << " Здоровье: " << health << endl;
	cout << " Урон: " << damage << endl;
	cout << " Защита: " << defence << endl;
}

int Character::take_damage(int _damage) {
	health -= _damage;
	return _damage;
}

int Character::attack(Character &_target) {
	return _target.take_damage(damage);
}

bool Character::alive() {
	return health > 0;
}