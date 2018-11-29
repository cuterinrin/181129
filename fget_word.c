#include<stdio.h>
#include<stdlib.h>
//쓸없글 지우기 
int white_space(char c)
{
	if(c == ' '
 		||c == '\n'
 		||c == '\r'
 		||c == '\t' 
		||c == '('
 		||c == ')')
  		return 1;

	else
 		return 0;
}


int fget_word(FILE* fp, char* word)
{
char c;
int cnt;

while((c=fgetc(fp))!=EOF)
{
	if(white_space(c)==0)
 		break;		
}
if(c==EOF)
	return 0;
	
//초기화 
cnt=0;
word[cnt++] = c;
word[cnt]='\0';

while((word[cnt]=fgetc(fp)) != EOF )
{if (white_space(word[cnt]) == 1)
	{word[cnt] = '\0';	
		break;
	}
	cnt++;
}

return cnt;
}
