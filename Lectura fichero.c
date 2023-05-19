#include <stdio.h>
#define N 200


int main (){
	char aux[N];
	
	FILE *f;
	
	f = fopen("Parametros PH.txt", "r");
	
	if (f == NULL) {
		printf("El archivo no se ha podido abrir");
		exit(1);
	}
	
	while (!feof(f)) {
		fgets(aux, N, f);
		printf("%s", aux);
	}
	
	fclose(f);
	
	return 0;
}
