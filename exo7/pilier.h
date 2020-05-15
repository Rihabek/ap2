#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct pilier
{
  int a;
  int b;
  int c;
};



void ecrire_nombre_disques_max(unsigned int nb, pilier *p)
{
  p->nombre_disques_max = nb;
}
