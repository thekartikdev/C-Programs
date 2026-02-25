// Simple Calculator in C
#include <stdio.h>

float a,b;

void input(); 
    float calc(float a, float b);

int main()
{
    float result;

    input();
    result = calc(a,b);
    printf("Result is: %f", result);
  
 return 0;
}

void input() //Taking input from user
{
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
}

float calc(float a, float b) //Performing the calculation based on user choice
{
    char c;
printf("Choose the Arithemmatic Operation: (A/M/S/D)\n");
scanf(" %c",&c);

switch (c)
{
    case 'A':
    case 'a' :

    return a + b;
    break;

    case 'M' :
    case 'm' :

    return a * b; 
    break;

    case 'S' :
    case 's' :

    return a - b;
    break;

    case 'D' :
    case 'd' :

    if (b == 0)
    {
        printf("Division by zero is not allowed\n");
        return 0;
    }
    return a / b;
    break;

default:

  printf("Invalid Operation\n");
  return 0;
}

}
