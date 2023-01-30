/* Programming Exercise 4-7 */

/*
    Write a program that sets a type double variable to 1.0/3.0 and a type float variable
    to 1.0/3.0. Display each result three times -- once showing four digits to the right of the
    decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits
    to the right of the decimal. Also have the program include float.h and display the
    values of FLT_DIG and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
*/

#include<stdio.h>
#include<float.h>

int main(void) {
    double num1 = 1.0/3.0;
    float num2 = 1.0/3.0;

    printf("double vlaues: \n");
    printf("%.4lf\n", num1);
    printf("%.12lf\n", num1);
    printf("float vlaues: \n");
    printf("%.4f\n", num2);
    printf("%.12f\n", num2);
    printf("%.16f\n", num2);

    printf("double precision = %d digits\n", DBL_DIG);
    printf("float precision = %d digits\n", FLT_DIG);

    return 0;
}