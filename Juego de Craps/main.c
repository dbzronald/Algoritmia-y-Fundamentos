    #include <stdio.h>
    #include <stdlib.h>


    int main()
    {
    int dado1 = 0;
    int dado2 = 0;
    int tirar = 0;
    int punto = 0;
    int gana = 0;
    int pierde = 0;
    char letra;

    srand(time(NULL));
    printf("Bienvenido a craps presione ENTER para jugar\n\n");




    do{
    dado1 = (rand()%6)+1; //Crea los dados.
    dado2 = (rand()%6)+1;
    tirar = dado1 + dado2;

     char key2;
     int cont3=0;
        while(cont3==0)
    {
            key2=getch();
            if(key2==13)
        {
            cont3=1;
        }
    }
    printf("  ---     ---\n");
    printf(" | %d | + | %d | = %d Lanza dado [ENTER]\n",dado1,dado2,tirar); //Prinftea los dados y su suma.
    printf("  ---     ---\n");
    if(tirar==7 || tirar==11){ //Gana en el primer turno.
    gana++;
    printf("GANASTE!\n");
    }

    else if (tirar==2 || tirar==3 || tirar==12){// Pierde en el primer turno.
    pierde++;
    printf("PERDISTE!\n");
    }

    else if (tirar==4 || tirar==5 || tirar==6 || tirar==8 || tirar==9 || tirar==10)
    {
    punto=tirar;//Guardad el punto si no pierde o gana.

    do
    {

    dado1=(rand()%6)+1;//Tira los dados de nuevo.
    dado2=(rand()%6)+1;
    tirar=dado1+dado2;

    char key;
    int cont2=0;
    while(cont2==0)
    {
            key=getch();
            if(key==13)
            {
            cont2=1;
        }
    }

    printf("  ---     ---\n");
    printf(" | %d | + | %d | = %d Lanza dado [ENTER]\n",dado1,dado2,tirar); //Prinftea los dados y su suma.
    printf("  ---     ---\n");


    if(tirar==punto){//Gana si el jugador iguala su puntaje al tirar.
    gana++;
    printf("GANASTE!\n");
    }

    else if(tirar==7){//Pierde si tirar un 7.
    pierde++;
    printf("PERDISTE!\n");
    }

    }while(tirar!=punto && tirar!=7);//keep going until punto or 7 is tirared

    }
    printf("\nVictorias %d  Derrotas %d  Partidas %d\n",gana,pierde, gana+pierde);
    printf("\nDesea continuar S/N y ENTER dos veces para continuar\n");


        int cont=0;
        while(cont==0){
            cont=0;
            letra=getch();
            if(letra=='n')
            {
                return 0;
            }
            if(letra=='s')
            {
                cont=1;
            }
        }
    scanf("%c", &letra);
    }while(letra!='n');

    }


