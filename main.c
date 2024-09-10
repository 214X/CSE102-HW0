#include <stdio.h>
#include "util.h"

int main()
{

    /* A fractional number: 13/7 */
    int num1 = 13, den1 = 7;
    /* A second fractional number: 13/11 */
    int num2 = 30, den2 = 11;
    /* An unitilized fractional number */
    int num3, den3;

    printf("First number: ");
    fraction_print(num1, den1);
    printf("\n");

    printf("Second number: ");
    fraction_print(num2, den2);
    printf("\n");

    printf("Addition: ");
    fraction_add(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Subtraction: ");
    fraction_sub(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Multiplication: ");
    fraction_mul(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Division: ");
    fraction_div(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");


    // MY CODES

    printf("\n___ // ___\n\n");
    printf("Please enter the numerator of the first fraction > ");  // for input
    scanf("%d", &num1);

    printf("\n%d // ___\n\n", num1);
    printf("Please enter the denominator of the first fraction > ");
    scanf("%d", &den1);

    printf("\n___ // ___\n\n");
    printf("Please enter the numerator of the second fraction > ");
    scanf("%d", &num2);

    printf("\n%d // ___\n\n", num2);
    printf("Please enter the denominator of the second fraction > ");
    scanf("%d", &den2);

    if(den1 == 0 || den2 == 0)                                // a/0 = undefined so I inhibit the input 0
    {                                                         // for den1 and den2
        printf("You entered undefined fraction!!!\n");
        return 0;
    }

    // I COPIED THIS PART FROM THE GIVEN CODE BY YOU

    printf("First number: ");   
    fraction_print(num1, den1);
    printf("\n");

    printf("Second number: ");
    fraction_print(num2, den2);
    printf("\n");

    printf("Addition: ");
    fraction_add(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Subtraction: ");
    fraction_sub(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Multiplication: ");
    fraction_mul(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    printf("Division: ");
    fraction_div(num1, den1, num2, den2, &num3, &den3);
    fraction_print(num3, den3);
    printf("\n");

    return (0);
}
