#ifndef BATTLE_ENGINE

#define BATTLE_ENGINE
#include <iostream>
#include <string>

void greeting();

class Combatant {
  int strength;
  int defense;
public:
  std::string name;
  int health;
  void display_stats();
  Combatant(int, int, std::string, int);
};


Combatant::Combatant(int str, int def, std::string nam, int hea)
{
  strength = str;
  defense = def;
  name = nam;
  health = hea;
}

void Combatant::display_stats() {
  std::cout << "Name: " << name << ".\nHealth: " << health << ".\n";
  std::cout << "Strength: " << strength << ".\nDefense: " << defense << ".\n";
}

void greeting()
{
  std::cout << "Hello World!\n";
}


#endif
