#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char *argv[])
{
	int i,j,input;
	char a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char b[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};
	char c[] = 
	{
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	       	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'
		
	};
	char d[] =
	{
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'
	};
	if(argc != 1)
		perror("input only one number");
	input = atoi(argv[1]);
	char select[input];
	srand(time(NULL));
	printf("Password : ");
	for(i = 0; i < input; i++)
	{
		j = (rand() % 4);
		if((j % 4) == 0) // a 0 ~ 10
		{
			select[i] = a[(rand() % 11)];
		}
		else if((j % 4) == 1) // b 0 ~ 10
		{
			select[i] = b[(rand() % 11)];
		}
		else if((j % 4) == 2) // c 0 ~ 25
		{
			select[i] = c[(rand() % 26)];
		}
		else if((j % 4) == 3) // d 0 ~ 25
		{
			select[i] = d[(rand() % 26)];
		}		
		printf("%c",select[i]);
	}
	printf("\n");
	return 0;
}
