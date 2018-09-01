#include <stdio.h>

int main(){
	int A[3][3];
	int B[3][3];
	int filas, columnas;
	
	//Llenar la matriz
	for(filas=0;filas<3;filas++){
		for(columnas=0;columnas<3;columnas++){
		printf("Ingrese un valor: ");
		scanf("%d", &A[filas][columnas]);
		
		}
	
	}
	for(filas=0; filas<3; filas++){
		printf("\n");
		for(columnas=0; columnas<3; columnas++){
			printf("%d", A[filas][columnas]);
			
			}
		}

	//cambiar a matriz B
	for(filas=0; filas<3; filas++){
			for(columnas=0; columnas<3; columnas++){
				B[columnas][filas]=A[filas][columnas];
				}
			}
	//mostrar matriz B
	
	printf("Matriz B\n");
		for(filas=0; filas<3; filas++){
			printf("\n");
				for(columnas=0; columnas<3; columnas++){
					printf("%d\t",  B[columnas][filas]);
					}
			
			}
			return 0;
		}


