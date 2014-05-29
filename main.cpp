#include <iostream>
#include <string>
#include "battle-engine.hpp"

int main (int argc, char * argv[])
{
  Combatant hero(5, 5, "hero", 5);
  greeting();

  hero.display_stats();
  return 0;
}
