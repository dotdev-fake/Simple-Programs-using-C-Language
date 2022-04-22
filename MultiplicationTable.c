# include <stdio.h>
# include <conio.h>


main(){
	
	int a,
	    b,
		choice;
	    
	do{
		system("cls");
	    printf("            Multiplication Table(10)\n");
	    printf("------------------------------------------------");
	    printf("\nType the number you want to see the table of: ");
	    scanf(" %d", &a);
	
	    printf("------------------------------------------------\n");
	    
	for(b=1;b<=10;++b){
		
		printf("%d x %d = %d\n", a, b, a*b);
	}

	printf("------------------------------------------------\n");
	getch();
	printf("\nWould you like to try again? [Y/N] ");
	scanf(" %c", &choice);
	
	}
	
	while(choice == 'y' || choice == 'Y');
	
	system("cls");
	printf("Thank you for using the program!");
}
