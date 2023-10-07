#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
int firstNumber, secondNumber, thirdNumber;

for (firstNumber = 0; firstNumber < 9; firstNumber++)
{

secondNumber = firstNumber + 1;
while (secondNumber < 10)
{
for (thirdNumber = secondNumber + 1; thirdNumber < 10; thirdNumber++)
{
putchar((firstNumber % 10) + '0');
putchar((secondNumber % 10) + '0');
putchar((thirdNumber % 10) + '0');
if (firstNumber == 7 && secondNumber == 8 && thirdNumber == 9)
{
break;
}
putchar(',');
putchar(' ');

}
}
putchar('\n');

return (0);
}
}