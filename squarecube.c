#include <stdio.h>

int main()
{
    int i,num1,num2;
    printf("enter num1");
    scanf("%d",&num1);
    printf("enter num2");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%2==0){
            printf("%d\n",i*i);
        }
        else{
            printf("%d\n",i*i*i);
        }
    }
    return 0;
}
