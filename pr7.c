#include<stdio.h>

float calc(){
	float a,sum,minus,multi,divi,per,b;
	int cal;
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for PER \n");
	printf("Press 0 for Exit\n");
	
	
	do{
	printf("===================\n");
	printf("========CALC=======\n");
	printf("===================\n");	
	printf("Enter your Choice :");
	scanf("%d",&cal);
	switch(cal){
	case 1:
	printf("Enter Number A:");
	scanf("%f",&a);
	printf("Enter Number B:");
	scanf("%f",&b);
	sum=a+b;
	printf("Sum of A&B is: %.2f\n",sum);
	break;
	
	case 2:
	printf("Enter Number A:");
	scanf("%f",&a);
	printf("Enter Number B:");
	scanf("%f",&b);
	minus=a-b;
	printf("Substraction of A&B is: %.2f\n",minus);
	break;
	
	case 3:
	printf("Enter Number A:");
	scanf("%f",&a);
	printf("Enter Number B:");
	scanf("%f",&b);
	multi=a*b;
	printf("Multiplication of A&B is: %.2f\n",multi);
	break;
	
	case 4:
	printf("Enter Number A:");
	scanf("%f",&a);
	printf("Enter Number B:");
	scanf("%f",&b);
	divi=a/b;
	printf("Division of A&B is: %.2f\n",divi);
	break;
	
	case 5:
	printf("Enter your Number A:");
	scanf("%f",&a);
	printf("Enter your Number B:");
	scanf("%f",&b);
	per=(b*100)/a;
	printf("Percentage of A of B is: %.2f\n",per);
	break;	
	
	default:
	printf("You are Exited....");
	break;	
	}
}while(cal != 0);
return 0;
}

void main(){
	calc();
}
