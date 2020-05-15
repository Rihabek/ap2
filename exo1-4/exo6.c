/*author belkhadiri rihab */

#include <stdio>
#include <stdlib>

void afficher_binaire(int x )
{
  if (x>1)
  {
    afficher_binaire(x/2);
  }
  printf("%d\n", a%2);
}

void test_afficher_binaire_param(int x)
{
  printf("afficher_binaire(%d):", x);
  afficher_binaire(x);
}

void test_afficher_binaire()
{
  test_afficher_binaire_param(1);
  test_afficher_binaire_param(10);
  test_afficher_binaire_param(15);
  test_afficher_binaire_param(20);
  test_afficher_binaire_param(40);

}


int somme_chiffre(int a)
{
  if (a ==0)
  {
    return 0;
  }
  return a%10 + somme_chiffre(n/BASE);
}

void test_somme_chiffre_param(int x)
{
  printf("somme_chiffre(%d):",a, somme_chiffre(a) );
}

void test_somme_chiffre()
{
  test_somme_chiffre_param(1);
  test_somme_chiffre_param(10);
  test_somme_chiffre_param(15);
  test_somme_chiffre_param(25);

}

int int main(int argc, char const *argv[])
{
  test_afficher_binaire();
  test_somme_chiffre();
  return 0;
}
