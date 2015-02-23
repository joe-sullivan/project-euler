#include<stdio.h>

int main()
{
	int num = 2520;
	int rem = -1;
	int i;
	while (1) {
		for (i = 1; i <= 20; i++) {
			rem = num % i;
			if (rem != 0) break;
		}
		if (rem == 0) break;
		num += 20;
	}
	printf("%d\n", num);
}
