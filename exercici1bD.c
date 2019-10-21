#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  double x; //Definim la variable x (tipus double) que serà el punt en què s'avaluï la funció
  double f; //Definim la variable f (tipus double) que serà la funció f(x) de l'enunciat
  double g; //Definim la variable g (tipus double) que serà la funció f(x) modificada a l'aparatat (c) per a corregir l'error de cancel·lació
  int n; //Variable entera auxiliar per poder escollir quina funció avaluar
  
  printf("A quina x vols avaluar la funcio?\n");
  scanf("%lf",&x);
  
  if (x==0)
  {
   printf("ERROR");
  }
  else
  {
	printf("Vols avaluar en la funcio donada per l'enunciat o en la que redueix l'error a l'origen? Si vols la primera opcio, escriu 1, en cas contrari, 2.\n");
	scanf("%d",&n);
	if (n==1)
	{
		f=(1-(cos(x)*cos(x)*cos(x)))/(x*x); //Avaluem f(x) per l'x escollida. Retorna un valor tipus double
		printf("La funcio de l'enunciat avaluada a x=%.16f es: %.16f",x,f);
	}
	else
	{
		g=((sin(x)*sin(x))/(x*x))*((1+cos(x)+cos(x)*cos(x))/(1+cos(x))); //Avaluem g(x) per l'x escollida. Retorna un valor de tipus double
		printf("La funcio de l'enunciat avaluada a x=%.16f es: %.16f",x,g);
	}
  }
 return 0;
}