#include <stdio.h> 
int main()
{
int n;
int reverse=0,m;
printf("Введите целое число:");
scanf("%d",&n);

while(n>0)
{
    m=n%10;
    reverse=reverse*10+m;
    n=n/10;
}

printf("%d",reverse);
    return 0;
}