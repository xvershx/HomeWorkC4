#include <stdio.h> 
int main()

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