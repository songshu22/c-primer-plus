/* Programming Exercises 9-8 */

/*
    Chapter 6, "C Control Statements: Looping," (Listing 6.20) shows a power() function
    that returned the result of raising a type double number to a positive integer value.
    Improve the function so that it correctly handles negative powers. Also, build into the
    function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
    (It should report that 0 to the 0 is undefined, then say it's using a value of 1.) Use a loop.
    Test the function in a program.

    Enter a number and the integer power to which
    the number will be raised. Enter q to quit.
    -3 9
    -3 to the power 9 is -19683
    Enter next pair of numbers or q to quit.
    3 0
    3 to the power 0 is 1
    Enter next pair of numbers or q to quit.
    q
    Hope you enjoyed this power trip -- bye!

 */
#include <stdio.h>

double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x,exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
		if (n == 0)
			pow = 0;
	}
	else if (p < 0)
	{
		for (i = -1; i >= p; i--)
			pow /= n;
		if (n == 0)
			pow = 0;
	}
	else if (p == 0 && n == 0)
	{
		printf("0 to the 0 is undefined, and it's using a value of 1.\n");
		pow = 1;
	}
	else
		pow = 1;

	return pow;
}