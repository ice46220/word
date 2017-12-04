#include<stdio.h>
int main()
{
	float wei,hei;
	float bmi,heim;
	printf("Enter your weightg(kg.):");
	scanf("%f",&wei);
	printf("Enter your height(m):");
	scanf("%f",&hei);
	heim=(hei/100)*(hei/100);
	bmi=wei/heim;
	printf("BMI=%.2f ",bmi);
	if(bmi<18.5)
	{
		printf("Underweight");
	}
	else if(18.5<=bmi&&bmi<25.00)
	{
		printf("Normal");	
	}
	else if(25.00<=bmi&&bmi<=30.00)
	{
		printf("Overweight");	
	}else 
	{
		printf("Obese");	
	}
	return 0;
}
