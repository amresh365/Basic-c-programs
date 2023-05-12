// C program to Open a File,
// Write in it, And Close the File

# include <stdio.h>
# include <string.h>

int main( )
{

	// Declare the file pointer
	FILE *fp ;
	
	// Get the data to be written in file
	char data[50]
		= "Students of A1 are intelligent and energetic.";

	fp = fopen("Student.c", "w") ;
	
	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( fp == NULL )
	{
		printf( "Student.c file failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		
		if(strlen(data) > 0)
		{
			
			// writing in the file using fputs()
			fputs(data, fp) ;
			fputs("\n", fp) ;
		}
		
		// Closing the file using fclose()
		fclose(fp) ;
		
		printf("Data successfully written in file Student.c\n");
		printf("The file is now closed.") ;
	}
	return 0;	
}
