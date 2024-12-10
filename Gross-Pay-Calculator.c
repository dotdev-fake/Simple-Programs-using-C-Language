//This Program demonstrates how to do Gross-Pay through code

# include <stdio.h>
# include <conio.h>

main (){
	
	double hours, pay;
	double gross_pay;
	
	//Get hours worked
	printf("How many hours did you work? ");
	scanf("%lf", &hours);
	
	//Get hours worked
	printf("How much do you get paid per hour? ");
	scanf("%lf", &pay);
	
	//Solve for Gross Pay
	gross_pay = hours*pay;
	
	//Gross Pay
	printf("\nYou have earned %.2lf pesos during your work.\n\n", gross_pay);
	
	getch();
	
}
