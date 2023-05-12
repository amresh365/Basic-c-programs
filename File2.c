// C program to Open a File,
// Read from it, And Close the File

# include <stdio.h>
# include <string.h>

int main( )
{

	// Declare the file pointer
	FILE *fp ;
	
	// Declare the variable for the data to be read from file
	char data[50];

	fp = fopen("Student.c", "r") ;
	
	if (fp == NULL)
	{
		printf("Student.c file failed to open.") ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		
		// Read the data from the file
		// using fgets() method
		while(fgets(data, 50, fp) != NULL)
		{
		
			printf("%s" , data) ;
		}
		
		// Closing the file using fclose()
		fclose(fp) ;
		
		printf("Data successfully read from file Student.c\n");
		printf("The file is now closed.") ;
	}
	return 0;	
}
