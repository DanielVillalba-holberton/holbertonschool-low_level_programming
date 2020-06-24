#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a;
	int sum = 0;
	srand(time(0));
		while (sum < 2772 - 127)
		{
			n = rand();
			a = n % 127;
			if (a > 32)
			{
				putchar (a);
				sum += a;			
			}
		}
	putchar(2772 - sum);
return (0);
}
