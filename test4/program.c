#include <stdio.h>

//Musimy pokazac jakiego typu dane funkcja ma przyjmować, pominiecie ich spowoduje blad
double Dodaj(double, double);


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
