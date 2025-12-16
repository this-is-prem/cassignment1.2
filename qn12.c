#include<stdio.h>
int main(){
char *one = "one";
char *two = "two";
char *three = "three";
char *four = "four";
char *five = "five";
char *six = "six";
char *seven = "seven";
char *eight = "eight";
char *nine = "nine";
char *zero = "zero";
int num,rem,newrem,sum = 0;
printf("enter a number : ");
scanf("%d",&num);
for(int i = 0 ; num>0;i++){
    rem = num%10;
    sum = (sum * 10) + rem;
    num /= 10;
}
for(int i = 0; sum>0 ; i++){
    newrem = sum%10;
    if(newrem == 0){
        printf("%s ",zero);
    }
    if (newrem == 1){
        printf("%s ",one);
    }
    if (newrem == 2){
        printf("%s ",two);
    }
    if (newrem == 3){
        printf("%s ",three);
    }
    if (newrem == 4){
        printf("%s ",four);
    }
    if (newrem == 5){
        printf("%s ",five);
    }
    if (newrem == 6){
        printf("%s ",six);
    }
    if (newrem == 7){
        printf("%s",seven);
    }
    if (newrem == 8){
        printf("%s ",eight);
    }
    if (newrem == 9){
        printf("%s ",nine);
    }
    sum = sum /10;

}
return 0;
}
