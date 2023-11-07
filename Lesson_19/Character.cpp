#include "Character.h"

Character::Character() {}
Character::Character(
	string _name,
	int _health,
	int _damage,
	int _defence,
	int _speed)
	:name(_name), health(_health), damage(_damage), defence(_defence), speed(_speed) {}
Character::Character(const Character& _source) {
	name = _source.name;
	health = _source.health;
	damage = _source.damage;
	defence = _source.defence;
	speed = _source.speed;
}
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

int Character::get_speed() {
	return speed;
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

Character& Character::set_speed(int _speed) {
	speed = _speed;
	return *this;
}

void Character::print_stats() {
	cout << " - " << name << endl;
	cout << " ��������: " << health << endl;
	cout << " ����: " << damage << endl;
	cout << " ������: " << defence << endl;
	cout << " ��������: " << speed << endl;
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