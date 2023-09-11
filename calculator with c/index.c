#include <stdio.h>
#include "cs50.h"

int main (void)
{

  while (1){
    printf("1.addision\n");
    printf("2.subtraction\n");
    printf("3.multiplcation\n");
    printf("4.division\n");
    printf("5.quit\n");

    char ans = get_char("select an option(1-5):");

    if (ans < '1' || ans > '5')
    {
      printf("invalid input\n");
      break;
    }

    if (ans == '5')
    {
      printf("Goodbye!\n");
      break;
    }

    long num1 = get_long("num1: ");
    long num2 = get_long("num2: ");

       switch (ans)
        {
            case '1':            
                printf("%li + %li = %li\n", num1, num2, num1 + num2);
                break;
            case '2':
                printf("%li - %li = %li\n", num1, num2, num1 - num2);
                break;
            case '3':
                printf("%li * %li = %li\n", num1, num2, num1 * num2);
                break;
            case '4':
                if (num2 == 0)
                {
                    printf("Division by zero is not allowed.\n");
                }
                else
                {
                    printf("%li / %li = %f\n", num1, num2, (float)num1 / num2);
                }
                break;
        }
    }

    return 0;
}