#include<conio.h>
#include<stdio.h>
void main(){
    int n,i,f=1;
    printf("Enter the Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("the factorial of %d is the %d",n,f);

}