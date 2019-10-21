//Suma DECREIXENT float
#include<stdio.h>
#include<stdlib.h>

int main()
{
 float n; //Variable en precisió simple: és el nombre des del qual sumarem la sèrie en ordre decreixent de n fins a 1
 float s; //Variable en precisió simple: és el valor total de la suma.
 printf("Introdueix el numero de termes que vols sumar: \n");
 scanf("%f",&n);
 
 int i; //Variable entera auxiliar per fer el bucle for
 float k; //Variable en precisió simple: és el nombre que s'està sumant a la sèrie
 int signe1, signe2; //Variables enteres auxiliars que són el signe: si comencem la sèrie amb un nombre parell, aquest serà negatiu, i si és senar, positiu
 
 k=n+1; //Inicialitzem k a n+1; al nombre des del qual operarem +1, ja que dins el bucle li treurem -1 a cada iteració
 s=0; //Inicialitzem la suma a 0
 signe1=1;
 signe2=-1;
 unsigned int m; //Enter positiu auxiliar que utilitzarem per saber si el nombre n introduït és parell o senar
 m=n;
 //Separem en dos opcions: si el nombre inicial és parell, el primer terme de la sèrie serà negatiu i després anirà alternant. Si l'inicial és senar, el primer terme serà positiu i després anirà alternant
 
 //......................................................................................???
 if(m%2==0) //No estic segura de si està ben fet, potser per assegurar-nos li hauríem de preguntar a algú... Com no sabem si el nombre n serà parell o senar, no sabem si ha de portar un + o un -, per tant, caldrà fer un if. El problema és que com n és de tipus float, no sé com saber si és parell o senar. El que he fet és definir un m auxiliar (de tipus INT, perquè si no, (*) no va) de manera que faci m=n i ja pugui fer lo de if(m%2==0) (*). 
 //...........................................................................................
   {
     for(i=n;i>=1;i--)
	 {
		signe1=(-1)*signe1;
		k=k-1;
		s=s+signe1*(1./(k*k)); //Suma total, torna un valor en precisió simple
	 }
   }
  else
   { 
     for(i=n;i>=1;i--)
	 {
		signe2=(-1)*signe2;
		k=n-1;
		s=s+signe2*(1./(k*k)); //Suma total, torna un valor en precisió simple
	 }
   }
 
 printf("El resultat sumant decreixent es:%f\n",s);

 return 0;

}