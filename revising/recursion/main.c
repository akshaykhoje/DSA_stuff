// Tail recursion : All operations are done at the calling time and nothing is performed at the returning time.
// Head recursion : All operations are done at the returning time and nothing is performed at the calling time.
// Linear recursion: A function calling itself only one time.
// Tree  recursion: A function calling itself multiple times.
// Indirect recursion: A link of functions calling each other.  funA() => funB() => funC() => funA()
// Nested recursion: A recursion call inside a recursion call.

// #include <stdio.h>
// #include <stdlib.h>

// void fun1(int n)
// {
//   if (n > 0) {
//     printf("%d ", n);
//     fun1(n-1);
//   }
//     printf("Hello, world!\n");
//   return; 
// }

// void fun2(int n)
// {
//   if (n > 0) {
//     fun2(n-1);
//     printf("%d ", n);
//   }
//   printf("Hello, world!\n");
//   return;
// }

// int main()
// {
//   int x = 3;
//   printf("calling fun1:\n");
//   fun1(x);
//   printf("\n\ncalling fun2:\n");
//   fun2(x);
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
  if (n > 100)
    return n - 10;
  else
    return fun(fun(n+11)); 
}

int main()
{
  printf("%d\n",fun(95));
  return 0;
}