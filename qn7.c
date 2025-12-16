#include<stdio.h>
int main(){
int num ;
printf("enter a positive integer :");
scanf("%d",&num);
for(int i = 2; i<=num/2 ;i++){
    if (num%i==0){
        printf("%d",i);
    }
}



return 0;
}
