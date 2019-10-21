#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  double a,b,c,A; //'a,b,c' seran les mesures dels costats del triangle i són de precisió doble. A més a més a serà el major i c el més petit. 'A' serà l'àrea del triangle, també en precisió doble.
  printf("Introdueix els valors d'a, b i c\n"); //Demana a l'usuari les mesures dels costats.
  scanf("%lf %lf %lf",&a ,&b ,&c);
  int resposta; //Considerem una variable 'resposta' que servirà per poder assignar a cada fórmula possible una resposta.
  printf("Vols utilitzar la formula de l'enunciat (1) o la mes correcta (2)?\n"); //Demana a l'usuari quina fórmula vol utilitzar.
  scanf("%d",&resposta);
  
  if(resposta==1) //Si volem utilitzar la fórmula de l'enunciat seguirà aquest procediment.
  {
    double p; //La variable 'p', amb precisió doble és el semiperímetre, que calculem a continuació:
    p=(a+b+c)/2;
    A=sqrt(p*(p-a)*(p-b)*(p-c)); //Aplicant la fórmula de l'enunciat amb els valors d'a, b i c introduïts i el de p calculat, calculem l'àrea A, que ens retornarà un valor amb precisió doble ja que hem declarat a l'inici 'A' com a variable double.
    printf("L'area del triangle es:%.16f",A); //Ens imprimeix el resultat d'A amb 16 xifres decimals.
    }
   else if (resposta==2) //Si volem utilitzar la fórmula més correcta seguirà aquest procediment.
   {
   A=1./4*sqrt((a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c))); //Aplicant la fórmula més correcta utilitzant els valors d'a, b i c introduïts, calculem A, i ens retornarà un valor amb precisió doble.
   printf("L'area del triangle es: %.16f",A); //Ens imprimeix el resultat d'A amb 16 xifres decimals.
   }
  else { printf("Error"); return 0; } //Si la resposta no és cap de les considerades ens imprimirà 'Error' i s'aturarà.
  
  return 0;
 }