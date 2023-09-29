#include <stdio.h>

int main()
{
  float x, y, z;

  for (y = 1.5; y > -1.5; y -= 0.1)
  {
    for (x = -1.5; x < 1.0; x += 0.05)
    {
      z = x * x + y * y - 1;
      putcahr(z * z * z - x * x * y * y * y < 0.0 ? 'X' : ' ');
    }
    printf("\n");
  }
  return 0;
}
