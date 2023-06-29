#include<stdio.h>

int calc(){
	int a,sum,minus,multi,divi,per,b,cal;
	int output;
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
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	sum=a+b;
	printf("Sum of A&B is: %d\n",sum);
	break;
	
	case 2:
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	minus=a-b;
	printf("Substraction of A&B is: %d\n",minus);
	break;
	
	case 3:
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	multi=a*b;
	printf("Multiplication of A&B is: %d\n",multi);
	break;
	
	case 4:
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	divi=a/b;
	printf("Division of A&B is: %d\n",divi);
	break;
	
	case 5:
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	per=(b/a)*100;
	printf("Percentage of A of B is: %d\n",per);
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
