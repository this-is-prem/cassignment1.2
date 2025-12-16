#include<stdio.h>
int main(){
int num1,sum = 0 ;
printf("enter a number for checking if it is a perfect number :");
scanf("%d",&num1);

for (int i =1;i<num1;i++){
    if (num1%i == 0){
        printf("%d ",i);
        sum = sum + i;
    }
}
printf("= %d",sum);
if(sum == num1){
    printf("\n%d is a perfect number .",num1);
}else {
    printf("\n%d is not a perfect number ",num1);
}


return 0;
}



