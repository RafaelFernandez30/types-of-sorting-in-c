#include <stdio.h> 
#include <stdlib.h>
  
//CÓDIGO MERGESORT  
  
void merge_sort(int numeros[], int couter1, int counter2); 
void executar_merge(int numeros[], int counter11, int counter12, int counter22, int counter21); 
  
int main(){ 
    int numeros[100], total_count, contador1; 
    
printf("=-=-=-=,MERGE_SORT=-=-=-=\n");
printf("Quantos numeros deseja inserir? \n"); 
scanf("%d", &total_count); 
    
printf("Por favor digite %d de inteiros que devem ser ordenados.\n", total_count); 
    
    //pegar a quantidade de numeros e guardar nas posições
    for(contador1 = 0; contador1 < total_count; contador1++) 
        scanf("%d", &numeros[contador1]); 
        
    //exibir os elementos ordenados
    merge_sort(numeros, 0, total_count - 1); 
    printf("\nNumeros em ordem crescente:\n"); 
    for(contador1 = 0; contador1 < total_count; contador1++) 
        printf("%d\n", numeros[contador1]); 
  
    return 0; 
} 
  
void merge_sort(int numeros[], int contador1, int contador2){ //montar a operação
    int mid;
    
    /*divide os numeros em pequenas partes para fazer a comparação. assim que é comparada,
    realiza uma ação, a troca.*/
    if(contador1 < contador2){ 
        mid = (contador1 + contador2) / 2; //divide os dados para fazer organizações pequenas para se tornar mais rápida  
        merge_sort(numeros, contador1, mid); 
        merge_sort(numeros, mid + 1, contador2); 
        executar_merge(numeros, contador1, mid, mid + 1, contador2); 
    } 
} 

void executar_merge(int numeros[], int contador11, int contador12, int contador22, int contador21){ //executa a operação
    int temp_num[50]; 
    int c1, c2, c3; 
    c1 = contador11; //comparação dos numeros
    c2 = contador22; 
    c3 = 0; 
    
    //enquanto o numero for maior, ele vai comparando para achar o menor
    while(c1 <= contador12 && c2 <= contador21){ //comparação
        if(numeros[c1] < numeros[c2]) //se o primeiro numero for menor que o segundo, realiza a troca
            temp_num[c3++] = numeros[c1++]; 
        else 
            temp_num[c3++] = numeros[c2++]; //senão, mantem a posição
    } 
    
    //comparar com os demais numeros separados e mudar de posição
    //só terminará o while quando todos estiverem em suas posições

    while(c1 <= contador12) 
        temp_num[c3++] = numeros[c1++]; 
    while(c2 <= contador21) 
        temp_num[c3++] = numeros[c2++]; 
    for(c1 = contador11, c2 = 0; c1 <= contador21; c1++, c2++) 
        numeros[c1] = temp_num[c2]; 
}