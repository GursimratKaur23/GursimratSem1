#include <stdio.h>
#include <math.h>

int main()
{
    int i,n1,n2,num,isprime;
    printf("enter n1");
    scanf("%d",&n1);
    printf("enter n2");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++){ 
        if(i<2)
        continue;
        isprime=1;
        for(num=2;num<=sqrt(i);num++){
            if(i%num==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            printf("%d\n",i);
        }
    }
    return 0;
}
