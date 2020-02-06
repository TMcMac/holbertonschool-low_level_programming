#include <stdio.h>
/* This is a program intended to return 1 and send a quote to stdout from stderr */

int main()
{
	int A = 0;
	
	if (A > 1)
		2>&1
		return 1;
	else
		;

	return (0);
}
