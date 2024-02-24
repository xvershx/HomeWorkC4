#include <stdio.h> 
int main()
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
        if (one == 0) printf("YES");
    }

    return 0;
}