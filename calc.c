#include <stdio.h>

void main () {
  // variable for string and integer
  char opera, repeat;
  int a, b;

  // Input first number
  printf("Enter first number: ");
  scanf(" %d", &a);

  // Input second number
  printf("Enter second number: ");
  scanf(" %d", &b);

  // Input operator
  printf("\n\nEnter the operator to use\n");
  printf("+, -, *, / : ");
  scanf(" %c", &opera);


  // Show the operator we just input
  printf("You entered this operator: %c\n ", opera);

  // Simple conditional algorithm with switch
  switch (opera) {
    case '+':
    printf("\nResult: %d", a + b);
    break;

    case '-':
    printf("Result: %d", a - b);
    break;

    case '*':
    printf("\nResult: %d", a * b);
    break;

    case '/':
    printf("\nResult: %d", a / b);
    break;

    default:
    printf("\n\nWrong operator, try again!\n");
    cuk();
    break;
  }

