#include <stdio.h>

// Wymagane jest jawne dowiązanie czyli zamiast "extern (C) wprowadzamy "static" (C++)
static const double PI;     
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
