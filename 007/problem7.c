#include<stdio.h>

int is_prime(int num)
{
	int i;
	for (i = 2; i < num; i++) {
		if (num % i ==0)
			return 0;
	}
	return 1;
}

int main()
{
	int prime = 0;
	int counter = 0;
	while (prime <= 10001) {
		counter++;
		if (is_prime(counter))
			prime++;
	}
	printf("%d\n", counter);
}
