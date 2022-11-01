#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

main () {
 float cp=0, ca=0, cc=0, peso=0, altura=0;
 int ci=0, i=0, idade=0;
 
 for (i=1; i<=3; i++) {
 
 printf ("Qual a sua idade? ");
 scanf ("%d", &idade); 
 system("cls");
 
 printf ("Qual o seu peso? ");
 scanf ("%f", &peso);
 system("cls");
 
 printf ("Qual a sua altura? ");
 scanf ("%f", &altura);
 system("cls");

 if (idade>50){
   	ci = ci +1;
 }
 
 if (idade>=10 && idade<=20){
 	cp = cp +1;
 	ca = ca + altura;
 } 
 if (peso<40){
 	cc = cc +1;
 } 
}

printf ("O valor de pessoas acima de 50 anos: %d", ci);
printf ("\n");
printf ("O valor da media da altura das pessoas entre 10 e 20 anos: %f", ca/cp);
printf ("\n");
printf ("O valor da porcentagem de pessoas abaixo de 40kg: %f", (cc/3)*100);

	
return 0;
}
