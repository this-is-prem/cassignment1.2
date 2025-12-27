#include<stdio.h>
int main(){
float weight;
float height;
float bmi;
printf("ENTER WEIGHT IN KGS :");
scanf("%f",&weight);
printf("ENTER HEIGHT IN METERS :");
scanf("%f",&height);

bmi = weight/(height*height);
if (bmi < 18.5){
    printf("BMI = %f , CATEGORY = underweight",bmi);
} else if (bmi >= 18.5 && bmi < 25){
    printf("BMI = %f , CATEGORY = normal",bmi);
} else if (bmi >=25 && bmi< 30){
    printf("BMI = %f , CATEGORY = overweight",bmi);
} else if (bmi >= 30){
    printf("BMI = %f , CATEGORY = obese",bmi);
}

return 0;
}
