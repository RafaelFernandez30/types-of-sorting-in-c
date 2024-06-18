#include <stdio.h>
#include <stdlib.h>

//CÓDIGO QUICKSORT

void quick_sort(int[], int, int);

int main(){
    
int numeros[50], total_count, contador;

printf("=-=-=-=QUICK_SORT=-=-=-=\n");    
printf("\nQuantos numeros deseja inserir? ");
scanf("%d", &total_count);
    
printf("Por favor digite %d de inteiros que devem ser ordenados.\n", total_count);

//pegar a quantidade de numeros e guardar nas posições
    for (contador = 0; contador < total_count; contador++) {
        scanf("%d", &numeros[contador]);
    }
    
quick_sort(numeros, 0, total_count - 1);
printf("Numeros em ordem crescente:\n");
    for (contador = 0; contador < total_count; contador++){
        printf("%d\n", numeros[contador]);
    }
    
printf("\n");
    
return 0;
}

void quick_sort(int numeros[], int inicio, int fim){
    int pivo, esquerda, direita, aux;
    
    //comparações
if(inicio < fim){
        pivo = inicio; //o numero que vai ser verificado
        esquerda = inicio;
        direita = fim;
        
    while (esquerda < direita){
        
        //percore o valor pela direita
        while (numeros[esquerda] <= numeros[pivo] && esquerda <= fim){
                esquerda++; //enquanto o vetor da esquerda for igual ou meno que o pivo, avança UM
    }
         //percorre o valor da direita   
     while (numeros[direita] > numeros[pivo] && direita >= inicio){
                direita--;//enquanto o vetor da direita for maior que o pivo, recua UM
        }
            
        // se esquerda for menor que direita, fazer a troca dos numeros
    if (esquerda < direita){
                aux = numeros[esquerda];
                numeros[esquerda] = numeros[direita];
                numeros[direita] = aux;
        }
    }
    
    //os numeros menores vão para esquerda e os maiores para direita, assim fazendo as comparações
    aux = numeros[direita];
    numeros[direita] = numeros[pivo];
    numeros[pivo] = aux;
    quick_sort(numeros, inicio, direita - 1);
    quick_sort(numeros, direita + 1, fim);
        
    }
}