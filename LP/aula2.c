/*#include<stdio.h>

main(){
int n;
printf("informe um numero: ");
scanf("%d", &n);
if (n%3==0 && n%5==0) printf("\n %d e divisivel por 3 e 5", n);
else printf("\n %d nao eh divisivel por 3 e 5", n);
return 0;
}*/

#include<stdio.h>

main(){
int a, b, c;
printf("Informe os lados do triangulo: ");
scanf("%d %d %d", &a, &b, &c);

if (a < b + c && b < a + c && c < a + b)
{
    if (a == b && a == c) printf("\nO triangulo eh equilatero");
    if ((a == b && a != c) || (a == c && a != b) || (c == b && c != a )) printf("\nO triangulo eh isosceles");
    if (a != b && a != c && c != b) printf("O triangulo eh escaleno");
}
else printf("Nao forma um triangulo");
return 0;
}