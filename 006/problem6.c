#include<stdio.h>

int main()
{
	int num = 101;
	int sum = 0;
	int sum_of_square = 0;
	while (num-- > 1) {
		sum += num;
		sum_of_square += num * num;
	}
	printf("%d\n", sum * sum - sum_of_square);
}
