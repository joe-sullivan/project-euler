#include<stdio.h>

int isPrime(int n)
{	
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0 && n != i)
			return 0;
	}
	return 1;
}

int main()
{
	int i;
	int largest = 1;
	unsigned long number = 600851475143;
	for (i = 2; i < number; i++) {
		if (number % i == 0 && isPrime(i))
			largest = i;
	}
	printf("%d\n", largest);
	return 0;
}
