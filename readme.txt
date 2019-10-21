Exercici 1:
Els programes en C a utilitzar són els que comencen pel nom de "exercici1".
En primer lloc, per compilar el programa que ens avalua les funcions utilitzant precisió doble, utilitzem la instrucció següent:
gcc -Wall -o exercici1bD exercici1bD.c -lm
A continuació, escrivim: 
./exercici1bD
Ara hem d'introduir quin valor de x volem avaluar, si posem la de l'enunciat, hem d'escriure
0.000011
A continuació, podem escollir si avaluar-la en la funció donada a l'enunciat del problema o a la fórmula millorada de l'apartat (c), escrivint 1 o 2 respectivament.

En segon lloc, per compilar el programa que ens avalua les funcions utilitzant precisió simple, utilitzem la instrucció següent:
gcc -Wall -o exercici1bF exercici1bF.c -lm
A continuació, escrivim: 
./exercici1bF
Ara hem d'introduir quin valor de x volem avaluar, si posem la de l'enunciat, hem d'escriure
0.000011
A continuació, podem escollir si avaluar-la en la funció donada a l'enunciat del problema o a la fórmula millorada de l'apartat (c), escrivint 1 o 2 respectivament.

----------------------------------------------------------------------------------------------------------------------------------------
Exercici 2: 
El programa en C a utilitzar és el que té el nom de Exercici2.c
Per compilar, utilitzem la instrucció següent:
gcc -Wall -o Exercici2 Exercici2.c -lm
A continuació, escrivim
./exercici2
Ara s'hi ha d'introduir el valor de x del que es farà cosh(x) per després aplicar les fórmules de l'arccosinus. El programa retorna dos valors que si no es cometés cap error, haurien de ser ambdós el mateix que s'ha introduït. El primer valor correspon a l'obtingut emprant la fórmula donada a l'enunciat del problema; el segon, a l'obtingut mitjançant la fórmula trobada a l'apartat (b) per tal d'evitar que es cometi l'error de cancel·lació de la primera fórmula.

----------------------------------------------------------------------------------------------------------------------------------------
Exercici 3:
Els programes que utilitzarem comencen tots per "exercici3"

Apartat b:
    Com en aquest apartat volem la variança dels valors 10000, 10001 i 10002, primer en precisió simple i amb 1 bucle, compilem:
gcc -Wall -o exercici3a1F exercici3a1F.c -lm
Ara:
./exercici3a1F
Ens demanarà de quants valors volem calcular la variança, com hem vist és de 3 valors, per tant: 3
Com que les volem introduir manualment: 1
I ara ens demana un per un els valors, per tant: 10000
Posteriorment: 10001
i per últim: 10002
    Ara ho farem amb precisió doble i també un bucle:
gcc -Wall -o exercici3a1D exercici3a1D.c -lm
Ara:
./exercici3a1D
Ens demanarà de quants valors volem calcular la variança, com hem vist és de 3 valors, per tant: 3
Com que les volem introduir manualment: 1
I ara ens demana un per un els valors, per tant: 10000
Posteriorment: 10001
i per últim: 10002
    Ara ho fem en precisió simple però amb dos bucles:
gcc -Wall -o exercici3a2F exercici3a2F.c -lm
Ara:
./exercici3a2F
Ens demanarà de quants valors volem calcular la variança, com hem vist és de 3 valors, per tant: 3
Com que les volem introduir manualment: 1
I ara ens demana un per un els valors, per tant: 10000
Posteriorment: 10001
i per últim: 10002
    I per últim en precisió doble i amb 2 bucles:
gcc -Wall -o exercici3a2D exercici3a2D.c -lm
Ara:
./exercici3a2D
Ens demanarà de quants valors volem calcular la variança, com hem vist és de 3 valors, per tant: 3
Com que les volem introduir manualment: 1
I ara ens demana un per un els valors, per tant: 10000
Posteriorment: 10001
i per últim: 10002

Apartat c:
    Ara ja tenim compilats tots els programes, per tant només haurem d'executar-los les diferents vegades que els utilitzem.
Volem primer calcular la variança de 100 valors, amb 1 bucle i precisió simple:
./exercici3a1F
Ens demanarà de quants valors volem calcular la variança, com hem dit seran 100, per tant: 100
Com que no les volem introduir manualment: 2
    Amb 1 bucle i precisió doble:
./exercici3a1D
Ens demanarà de quants valors volem calcular la variança, com hem dit seran 100, per tant: 100
Com que no les volem introduir manualment: 2
    Amb 2 bucles i precisió simple:
./exercici3a2F
Ens demanarà de quants valors volem calcular la variança, com hem dit seran 100, per tant: 100
Com que no les volem introduir manualment: 2
    I amb 2 bucles i precisió doble:
./exercici3a2D
Ens demanarà de quants valors volem calcular la variança, com hem dit seran 100, per tant: 100
Com que no les volem introduir manualment: 2
    
	Repetirem el mateix procediment d'aquest apartat c, per calcular la variança de 1000 i 10000 valors, però substituint on hem posat 100, per 1000 o 10000 segons corresponga.

----------------------------------------------------------------------------------------------------------------------------------------
Exercici 4:
Els programes en C a utilitzar són els que comencen per exercici4
Apartat a:
	Per calcular la suma dels termes de la sèrie en ordre creixent en precisió simple, emprem el programa exercici4aF.c
Per compilar, utilitzem la instrucció següent:
gcc -Wall -o exercici4aF exercici4aF.c -lm
A continuació, escrivim
./exercici4aF
Ara s'hi ha d'introduir el terme fins el qual volem fer la suma de la sèrie que ens dóna l'enunciat: 4096. Se sumarà de 1 fins a aquest nombre.
	Per calcular la suma dels termes de la sèrie en ordre creixent en doble precisió, emprem el programa exercici4aD.c
