//Calcul de l'arccosh

#include<stdio.h>
#include<math.h>

int main()
{
  double x; //variable x amb precisió doble que demanarem a l'usuari, farem cosh(x) i la substituirem a la funció arccosh de l'enunciat i a la funció millorada
  double f; //variable amb precisió doble que serà la funció arccosh de l'enunciat
  double g; //variable amb precisió doble que serà la funció arccosh arreglada per disminuir l'error de cancel·lació
  
  printf("Calcularem l'error que es comet amb la formula donada a l'exercici de l'arccosh() i amb la formula millorada en comparacio amb el valor que hauria de donar.\n");
  printf("Quin valor hauria de donar?\n");
  scanf("%lf", &x);
  
  f=log(cosh(x)-sqrt(cosh(x)*cosh(x)-1)); //funció de l'enunciat. Torna un valor de precisió doble
  g= -log(cosh(x)+sqrt(cosh(x)*cosh(x)-1)); //funció millorada. Torna un valor de precisió doble
  
  printf("El valor que dona la formula de l'exercici es %.16f\nEl valor que dona la formula arreglada es %.16f\n", f, g);
  
  return 0;
}