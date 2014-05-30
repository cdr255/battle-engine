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
  int accuracy;
public:
  bool dead;
  std::string name;
  int health;
  int evasion;
  void display_stats();
  void attack(Combatant &);
  int defend(int&);
  Combatant(int, int, int, int, int, std::string, int);
};


Combatant::Combatant(int str, int con, int def, int acc, int eva, std::string nam, int hea)
{
  dead = false;
  constitution = con;
  strength = str;
  defense = def;
  accuracy = acc;
  evasion = eva;
  name = nam;
  health = hea;
}

void Combatant::display_stats() {
  std::cout << "Name: " << name << ".\nHealth: " << health << ".\n";
  std::cout << "Strength: " << strength << ".\nDefense: " << defense << ".\n";
}

void Combatant::attack(Combatant & opponent) {
  int original_health = opponent.health;
  if(d20.roll(1) + accuracy > opponent.evasion)
    {
      int damage = strength + d6.roll(1);
      int new_health = original_health - opponent.defend(damage);
      opponent.health = new_health;
    }
  else
    {
      std::cout << "The Attack Missed!\n";
    }
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
