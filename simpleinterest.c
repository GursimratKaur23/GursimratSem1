#include <stdio.h>

int main()
{
    float principle,rate,time,si;
    printf("enter the principle :");
    scanf("%f", &principle);
    printf("enter the time:");
    scanf("%d", &time);
    rate=4.0;
    si=(principle*time*rate)/100;
    printf("%f", si);
    return 0;
}
