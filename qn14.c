#include<stdio.h>
int main(){
int temp,num[30],count =0,sum = 0;
printf("enter sequence of numbers (-1 means exit) : ");
for(int i = 0; i < 30; i++){
    scanf("%d",&temp);
    if(temp == -1){
        break;
    }
    num[i]= temp;
    sum = sum + num[i];
    count++;
}
temp = 0;
for(int j = 0 ; j<count ; j ++){
    for(int k = 0 ; k< count-1 ; k++){
        if(num[k]>num[k+1]){
            temp = num[k];
            num[k] = num[k+1];
            num[k+1] = temp;
        }
    }
}
printf("maximum is = %d\n",num[count-1]);
printf("minimum is = %d\n",num[0]);
printf("sum is = %d\n",sum);
printf("average is = %f",(float)sum/count);

return 0;
}
