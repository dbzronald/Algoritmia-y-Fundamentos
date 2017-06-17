#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 20

char presentacion();
void espera(int segundos);
void apuestagana(int dinero, int aposto);
void apuestapierde(int dinero, int aposto);

int main ()
{
 char c;
 int billete,apuesta;

 int n=0,m[DIM],i,premio,k=4;

srand(time(NULL));

printf ("Digite la cantidad que quiere depositar para jugar. (minimo 500)\n");
scanf("%d",&billete);

if(billete<500){
        while(billete<500){
    printf("La apuesta minima es de 500\n");
    printf("Digite de nuevo\n");
    scanf("%d",&billete);
        }
}

c=presentacion ();
printf ("Cuanto desea apostar?. (minimo 25)\n");
scanf("%d",&apuesta);
printf ("\n");
if(apuesta<25){
        while(apuesta<25){
    printf("La apuesta minima es de 25\n");
    printf("Digite de nuevo\n");
    scanf("%d",&apuesta);
        }

}

switch (c) {
 case 'A' :
 do {
 printf ("1 - Apostar a los pares \t 2 - Apostar a los impares\n");
 scanf ("%d",&n);}while(n!=1 && n!=2);
 break;

case 'B' :
 do {
 printf ("Dime el numero al que quieres apostar \n(Comprendido entre 1 y 36):\n");

scanf ("%d",&n);
 }
 while(n<=0 || n>36); break;
 }

system("cls");

printf ("\nUna vez hecha la apuesta, toca ver que numero sale en la ruleta :\n\n");

for(i=1;i<=100;i++) rand();  //descarta los 100 primeros numeros aleatorios
premio = rand() % 37;      //almacena el numero premiado

espera (k);  //simula la bola moviendose en la ruleta

system("cls");

printf ("\nUna vez hecha la apuesta, toca ver que numero sale en la ruleta :\n\n");

printf ("\t%d\n\n",premio);

if (premio==0) {
 printf ("Gano la banca!\n");
 system ("pause");
 return 0;}

switch ( c ) {
 case 'A' :
 if ((n==1 && premio%2 == 0) || (n==2 && premio%2 == 1)){
    printf ("Has ganado! \n");
    apuestagana(billete,apuesta);
 }

 else{
    printf ("Lo siento! Otra vez sera \n");
    apuestapierde(billete,apuesta);
 }
 break;

case 'B' :
 if (n==premio){
  printf ("Has ganado! \n");
  apuestagana(billete,apuesta);
 }
 else {
  printf ("Lo siento! Otra vez sera \n");
  apuestapierde(billete,apuesta);
 }
 break;

}
 system ("pause");
 return 0;
}

char presentacion()

{
 char c;
 int billete,apuesta;
do {

printf ("Bienvenido a la version casera de la ruleta francesa.\n\n");

printf ("Que tipo de apuesta quieres realizar?\n (Para elegir escribe la mayuscula correspondiente: )\n\n");

printf ("A - Pares o Impares \t  B - Pleno (un numero)\n");

scanf ("%c",&c);

system("cls");
 } while (c!='A' && c!='B');
 return c;
}
void apuestagana(int dinero, int aposto)
{

    dinero = (aposto*aposto);
    printf("\n Ganaste %d", dinero);
    printf("\n ");
    system("pause");

}
void apuestapierde(int dinero, int aposto)
{

    dinero = dinero - aposto;
    printf("\n Perdiste %d", aposto);
    printf("\n ");
    system("pause");

}

void espera(int segundos)
{

 int Seg1,Seg2;
 Seg1=clock()/CLOCKS_PER_SEC;
 Seg2=Seg1;
 while((Seg2-Seg1) < segundos){
 if(clock()%400<10){
 system("cls");
 printf ("\nVeamos que tanta suerte tienes :\n\n\t%d",rand() % 37);
 }
 Seg2=clock()/CLOCKS_PER_SEC;
 }
}

