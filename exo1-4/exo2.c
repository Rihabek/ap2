#include <stdio.h>
#include <stdlib.h>

void afficher_entiers_jusqu_a(unsigned int n);
void afficher_entiers_intervalle(unsigned int a, unsigned int b);


void afficher_entiers_intervalle(unsigned int a, unsigned int b){
  if (a>b){
    return;
  }
  printf("%u\n",a);
  afficher_entiers_intervalle(a+1,b);

}

void afficher_entiers_jusqu_a(unsigned int n)
{
  afficher_entiers_intervalle(0, n);

}

void  test_afficher_entiers_jusqu_a_param(unsigned int n)
{
  afficher_entiers_jusqu_a(n);

}

void test_afficher_entiers_jusqu_a()
{
  test_afficher_entiers_jusqu_a_param(0);
  test_afficher_entiers_jusqu_a_param(1);
  test_afficher_entiers_jusqu_a_param(3);
  test_afficher_entiers_jusqu_a_param(4);
}

int main ()
{
	test_afficher_entiers_jusqu_a() ;
	return EXIT_SUCCESS ;
}

/* result 
belkhadi4u@fst-ats-312-l10:~/Documents/project$ ./exo2
0
0
1
0
1
2
3
0
1
2
3
4
 
*/
