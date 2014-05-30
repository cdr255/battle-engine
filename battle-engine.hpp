#ifndef BATTLE_ENGINE

#define BATTLE_ENGINE
#include <iostream>
#include <string>
#include "dice.hpp"

void greeting();

class Combatant {
  int strength;
  int constitution;
  int defense;
public:
  bool dead;
  std::string name;
  int health;
  void display_stats();
  void attack(Combatant &);
  int defend(int&);
  Combatant(int, int, int, std::string, int);
};


Combatant::Combatant(int str, int con, int def, std::string nam, int hea)
{
  dead = false;
  constitution = con;
  strength = str;
  defense = def;
  name = nam;
  health = hea;
}

void Combatant::display_stats() {
  std::cout << "Name: " << name << ".\nHealth: " << health << ".\n";
  std::cout << "Strength: " << strength << ".\nDefense: " << defense << ".\n";
}

void Combatant::attack(Combatant & opponent) {
  int original_health = opponent.health;
  int damage = strength + d6.roll(1);

  int new_health = original_health - opponent.defend(damage);
  
  opponent.health = new_health;
}  

int Combatant::defend(int & str) {
  if (str > defense)
    return (str - defense);
  else 
    return 0;
}

void greeting()
{
  std::cout << "Hello World!\n";
}


#endif
