#include "maths.h"

int main(void)
{
	int a = 100;
	int b = 10;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, div(a, b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));

	return (0);
}
