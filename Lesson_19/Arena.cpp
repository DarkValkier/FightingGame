#include "Arena.h"

Arena::Arena() {}

Arena::Arena(Arena& _source) {
	characters = new Character*[_source.characters_count];
	for (int i = 0; i < _source.characters_count; i++)
		characters[i] = _source.characters[i];
	characters_count = _source.characters_count;
}

Arena::~Arena() {
	delete[] characters;
}

void Arena::add_character(Character* _character) {
	Character** new_characters = new Character*[characters_count + 1];
	for (int i = 0; i < characters_count; i++)
		new_characters[i] = characters[i];
	new_characters[characters_count] = _character;
	// new_characters[characters_count] = Character(_character);
	delete[] characters;
	characters = new_characters;
	characters_count++;
}

void Arena::print_characters() {
	for (int i = 0; i < characters_count; i++) {
		characters[i]->print_stats();
		cout << endl;
	}
}

void Arena::fight() {
	sort_by_speed();
	while (characters_alive() > 1)
	{
		for (int i = 0; i < characters_count; i++)
		{
			int player_to_attack = i + 1;
			if (player_to_attack >= characters_count)
				player_to_attack = 0;

			int player_damage = characters[i]->attack(*characters[player_to_attack]);

			cout << characters[i]->get_name();
			cout << " атаковал ";
			cout << characters[player_to_attack]->get_name();
			cout << " и нанёс " << player_damage << " урона" << endl;
		}
		cout << endl;
	}
}

unsigned int Arena::characters_alive() {
	unsigned int result = 0;
	for (int i = 0; i < characters_count; i++)
		result += (int)characters[i]->alive();
	return result;
}

void Arena::sort_by_speed(bool inverted) {
	bool changed = true;
	while (changed)
	{
		changed = false;
		for (int i = 0; i < characters_count - 1; i++)
			if (characters[i]->get_speed() < characters[i + 1]->get_speed()) {
				swap(characters[i], characters[i + 1]);
				changed = true;
			}
	}
}

Arena& Arena::operator+=(Character* _character) {
	add_character(_character);
	return *this;
}

Arena& Arena::operator+=(Arena& _source) {
	for (int i = 0; i < _source.characters_count; i++)
		add_character(_source.characters[i]);
	return *this;
}