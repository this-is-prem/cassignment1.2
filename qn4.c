#include<stdio.h>
int main()
{
int  option;
printf("enter a mark range option :");
printf("1. 80-100\n2. 60 - 79\n3. 50 - 59\n4. 40-49\n5. 0-39\n");
scanf("%d",&option);
switch(option)
{
case 1:
    printf("A");
    break;
case 2:
    printf("B");
    break;
case 3:
    printf("C");
    break;
case 4:
    printf("D");
    break;
case 5:
    printf("F");
    break;
default:
    printf("\nenter a valid option !!! ");
    break;

}


return 0;
}
