#include<stdio.h>
#include<math.h>
int main(){
int num,sizeCount=0,arm[10],sum = 0,temp,rem = 0;
printf("ENTER A NUMBER TO CHECK FOR ARMSTRONG NUMBER :");
scanf("%d",&num);
temp = num;
for(int i = 0; num>0;i++){
    rem = num%10;
    arm[i]=rem;
    num /= 10;
    sizeCount++;
}
for(int i = 0;i<sizeCount;i++){
    arm[i] = (int)pow(arm[i],sizeCount);
    sum = sum + arm[i];
}
if(sum == temp) {
    printf("\n%d is an armstrong number .",temp);
}else{
    printf("\n%d is not an armstrong number .",temp);
}

return 0;
}
