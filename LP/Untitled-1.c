/*#include<stdio.h>

main()
{
int a, b, c, d, media;
printf("Digite primeira nota: \t");
scanf("%d", &a);
printf("Digite segunda nota: \t");
scanf("%d", &b);
printf("Digite terceira nota: \t");
scanf("%d", &c);
printf("Digite quarta nota: \t");
scanf("%d", &d);
media = (a + b + c + d)/4;
printf("Sua media eh:\t%d\n", media);

if(media >= 7)
    printf("Parabens! Voce foi aprovado.");

if(media < 7)
    printf("Se fudeu!");

printf(" ;) ");
return 0;
}*/

/*#include<stdio.h>

main(){
int a, b;
printf("Entre com dois inteiros e lhe direi \n");
printf("o relacionamento que eles satisfazem: \t");
scanf("%d %d", &a, &b);
if (a == b)
    printf("%d eh igual a %d\n", a, b);
if (a != b)
    printf("%d eh diferente de %d\n", a, b);
if (a < b)
    printf("%d eh menor que %d\n", a, b);
if (a > b)
    printf("%d eh maior que %d\n", a, b);
if (a <= b)
    printf("%d eh menor ou igual a %d\n", a, b);
if (a >= b)
    printf("%d eh maior ou igual a %d\n", a, b);
return 0;
}*/


/*#include<stdio.h>

main(){
int a, b, c;
a = 0;
b = a * a;
c = a * a * a;
printf("numero\t quadrado\t cubo\n");
printf("%d\t %d\t\t %d\n", a, b, c);
a = 1;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 2;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 3;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 4;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 5;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 6;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 7;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 8;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 9;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
a = 10;
b = a * a;
c = a * a * a;
printf("%d\t %d\t\t %d\n", a, b, c);
return 0;

}*/

#include<stdio.h>

main(){
int numero, a, b, c, d, e;
printf("Digite um numero de cinco digitos: \n");
scanf("%d", &numero);
a = numero / 10000;
numero = numero % 10000;
b = numero / 1000;
numero = numero % 1000;
c = numero / 100;
numero = numero % 100;
d = numero / 10;
numero = numero % 10;
e = numero / 1;
printf("%d   %d   %d   %d   %d\n", a, b, c, d, e);
return 0;
}