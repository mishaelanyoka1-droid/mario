#include <stdio.h>

void block(int height);

int main(void)
{
	int height;
	
	printf("Height: ");
	scanf("%i", &height);
	
	block(height);
	
	return 0;
}

void block(int height)
{
	for(int i = 1; i <= height; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf("#");	
		}
		printf("\n");
	}		
}