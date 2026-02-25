#include<stdio.h>
int main(){
    int marks;
     printf("Enter the marks:-");
     scanf("%d",&marks);

if(marks>=90){
    printf("Grade Ex");
}
 else if (marks<90 && marks>=80){
    printf("grade A\n");
  }
else if (marks<80 && marks>=70){
    printf("grade B\n");
  }
else if (marks<70 && marks>=60){
    printf("grade C\n");
  }
else{
    printf("Grade F");
  }
  return 0;
}