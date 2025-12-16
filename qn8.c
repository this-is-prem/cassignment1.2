#include<stdio.h>
int main(){
int num1,num2,sum = 0 ;
printf("enter two numbers for checking for amicable pair :");
scanf("%d%d",&num1,&num2);

for (int i =1;i<num1;i++){
    if (num1%i == 0){
        printf("%d ",i);
        sum = sum + i;
    }
}
if(sum==num2){
    printf("\n(%d , %d) are amicable pairs.",num1,num2);
}



return 0;
}
