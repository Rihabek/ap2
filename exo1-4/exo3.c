#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool est_trie(float tab[], unsigned int n ){

  unsigned int i = 0 ;

  while (i<n-1  && tab[i]<= tab[i+1])
  {
      i = i+1;
  }

  return i >= n -1;
}

 void test_est_trie_param(float tab[], unsigned int n){

    if (est_trie(tab,n)){
      printf("le tableau est trie\n");
    }
    else
     {
       printf("le tableau n'est pas trie\n");
     }
  }
  

void test_est_trie()
  {
    float tab1[] = {2,5,4,3,1};
    float tab2[] = {1,2,3,4,5};

    test_est_trie_param(tab1,4);
    test_est_trie_param(tab2,4);
      
    
    }

int main (){
  test_est_trie();
}


/* resultas
belkhadi4u@fst-ats-312-l10:~/Documents/project$ ./exo3
le tableau n'est pas trie
le tableau est trie
*/
