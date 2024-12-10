#include <stdio.h>

int main(){
	
	char c;
	
	printf("|| ASCII CHARACTER VALUE ||");
	printf("\nEnter a character: ");
	scanf(" %c", &c);
	
	int asciiVal = (int)c;
	printf("\nCharacter: %c", c);
	printf("\nASCII Value: %d", asciiVal);
}
