#include "Berserk.h"

Berserk::Berserk() {
	max_health = get_health();
}

Berserk::~Berserk() {}

Berserk* Berserk::set_health(int _health) {
	Character::set_health(_health);
	max_health = _health;
	return this;
}

int Berserk::get_damage() {
	return Character::get_damage() +
		(Character::get_damage() * (1 - (double) get_health() / (double) max_health));
}

int Berserk::attack(Character& _target) {
	return _target.take_damage(get_damage());
}