int arbol(){
	int colum,fila,espacio,tama;
    
    printf("¿De que tamanio quieres que sea el arbol?\n");
    scanf("%i", &tama);

    for(fila=0;fila<tama;fila++){
        
        for(espacio=tama;espacio>=fila;espacio--)
        printf(" ");
        
        for(colum=0;colum<=fila*2;colum++)
        printf("*");
        
                                        
    printf("\n");
                               }
    //Ciclo que imprime el tronco del arbol                           
	for(fila=0;fila<=3;fila++){
        for(espacio=0;espacio<=tama;espacio++)
           printf(" "); //Imprime espacios para centrar el tronco
        printf("|");
        printf("\n");
    }
           }
