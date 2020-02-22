#include <stdio.h>
#include <stdlib.h>
#include "piramide.h"
//Funcion main para manejar el menu de opciones

int main() {
	
	int menu;
	printf("Elije una opcion escribiendo el numero:\n");
	printf("1: Saludo\n");
	printf("2: Piramide \n");
	printf("3: Arbol simple \n");
	
	scanf("%i",&menu);
	//Usando el dato del usuario y un switch se crea un menu de opciones
	switch(menu){
		
	 case 1:
	 	saludo();
	 break;
	 
     case 2:
     	piramide();
     break;
     
     case 3:
        arbol();
     break;
     
	 default:
     	printf("Por favor seleccione algo del menu");

                }
                
	printf("\n");
	
	return 0;
}
