#include<stdio.h>

int main(){
    char ch;

    printf("Enter a Character:- \n");
    scanf("%c",&ch);

    if (ch>='A'&& ch<='Z'){
    printf("It is a UPPERCASE Character \n");
    }
    else if(ch>='a' && ch<='z'){
        printf("It is a lowecase character \n");
    }
    else if (ch>='0' && ch<='9'){
        printf(" It is a Digit \n");
    }
    else{
        printf("It is a Spcial Character........!!");
    }
    return 0;
}