#include <stdio.h>
#include <math.h>

int main (void)
{

  float IV = 1000;
  float P = 0.05;
  float PIV;
  int ano;

  for (ano = 1; ano <= 10; ano++){
        PIV = IV * P;
      IV = PIV + IV;
    }
  printf("%0.2f\n", IV);

 return 0;
}
