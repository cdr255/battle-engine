#ifndef DICE_HPP
#define DICE_HPP

#include <iostream>
#include <cstdlib>

class Die {
  int max;
public:
  int roll(int);
  Die(int);
};

Die::Die(int num_of_sides) {
  max = num_of_sides;
}

int Die::roll(int times) 
{
  int min = 1;
  int out = 0;
  
  for(;times>0;times--)
    {
      int result = min + (rand() % (int)(max - min + 1));
      out = out + result;
      std::cout << result << ", \n";
    }

  return out;
}

Die d2(2);
Die d3(3);
Die d4(4);
Die d6(6);
Die d8(8);
Die d10(10);
Die d100(100);
Die d20(20);


#endif
