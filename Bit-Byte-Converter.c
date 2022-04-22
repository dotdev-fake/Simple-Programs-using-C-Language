# include <stdio.h>
# include <conio.h>

main(){
	
	char option;
	double n1, n2;
	double bit, byte;
	
	printf("\n**********************************");
	printf("\n*                                *");
	printf("\n* WELCOME TO BIT-BYTE CONVERTER! *");
	printf("\n*                                *");
	printf("\n**********************************");

	printf("\n\nWhich converter you wish to perform?");
	printf("\n1. bits to Bytes ");
	printf("\n2. Bytes to bits");
	
	printf("\n\n\nEnter number here: ");
	scanf("%s", &option);
	
	switch(option){
		
		case '1':
			
			printf("Enter bit(s): ");
	        scanf("%lf", &n1);
	        
	        byte = n1/8;
	        printf("\nYou exactly have %.5lf Bytes.\n", byte);
			break;
			
		case '2':
			
			printf("Enter Byte(s): ");
			scanf("%lf", &n2);
			
			bit = n2*8;
			printf("\nYou exactly have %.5lf bits.\n", bit);
			break;
			
		default:
			printf("\nYou have entered the wrong number!");
			printf("\nprogram is closing now... stupid.\n");
	}
	
	getch();
}
