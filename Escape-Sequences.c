//This Program shows the basic commands of formatting a text

# include <stdio.h>
# include <conio.h>

main ()
{
	
	//To produce a sound, use \a.
	printf("\aListen to the beep.");
	
	//To delete one character backwards, use \b.
	printf("\nWhere's the 't' in cat\b?");
	
	//To transfer text into lower part, use \n.
	printf("\n \n Where is the money?");
	
	//To center a text, use \t.
	printf("\nThe rabbit jumps... \t \t two tabs.");
	
	printf("\n\nWelcome to CS200!");
	
	//To display quote, type \".
	printf("\n\nFrom Cotabato with LovePrint 3 double quotes-\"\"\"");
	
	//To display a percentage, type &&.
	printf("\nPrint 2 percents-%%%%");
	
	//To display backslashes, type \\.
	printf("\nPrint two backslashes-\\\\ \n\n");
	
	getch();
}

