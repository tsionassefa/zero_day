#include <stdio.h>
int main()
{
	
/*	printf("please enter your name:");
	char an;
	scanf(" %c", &an);
	 printf("your name is: %c", an);*
	char j;
	j='M';
	printf("%d means %c",j,j);
       	
	
	for (int m = 65; m <= 91; m++)
		printf("%d -- %c\n",m,m);
		*/
	char ch;
	printf("enter the alphabet tha you want:");
	scanf("%c", &ch);
	if ( ch >= 'A' && ch<= 'Z')
	{
		ch = ch + 32;
	printf("the corresponding lower case is: %c\n", ch);

		} 
	else if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		printf("the corresponding upper case is: %c\n", ch);
	}
	else {
		printf("damn ass look what you have asked before\n");
	}
	       		return (0);
}
