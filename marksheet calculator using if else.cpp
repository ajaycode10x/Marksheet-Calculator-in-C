// create a program for marksheet :::::::::::::::
#include<stdio.h>

int main()

{
	int mark;
	
	printf("Please Enter mark :");
	scanf("%d",&mark);
	
	if(mark <= 100 && mark > 90){
		printf("A++\n");
	}
	
	else if(mark <= 90 && mark > 80)
{
	printf("A+ \n");
}

	else if(mark <= 80 && mark > 70)
	{
	printf("B+ \n");
}

else if(mark <= 70 && mark > 60 )
{
printf("B \n");
}

else if(mark <= 60 && mark >= 51 ){
	printf("C \n");
}

else if(mark <= 50 && mark >= 30)
{
	printf("PASS \n");
}
else if (mark < 30)
	{
	printf("FAIL \n");
	}

	printf("\n Best of luck");
	return 0;
}
