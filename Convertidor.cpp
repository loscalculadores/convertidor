#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


int main(){
<<<<<<< HEAD
	system("color 3f");
	int n,aux,dec=0,dig,c=0,opc,bin=0;
	printf("\n\n\tCONVERTIDOR DE N\243MEROS\n ");
	printf("\n\n\tSeleccione el Tipo de numero que Deseas introducir: ");
	printf("\n\t1.Decimal ");
	printf("\n\t2.Binario ");
	printf("\n\t3.Octal ");
	printf("\n\t4.Hexadecimal\n ");
	scanf("%d",&opc);
	
	switch(opc){
		case 1: 
	
	    	//Caso 1 trabajamos con los decimales!!
	    	//Para Convertir de Decimal a Binario
		 printf("\n\n\tUsted a Seleccionado un Numero Decimal ");
	     printf("\n\nIngrese el Numero:\t");
	     scanf("%d",&n);
       	 c=1;
	    aux=n;
	    while(aux>=1){
		dig=aux%2;
		aux=aux/2;
		bin=bin+dig*c;
		c=c*10;	
	}
	printf("\n\n%d en Binario es %d",n,bin);
	//Para Convertir de Decimal a Octal y Hexadecimal
    int x;
	x=n;
	printf("\n\n%d en Octal es:  %o",x,x);
	printf("\n\n%d en Hexadecimal es: %X",x,x);
		break;
	
=======
	system("color a1");
	printf("\n\nConvertidor");
	printf("El codigo");
>>>>>>> 5cca0236ca15af8442a7e70a9d64751367b714f3
}
	
