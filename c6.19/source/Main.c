#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[13];

int main(void)
{
	int s1, s2, c;
	srand(time(NULL));
	for (int i = 0; i < 3600; i++)
	{
		s1= rand() % 6 + 1;
		s2 = rand() % 6 + 1;
		c = s1 + s2;
		++a[c];
	}	
	printf("%s%17s\n", "Total", "Frequency");
	for (int i = 2; i < 13; i++)
	{
		printf("%5d%17d\n", i, a[i]);
	}
	system("pause");
	return	0; 
}