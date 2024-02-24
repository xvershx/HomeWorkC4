#include <stdio.h> 
main()
{
 int a, b, c, raz; 
 printf("Input number:\n");
 scanf ("%d%d", &a, &b); 
 raz = a - b; 
 printf("%d %s %d %s %d", a, "-" , b ,"=" , raz);
 return 0;
}