#include <stdio.h>

int main(void)
{
  float a, b;
  char op;
  printf("\n:");
  scanf("%f %c %f", &a, &op, &b);

  switch(op)
  {
    case '+' : printf("%f", a+b); break;
    case '-' :printf("%f", a-b); break;
    case '*' :printf("%f", a *b); break;
    case '/' :printf("%f", a/b); break;
  }
return 0;
}