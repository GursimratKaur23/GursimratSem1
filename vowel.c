#include <stdio.h>

int main()
{
    char ch,a,e,i,o,u,A,E,I,O,U;
    printf("enter alphabet");
    scanf("%c",&ch);
    if (ch=='a' ||  ch=='e'|| ch=='i'|| ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("the entered alphabet is a vowel");
    }
    else{
        printf("the entered alphabet is not a vowel");
    }
    return 0;
}
