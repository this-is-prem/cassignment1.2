#include<stdio.h>
int main(){
int num ,num1, reminder= 0 ,1 sum = 0 ;
printf("enter positive integer :");
scanf("%d",&num);
num1 = num ;
for(int i = 0 ; num>0; i++){
    reminder = num%10 ;
    sum = sum*10 + reminder;
    num = num/10;
};
if(sum == num1){
    printf("\nis a pallindromic integer ");

} else {
     printf("not a pallindromic integer");
     }

return 0;
}
