#include<stdio.h>

int fib(int n)
{
	int f0 = 0;
	int f1 = 1;
	while (n-- > 1) {
		int tmp = f0;
		f0 = f1;
		f1 += tmp;
	}
	return f1;
}

int main()
{
	int value = 0;
	int i = 0;
	int sum = 0;
	while (value < 4000000) {
		value = fib(i++);
		if (value % 2 == 0 && value < 4000000)
			sum += value;
	}
	printf("%d\n", sum);
}
