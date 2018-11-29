#include <stdio.h>
#include <stdlib.h>
#include "fget_word.h"
#include "keyword.h"

int main(int argc, char *argv[]) {
	
	int fget_word(FILE* fp, char* word);
	void count_word(char* word);
	void print_word(void);
	FILE* fp;
	char file[100];
	char word[100]; 
	
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
		
	while(fget_word(fp,word) != 0)//읽어오는게 한글자도 없다.
		{	
		
		count_word(word);
		}
		
	print_word();
	//file close

	fclose(fp);
	
	return 0;
}
