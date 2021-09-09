#include <stdio.h>
int strrem(char *palabra, char target);
int main()
{
	
	char palabra[]={'v','a','l','e','r','i','a','\0'};
	char target='a';
	int resultado=strrem(palabra,target);
	printf("%s\n",palabra);
	printf("se eliminaron %d letras\n",resultado);
	return 0;
}
int strrem(char *palabra, char target)
{
	
	int borradas=0;
	char *checkPoint=palabra;
	
	while(*palabra!='\0')
	{
		if(*palabra==target)
		{
			checkPoint=palabra;
			borradas++;
			while(*checkPoint!='\0')
			{
				*checkPoint=*(checkPoint+1);
				checkPoint++;
			}
			palabra--;
		}
		palabra++;	
	}
	return borradas;	
}
