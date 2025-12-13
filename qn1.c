#include<stdio.h>
int main(){
int num,num1, reminder=0,quotient,divisor = 1000;
printf("enter a number(4digits) : ");
scanf ("%d", &num);
num1=num;
//for right to left
printf("right to left :");
for(int i = 0 ; num>0; i++){
    reminder = num%10 ;
    num = num/10;
    printf("%d", reminder);
}
printf("\n");
printf("left to right :");
//for left to right
for(int i = 0 ; num1>0;i++){
    quotient = num1/divisor;
    num1 = num1%divisor;
    divisor = divisor/10;
    printf("%d ", quotient);
}

return 0;
}
