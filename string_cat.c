#include <stdio.h>

char * string_concatenation(char *to,char *from)
{
  
  int i = 0;
  int j = 0;
  
  while(to[i] != '\0')
    i++;
  
  while(from[j] != '\0')
  {
    to[i] = from[j];
    i++;
    j++;
  }
  
  return to;
}

int main(void)
{
 
 char string_one[25],string_two[25];
 char *result;
 
 printf("Enter first string\n");
 
 scanf("%s",string_one);
  
 
 printf("Enter second string\n");
 
 scanf("%s",string_two);
  
 
 result = string_concatenation(string_one,string_two);
 
 printf("Result: %s\n",result);
 
 return (0);
} 
