/*author belkhadiri rihab */

#include <stdio>
#include <stdlib>

unsigned int fibo(unsigned int x)
{
  unsigned int a;
  printf("fibo(%d)\n", x);
  a = 1;
  if (x == 0 || x == 1)
  {
    return a;
  }
  return fibo(x-2)+ fibo(n-1);
}

void test_fibo_param(unsigned int x)
{
  fibo(x);
}

void test_fibo()
{
  test_fibo_param(0);
  test_fibo_param(5);
  test_fibo_param(10);

}

int int main(int argc, char const *argv[])
{
  test_fibo();
  return EXIT_SUCCESS;
}
