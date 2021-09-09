#include <stdio.h>
void printWordAbbreviation(char *word)
{
  char *respaldo=word;
  int i=0,l=0;
  for(i=0;*(respaldo)!='\0';i++)
  {
    l++;
    respaldo++;
  }
 
  if(l<=9)
  {
       printf("%s",word);
  }
  else
  {
    printf("%c%d%c",*word,l-2,*(word+(l-1)));
  }
}
int main()
{


	return 0;
}
