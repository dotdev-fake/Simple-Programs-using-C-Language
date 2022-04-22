# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

main(){
	
	char operation, choice;
	double n1,n2;
	double add,sub,mult,dvd;
	
	do{
		
	system("cls");
	printf("---------------------------------------");
	printf("\n1. Addition\t         2. Subtraction");
	printf("\n3. Multiplication\t 4. Division");
	printf("\n\t\t5. Exit");
	printf("\n---------------------------------------");
	printf("\nChoose an operator you want to use: ");
	scanf(" %c", &operation);

	switch(operation){
		
		case '1':
			system("cls");
			printf("Enter the Addend: ");
			scanf("%lf", &n1);
			
			printf("Enter the second Addend: ");
			scanf("%lf", &n2);
			
			add = n1+n2;
			printf("\nThe sum is %.2lf\n", add);
			getch();
			break;
			
		case '2':
			system("cls");
		    printf("Enter the Minuend: ");
			scanf("%lf", &n1);
			
			printf("Enter the Subtrahend: ");
			scanf("%lf", &n2);
			
			sub = n1-n2;
			printf("\nThe difference is %.2lf\n", sub);
			getch();
			break;
			
		case '3':
			system("cls");
			printf("Enter the Multiplicand: ");
			scanf("%lf", &n1);
			
			printf("Enter the Multiplier: ");
			scanf("%lf", &n2);
			
			mult = n1*n2;
			printf("\nThe product is %.2lf.\n", mult);
			getch();
			break;
			
		case'4':
			system("cls");
			printf("Enter the Dividend: ");
			scanf("%lf", &n1);
			
			printf("Enter the Divisor: ");
			scanf("%lf", &n2);
			
			dvd= n1/n2;
			printf("\nThe quotient is %.2lf\n", dvd);
			getch();
			break;
			
		case '5':
			system("cls");
			printf("You have exited the program.\n");
			exit(0);
			break;
			
		default:
			system("cls");
			printf("Wrong Input! Program closing now...\n");
			exit(0);
			break;
			
	}
	
	printf("\n------------------------------------");
	printf("\nDo you still wanna continue? [Y/N] ");
	scanf(" %c", &choice);
	
}  
     
    while(choice == 'y' || choice == 'Y');
    printf("\nThank you for using this program!");
}
