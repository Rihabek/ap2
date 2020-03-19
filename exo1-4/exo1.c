#include <stdio.h>
#include <stdlib.h>

unsigned int dpn(unsigned int n){
  unsigned int d;
  if (n==0)
  {
    return 1;
  }
 d = dpn(n-1);
 return d+d;
}

void test_dpn_param( unsigned int n)
{
	printf("%u\n", dpn(n));

}

void test_dpn()
{
	test_dpn_param(0) ;
	test_dpn_param(1) ;
	test_dpn_param(2) ;
	test_dpn_param(3) ;
	test_dpn_param(4) ;
	test_dpn_param(5) ;
}

int main ()
{
	test_dpn() ;
	return EXIT_SUCCESS ;
}

/*ce programme calcule le puissance de 2
belkhadi4u@fst-ats-312-l10:~/Documents/project$ ./exo1
1
2
4
8
16
32


*/



