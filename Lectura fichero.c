#include <stdio.h>
#include <string.h>
#define N 250


typedef struct {
	
} parametros;


void vacio();
void buscar();
void comparar();
void ordenar();
void estadistica();
void salir();


int main (){
	char aux[N];
	int op;
	char key;
	
	FILE *f;
	
	f = fopen("Parametros PH.txt", "r");
	
	if (f == NULL) {
		printf("El archivo no se ha podido abrir");
		exit(1);
	}
	
	/*while (!feof(f)) {
		fgets(aux, N, f);
		printf("%s", aux);
	}*/
	
	fclose(f);
	
	
	printf("                      //////////////////////////////////////////////////////////////////////////////\n");
	printf("                      //////////////////////////////////MENU DE INICIO//////////////////////////////\n");
	printf("                      /////////////////////////////////////////////////////////////////////////////\n\n\n");
	
	do {
		do {
			printf("Elige una opcion:\n");
			printf("(1) Buscar datos:\n");
			printf("(2) Comparar datos:\n");
			printf("(3) Ordenar datos:\n");
			printf("(4) Estadisticas:\n");
			scanf("%d", &op);
		} while (op < 1 || op > 4);
		
		switch(op) {
			case 1: buscar() ; break;
			case 2: comparar() ; break;
			case 3: ordenar() ; break;
			case 4: estadistica() ; break;
		}
		
		printf("Desea realizar otra operacion (S/N)\n");
		fflush(stdin);
		scanf("%c", &key);
		
	} while (key == 's' || key == 'S');
	
	return 0;
}


void buscar() {
	
}


void comparar() {
	
}


void ordenar() {
	
}


void estadistica() {
	
}
