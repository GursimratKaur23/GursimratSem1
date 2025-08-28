#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a by user");
    scanf("%d",&a);
    printf("enter b by user");
    scanf("%d",&b);
    if(a>b){
       if(a%2==0)
       printf("%d",a-b);
    }
    if(b>a){
       if (b%2==0)
         printf("%d",b-a);
    }
    return 0;
}
