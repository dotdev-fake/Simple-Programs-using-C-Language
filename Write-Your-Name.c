#include <stdio.h>
#include <string.h>

int main() {
	
	char name[50];
	
	printf("Please Enter Your Name: ");
	fgets(name, sizeof(name), stdin);
	
	size_t length = strlen(name);
	if (length > 0 && name[length - 1] == '\n') name[length - 1] = '\0';
	
	printf("Your name is: %s", name);
	printf("\nLength of input: %zu", strlen(name));
	return 0;
}
