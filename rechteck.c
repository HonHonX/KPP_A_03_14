#include<stdio.h>

int main () {

	/*
	* Zeichnet ein Rechteck gefüllt mit 10x10 Sternchen
	*/

	printf("\n ************************* ");
	printf("\n *   ^,,,,^   *          * ");
	printf("\n *  ( o x o)  * Rechteck * ");
	printf("\n *  ( 7   7)  *          * ");
	printf("\n *   ´´´´´´   *  ©S.Buch * ");
	printf("\n ************************* \n\n");
	
	//
	int i,j;
	
	//Schleife für Zeilen
	for (i=0; i<10; i++) {
		for(j=0; j<10; j++) {
			printf("*");
		}
		printf("\n");
	}

	//Ende
	printf("\n\n");
	return 0;
}
