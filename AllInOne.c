#include <locale.h>
#include <stdio.h>
int main(int argc, char **argv)
{
char Choice;
 setlocale(LC_ALL, "Rus");
 while(1)
 {
 printf("1. Первая задача\n");
 printf("2. Вторая задача\n");
 printf("3. Третья задача\n");
 printf("4. Четвертная задача\n");
 printf("0. Выход\n");
 printf("Для выход нажмите Q\n");
NO_PRINT:
 scanf("%c",&Choice);
 //printf("%x\n",Choice);
 switch(Choice)
 {
 case '1':
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
    
    break;
 
 case '2':
    {
        int three; 
        int count = 0;
        printf("Введите целое положительное число:\n");
        scanf("%d", &three);

         while (three>0)
        {
              three/=10;
             count++;
        }

         if (count == 3)
        {
            printf("YES");
        }

         else printf("NO");

        return 0;
    }
    break;

 case '3':
    {
        int one, chet; 
    
        printf("Введите целое положительное число:\n");
        scanf("%d", &one);
    
         while (one>0)
        {   
            if (one%2==0)
            {
                one = one / 10;
            }
            else 
            {
                printf("NO\n");
                break;
            }
            if (one == 0) printf("YES\n");
       }

        return 0;
    }
    break;

 case '4':
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
         break;

 case '0':
 case 'q':
    return 0;
    break;

 case 0xa://'\n':
    goto NO_PRINT;
    break;

 default:
 printf("Непонятный выбор\n");
 break;
 }
 }
 return 0;
}