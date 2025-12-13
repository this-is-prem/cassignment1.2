#include<stdio.h>
int main(){
int num[20],sum = 0;
printf("ENTER SEQUENCE OF NUMBERS :");
for(int i = 0 ;i<20 ;i++){
    scanf("%d",&num[i]);
    if(num[i]== -1){
        break;
    }
    sum = sum + num[i];
}
printf("\nSUM = %d",sum);
return 0;
}
