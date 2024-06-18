#include <stdio.h> 
#include <stdlib.h>  

//CÓDIGO INSERTIONSORT
  
int main(){ 
    
    int contador1,contador2, total_count, temp_num, numeros[100]; 
    
printf("=-=-=-=,INSERTION_SORT=-=-=-=\n");
printf("Quantos numeros deseja inserir? \n"); 
scanf("%d", &total_count); 

printf("Por favor digite %d de inteiros que devem ser ordenados.\n", total_count);

    //pegar a quantidade de numeros e guardar nas posições
    for(contador1 = 0; contador1 < total_count; contador1++){ 
        scanf("%d", &numeros[contador1]); 
    } 
    
    //comparar o item atual com o intem a sua esquerda
    //se o total do contador for maior ou igual ao numero do item atual, ele troca de posição
    for(contador1 = 1; contador1 <= total_count - 1; contador1++){ 
        temp_num = numeros[contador1]; 
        contador2 = contador1 - 1;
        
        //enquanto o item da esquerda for maior, ele vai mudar a posição
        while((temp_num < numeros[contador2]) && (contador2 >= 0)){ //comparar os numeros
            numeros[contador2 + 1] = numeros[contador2]; //enquanto o item da esquerda for maior, ele vai mudar a posição
            contador2 = contador2 - 1; 
        } 
        numeros[contador2 + 1] = temp_num; 
    } 
    
    //exibir os elementos ordenados
    printf("\nNumeros em ordem crescente:\n"); 
    for(contador1 = 0; contador1 < total_count; contador1++){ 
        printf("%d\n", numeros[contador1]); 
    } 
    return 0; 
} 