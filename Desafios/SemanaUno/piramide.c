int piramide(){
    int colum,fila,espacio,tama;
    //Guardamos el dato del usuario en tama
    printf("¿De que tamanio quieres que sea la piramide?\n");
    scanf("%i", &tama);

    for(fila=0;fila<tama;fila++){
        
        for(espacio=tama;espacio>=fila;espacio--) //Ciclo que marcara los espacios para darle forma
        printf(" ");
        
        for(colum=0;colum<=fila*2;colum++) //Ciclo que imprimira el doble del tama para darle forma piramidal
        printf("*");
        
                                        
    printf("\n");
                               }//Se cierra el ciclo anidado
}//Se termina la funcion
