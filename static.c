#include <stdio.h>

int sum(int num)
{
	static int total = 0;

	return total += num;
}

int main()
{
	printf("%d ", sum(55));
	printf("%d ", sum(45));
	printf("%d ", sum(50));

	return 0;
}