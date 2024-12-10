//This program uses the formulas for solving Areas of right triangles and converts it into code

# include<stdio.h>
# include<conio.h>

main(){
	
	double _leg1,_leg2, _result1,
	       _leg3,_leg4, _result2;
	
	printf("\nFormula for Area of Right Triangles");
	printf("\n-----------------------------------");
	printf("\n     Area = Base x Height / 2      \n\n");

	printf("\n1st Right Triangle");
	printf("\n------------------");

	printf("\nInsert Leg 1: ");
	scanf("%lf", &_leg1);
	printf("Insert Leg 2: ");
	scanf("%lf", &_leg2);
	
	_result1 = _leg1*_leg2/2;
	
	printf("\n2nd Right Triangle");

	printf("\n------------------");
  
	printf("\nInsert Leg 1: ");
	scanf("%lf", &_leg3);
	printf("Insert Leg 2: ");
	scanf("%lf", &_leg4);
	
	_result2 = _leg3*_leg4/2;
	
	
	if(_result1 == _result2){
		
		printf("\nBoth triangles are equal in comparison of values.\n");
		printf("\nBoth of their areas are %.0lf.\n", _result1);
	}
	else if(_result1>_result2){
    	
    	printf("\n1st Triangle is greater than 2nd Triangle.\n\n");
    	printf("\n1st Triangle has area of %.0lf.\n2nd Triangle has area of %.0lf.\n", _result1, _result2);
	}
	else{
		
		printf("\n1st Triangle is lesser than 2nd Triangle.\n");
		printf("\n1st Triangle has area of %.0lf.\n2nd Triangle has area of %.0lf.\n", _result1, _result2);
	}
	
    getch();
}
