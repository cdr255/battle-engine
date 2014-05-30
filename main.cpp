#include <iostream>
#include <string>
#include "battle-engine.hpp"

int main (int argc, char * argv[])
{
  srand(time(NULL));

  Combatant hero(5, 5, 5, "hero", 5);
  Combatant enemy(3, 3, 3, "enemy", 3);
  greeting();

  hero.display_stats();
  enemy.display_stats();
  
  hero.attack(enemy);

  hero.display_stats();
  enemy.display_stats();

  return 0;
}