Per compilar, utilitzem la instrucció següent:
gcc -Wall -o exercici4aD exercici4aD.c -lm
A continuació, escrivim
./exercici4aD
Ara s'hi ha d'introduir el terme fins el qual volem fer la suma de la sèrie que ens dóna l'enunciat: 4096.

Apartat b:
	Per calcular la suma dels termes de la sèrie en ordre decreixent en precisió simple, emprem el programa exercici4bF.c
Per compilar, utilitzem la instrucció següent:
gcc -Wall -o exercici4bF exercici4bF.c -lm
A continuació, escrivim
./exercici4bF
Ara s'hi ha d'introduir el terme des del qual volem fer la suma de la sèrie en ordre decreixent (es farà des d'aquest nombre que donem fins a 1). Si posem el que ens dóna l'enunciat, hem d'escriure: 4096.
	Per calcular la suma dels termes de la sèrie en ordre decreixent en doble precisió, emprem el programa exercici4bD.c
Per compilar, utilitzem la instrucció següent:
gcc -Wall -o exercici4bD exercici4bD.c -lm
A continuació, escrivim
./exercici4bD
Ara s'hi ha d'introduir el terme des del qual volem fer la suma de la sèrie en ordre decreixent (es farà des d'aquest nombre que donem fins a 1). Si posem el que ens dóna l'enunciat, hem d'escriure: 4096.

Apartat d:
    Ara calcularem la suma dels 4096 primers termes amb diferents programes i diferent precisió.
Per calcular la suma en precisió simple, ordre creixent, i sumant independentment els termes parells i els senars i posteriorment restant els dos resultats, emprem el programa exercici4d1F.c 
Compilarem escrivint
gcc -Wall -o exercici4d1F exercici4d1F.c -lm
A continuació, escrivim:
./exercici4d1F
I ara, com volem sumar els primers 4096 termes, haurem d'escriure: 4096
    Per fer el mateix amb precisió doble, utilitzem exercici4d1D.c
Compilem
gcc -Wall -o exercici4d1D exercici4d1D.c -lm
Posteriorment escrivim
./exercici4d1D
I escriurem: 4096
    Per calcular la suma amb el mateix mètode però en ordre decreixent i precisió simple, utilitzem exercici4d2F.c
Compilem
gcc -Wall -o exercici4d2F exercici4d2F.c -lm
I escrivim
./exercici4d2F
I: 4096
    Per fer el mateix amb precisió doble utilitzem el programa exercici4d2D.c que compilarem:
gcc -Wall -o exercici4d2D exercici4d2D.c -lm
I: ./exercici4d2D
Com que volem els primers 4096 termes: 4096
    Ara volem sumar tots els termes com si foren positius, i restar-ne dos cops els parells (que són negatius).
    Per fer-ho en ordre decreixent i precisió simple utilitzem el programa exercici4d3F.c, que compilem:
gcc -Wall -o exercici4d3F exercici4d3F.calcular
I escrivim:
./exercici4d3F
Volem els 4096 primers termes, per tant: 4096
    Per fer-ho en precisió doble (també ordre decreixent), utilitzem exercici4d3D.c, que compilarem
gcc -Wall -o exercici4d3D exercici4d3D.c -lm
Escriurem
./exercici4d3D
I
4096
	Per seguir el mateix procediment, però en ordre creixent:
    En precisió simple, utilitzarem el programa exercici4d4F.c
Compilem
gcc -Wall -o exercici4d4F exercici4d4F.c -lm
Escrivim
./exercici4d4F
I: 4096
    En precisió doble, utilitzem el programa exercici4d4D.c
Compilem
gcc -Wall -o exercici4d4D exercici4d4D.c -lm
Escrivim: ./exercici4d4D
I: 4096	 

----------------------------------------------------------------------------------------------------------------------------------------
Exercici 5:
Els programes a utilitzar són exercici5F.c per obtenir resultats en precisió simple i exercici5D.c per obtenir resultats en precisió doble.
Per compilar-los utilitzarem les comandes:
gcc -Wall -o exercici5F exercici5F.c -lm
i
gcc -Wall -o exercici5D exercici5D.c -lm

Apartat b:
    Escriurem:
./exercici5F
i a continuació les mesures d'a, b i c pertinents. Per exemple, escriurem:
11
6.001
5.001
A continuació, com que volem els resultats segons la fórmula de l'enunciat, escrivim: 1
Així tindrem els resultats en precisió simple
Després escriurem:
./exercici5D
i a continuació les mesures d'a, b i c pertinents. Per exemple, escriurem:
11
6.001
5.001
A continuació, com que volem els resultats segons la fórmula de l'enunciat, escrivim: 1
Tindrem els resultats en precisió doble.
Repetim tot el procés d'aquest apartat b per altres diferents mesures, amb diferents a, b i c, que seran els que hi ha a les taules de l'informe.

Apartat c:
    Escriurem:
./exercici5F
i a continuació les mesures d'a, b i c pertinents. Per exemple, escriurem:
11
6.001
5.001
A continuació, com que volem els resultats segons la fórmula més correcta, escrivim: 2
Així tindrem els resultats en precisió simple
Després escriurem:
./exercici5D
i a continuació les mesures d'a, b i c pertinents. Per exemple, escriurem:
11
6.001
5.001
A continuació, com que volem els resultats segons la fórmula més correcta, escrivim: 2
Tindrem els resultats en precisió doble.
Repetim tot el procés d'aquest apartat c per altres diferents mesures, amb diferents a, b i c, que seran els que hi ha a les taules de l'informe.
	