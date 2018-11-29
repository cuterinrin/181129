#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp;
	char file[100];
	
	//print,scan
	printf("input a file name : ");
	scanf("%s", file);
	
	//file open
	fp = fopen(file, "r");
	
	//error handling
	if(fp==NULL)
		{printf("error! check your file name %s.", file);
		return -1;
		}
	printf("%c\n", fgetc(fp));
	//file close
	fclose(fp);
	
	return 0;
}
