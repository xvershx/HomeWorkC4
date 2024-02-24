#include <stdio.h> 
int main()

{
    int a, b, sum; 
    begin:
    printf("Введите два целых числа по модулю не больше 100:\n");
    scanf("%d%d", &a, &b);

    if ( a<=100 && b<=100 && a<=b )
    {    
        while (a<=b)
        {
            sum += a*a;
            a++;
        }
    }
    else
    {
        printf("Числа не попадают под услоение\n");
        goto begin;
    }
    printf("Сумма квадратов от %d до %d = %d",a, b, sum);
    return 0;
}