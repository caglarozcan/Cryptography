#include <stdio.h>

char alfabe[23] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'y', 'z'};

int main() {

	char deger[6] = { 'd', 'e', 'n', 'e', 'm', 'e' };
	char depass[6];
	char enpass[6];

	int a = 5, b = 3;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			if (deger[i] == alfabe[j]) {
				int y = ((a*j) + b);
				depass[i] = alfabe[(y % 23)];
				break;
			}
		}
	}

	for (int k = 0; k < 6; k++)
	{
		printf("%c", depass[k]);
	}

	//DECRYPT

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			if (depass[i] == alfabe[j]) {
				int y = 14 * (j - b);
				enpass[i] = alfabe[(y % 23)];
				break;
			}
		}
	}

	printf("\n-----------------------------------\n");

	for (int k = 0; k < 6; k++)
	{
		printf("%c", enpass[k]);
	}

	getchar();

	return 0;
}
