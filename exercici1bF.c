#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  float x; //Variable en precisió simple que serà el punt en què s'avaluï la funció
  float f; //Variable en precisió simple que serà la funció f(x) de l'enunciat
  float g; //Variable en precisió simple g que serà la funció f(x) modificada per a corregir l'error de cancel·lació
  int n; //Variable entera auxiliar per poder escollir quina funció avaluar
  
  printf("A quina x vols avaluar la funcio?\n");
  scanf("%f",&x);
  
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
		f=(1-(cos(x)*cos(x)*cos(x)))/(x*x); //Avaluem f(x) per l'x escollida. Retorna un valor tipus float
		printf("La funcio de l'enunciat avaluada a x=%f es: %f",x,f);
	}
	else
	{
		g=((sin(x)*sin(x))/(x*x))*((1+cos(x)+cos(x)*cos(x))/(1+cos(x))); //Avaluem g(x) per l'x escollida. Retorna un valor de tipus float
		printf("La funcio de l'enunciat avaluada a x=%f es: %f",x,g);
	}
  }
 return 0;
}