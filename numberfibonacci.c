#include <stdio.h>

int main()
{
    int n1=0,n2=1,n3,i,n,number,found;
    printf("enter n");
    scanf("%d",&n);
    printf("enter number");
    scanf("%d ",&number);
    printf("fibonacci series: %d %d",n1,n2);
    for(i=2;i<n;i++){
        n3=n1+n2;
        printf(" %d ", n3);
        if(number==n3){
            found=1;
        }
        n1=n2;
        n2=n3;
    }
    if(number==n1 || number==n2 || found){
        printf("\n%d is prsent in the series",number);
    }
    else{
        printf("\n%d is not present in the series",number);
    }
    return 0;
}
    
    
