# include<stdio.h>
# include<conio.h>

main(){
	
	double _fahrenheit, _celsius;
	
	_celsius=0;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\tTable of Degree Celsius to Fahrenheit");
	printf("\n\t\t\t-------------------------------------");
	printf("\n\t\t\tCelsius                    Fahrenheit");
	printf("\n\n\t\t\t      %.0lf%30.0lf", _celsius, _fahrenheit);
	
	_celsius=_celsius+20;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\t     %.0lf%30.0lf", _celsius, _fahrenheit);
	
	_celsius=_celsius+20;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\t     %.0lf%30.0lf", _celsius, _fahrenheit);
	
	_celsius=_celsius+20;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\t     %.0lf%30.0lf", _celsius, _fahrenheit);   
	
	_celsius=_celsius+20;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\t     %.0lf%30.0lf", _celsius, _fahrenheit); 
	
	_celsius=_celsius+20;
	_fahrenheit =(_celsius*9/5)+ 32;
	
	printf("\n\t\t\t    %.0lf%30.0lf\n", _celsius, _fahrenheit); 
	printf("\t\t\t-------------------------------------\n");
	
	getch();
	
} 
