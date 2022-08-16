#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <windows.h>
	
using namespace std;

int main()
{
 system("COLOR F0"); /*funcion para cambiar el color del programa, el primero objeto en este caso "F" determina el fondo y el segundo objeto en este caso "0" determina el color de la letra */
	char palabra[60],rep[100],temporal[100]; /*Declaro variables de tipo CHAR*/
    char pal;
    int amplitud,i,j,inicial,acertado=0,temp=0,oportunidades=7; /*Nuevamente declaro variables de tipo INT*/
    int repetido=0,gano=0;
    /*Front*/
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"*                                                                                                         *"<<endl;
    cout<<"*                                    =================================                                    *"<<endl;
	cout<<"*                                    ===========EL AHORCADO===========                                    *"<<endl;
    cout<<"*                                    =================================                                    *"<<endl;
	cout<<"*                                                                                                         *"<<endl;
    cout<<"*                                               _____                                                     *"<<endl;
    cout<<"*                                               |   |                                                     *"<<endl;
    cout<<"*                                               |   o                                                     *"<<endl;
    cout<<"*                                               |  /|\\                                                    *"<<endl;
    cout<<"*                                               |  / \\                                                    *"<<endl;
    cout<<"*                                              _________                                                  *"<<endl;
    cout<<"*                                                                                                         *"<<endl;
    cout<<"***********************************************************************************************************"<<endl;
    /*Le pedimos al usuario que introduzca una palabra y con el "gets" la almacenamos en "Palabra"*/
    
	cout<<"\nIntroduzca la palabra a adivinar \n(Recuerda que tu contrincante podra ingresar la palabra al reves) -> "<<endl;  gets(palabra);
    
		system("cls"); /*Utilizamos el system cls para clerear la consola y tener una buena estetica*/
    amplitud = 0;
    inicial = 0;
    j = 0;
    rep[0] = ' ';
    rep[1] = '\0';
    	do
   		 {
        system("cls"); /*Utilizamos el system cls para clerear la consola y tener una buena estetica*/
        /*Inicio de juego*/
		temp=0;
        if(inicial == 0)
        {
        /*Pone espacios en los caracteres con espacios y oculta los caracteres q todavia no se han descubierto*/
		    for(i=0;i<strlen(palabra);i++)
            {
                if(palabra[i] == ' ')
                {
                    temporal[i] = ' ';
                    amplitud++;
                }
                else
                {
                    temporal[i] = '_';
                    amplitud++;
                }
            }	
        }
	inicial = 1;
    temporal[amplitud] = '\0';
    /*Comprueba si el caracter es repetido*/
	    for(i=0;i<strlen(rep);i++)
        {
            if(rep[i] == pal)
            {
                repetido = 1;
                break;
            }
            
		else
           {
               repetido = 0;
           }
        }
        /*Si el caracter no es repetido ejecuta el siguiente bloque*/
		if(repetido == 0)
        {
            for(i=0;i<strlen(palabra);i++)
            {
                if(palabra[i] == pal )
                {
                    temporal[i] = pal;
    int letra_repetida_found = 0; /*Declaro variable de tipo INT*/
                    for(int i = 0;i<strlen(temporal); i++){
                    	if(temporal[i] == palabra[i]) letra_repetida_found = 1;
				}
				if(letra_repetida_found == 0)acertado++;	
                    temp=1;}
					}
					
        			if(temp == 0){
                		oportunidades = oportunidades - 1;}
        }
        /*Error de caracter repetido*/
		else{
           /* printf("  Ya se ha introducido este caracter");*/
            printf("\n\n");
            oportunidades = oportunidades - 1;
        }
        
	printf("\n");
        /*Mostrar caracteres separandolos por espacios*/
		for(i=0;i<strlen(temporal);i++){
            printf(" %c ",temporal[i]);
        }
        
    printf("\n");
        /*Comprueba si el usuario gano*/
		if(strcmp(palabra,temporal) == 0){
            gano = 1;
            break;
        }
        /*Front de resultados*/
    /*printf("\n  Letras Acertadas -> %d",acertado);*/
    printf("\n  Oportunidades Restantes -> %d",oportunidades);
    printf("\n");
    rep[j] = pal;
    j++;
    
	    if (oportunidades==0){
           break;
        }
    /*Introduccion de letra para almacenar en PAL */
	printf("  Introduzca una letra ->");
        scanf("\n%c",&pal);
    }
    while(oportunidades != 0);
   
   /*Anuncio de victoria*/
    if(gano){
        cout<<"  Felicitaciones, ganaste."<<endl;
    }
    /*Anuncio de perdida*/
	else{
		system("cls");
    	
		
		cout<<" \n PERDISTE! - LA PALABRA ERA "<<palabra<< "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n\n \n \n \n \n\n \n \n "<<endl;
    

	}
	
	
    /*Finalizacion del programa*/
system("PAUSE");
return 0;
}
