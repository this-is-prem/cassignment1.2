#include<stdio.h>
#include<stdbool.h>
int main(){
int num,sto[30],i=0;
while(true)
{
    scanf("%d",&num);
    if(num == -1)
    break;
    sto[i]=num;
    i++;
}
for(int j = 0; j<i;j++){
    printf("%d ",sto[j]);
}
return 0;
}
