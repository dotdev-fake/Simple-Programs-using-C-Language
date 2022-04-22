# include <stdio.h>
# include <conio.h>

main(){
	
	double x, x0, time;
	double velocity;
	
	printf("Get the object's initial position: ");
	scanf("%lf", &x0);
	
	printf("Get the object's final position: ");
	scanf("%lf", &x);
	
	printf("Change in time: ");
	scanf("%lf", &time);
	
	velocity = (x-x0)/time;
	
	printf("\nThe velocity of the object is %.2lf m/s\n\n", velocity);

	getch();
}
