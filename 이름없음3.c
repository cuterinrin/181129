int white_space(char c);
{if(c = ' ')
  return 1;
 if else(c = '\n')
  	return 1;
 if else(c = '\r')
  	return 1;
 if else(c = '\t') 
  	return 1;
 if else(c = '(')
  	return 1;
 if else(c = ')')
  	return 1;
 else
 	return 0;
