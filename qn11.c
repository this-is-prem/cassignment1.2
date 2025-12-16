#include<stdio.h>
int main(){
int inputBase , outputBase , num,rem ;
printf("enter input base : ");
scanf("%d",&inputBase);
printf("enter output base : ");
scanf("%d",&outputBase);

if (inputBase == 2){
    printf("enter your desired binary number : ");
    scanf("%d",&num);
    int temp = num;
    for(int i = 0 ; temp>0 ; i++){
        rem = temp % 10;
        if(rem != 0 && rem != 1){
            printf("\nenter valid binary number");
            break;
        }
        temp /= 10;
    }
}
if (inputBase == 10){
    printf("enter your desired decimal number : ");
    scanf("%d",&num);
    if (num<0){
        printf("negative numbers not supported !!");
        return 1;
    }


}

if (inputBase == 8){
    printf("enter your desired octal number : ");
    scanf("%d",&num);
    int temp = num;
    for(int i = 0 ; temp>0 ; i++){
        rem = temp % 10;
        if(rem > 7){
            printf("\nenter valid octal number\n");
            break;
        }
        temp /= 10;
    }

}
/*
if (inputBase == 16)
*/
return 0;
}
