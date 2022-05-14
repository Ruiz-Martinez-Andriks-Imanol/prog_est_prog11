/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa <br>
Materia: Programación Estructrada <br>
Ciclo: 01/2022</p>
<br>
<p>Este es un programa de casos usando switch con operadores lógicos en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
    *Variables enteras
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las libreria.
    -Switch
    -Comentarios para la documentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración
	int mes;
	//Proceso
	printf("Introduce el numero de mes: ");
	scanf("%d", &mes);
	switch(mes){ //Switch
		case 1: printf("Enero");
				break;
		case 2: printf("Febrero");
				break;
		case 3: printf("Marzo");
				break;
		case 4: printf("Abril");
				break;
		case 5: printf("Mayo");
				break;
		case 6: printf("Junio");
				break;
		case 7: printf("Julio");
				break;
		case 8: printf("Agosto");
				break;
		case 9: printf("Septiembre");
				break;
		case 10: printf("Octubre");
				break;
 		case 11: printf("Noviembre");
				break;
		case 12: printf("Diciembre");
				break;
		default: printf("Numero de mes invalido");		
	}
	return 0;
}
