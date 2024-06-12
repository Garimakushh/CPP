/*#include<stdio.h>

int main(){

FILE *fileptr;

char file_name[20];

char file_content[100];

printf("Enter the name of file:");

scanf("%s", &file_name);

fileptr=fopen(file_name, "r");

if(fileptr == NULL) {

printf("file not found \n file not open successfully");

}

else{

printf("file found \n and file open successfully \n content of file is:\n");

int key=0;

while(fgets(file_content, 100, fileptr) !=NULL) {

printf("%s\n", file_content);

key=1;

}

if(key!=1){

printf("file is empty");

}

}

fclose(fileptr);

return 0;

}*/
#include <stdio.h> 
#include <stdlib.h> // For exit() 

int main() 
{ 
	FILE *fptr1, *fptr2; 
	char filename[100], c; 

	printf("Enter the filename to open for reading \n"); 
	scanf("%s", filename); 

	// Open one file for reading 
	fptr1 = fopen(filename, "r"); 
	if (fptr1 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	printf("Enter the filename to open for writing \n"); 
	scanf("%s", filename); 

	// Open another file for writing 
	fptr2 = fopen(filename, "w"); 
	if (fptr2 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 

	// Read contents from file 
	c = fgetc(fptr1); 
	while (c != EOF) 
	{ 
		fputc(c, fptr2); 
		c = fgetc(fptr1); 
	} 

	printf("\nContents copied to %s", filename); 

	fclose(fptr1); 
	fclose(fptr2); 
	return 0; 
}
