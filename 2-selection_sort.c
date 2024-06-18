#include <stdio.h>
#include <conio.h>

//SELECTIONSORT CODE

void main(){
	
int total_count, contador1, contador2, menor, aux;
int numeros[20];

printf("=-=-=-=SELECTION_SORT=-=-=-=\n");
printf("\nHow many numbers do you want to enter?\n");
scanf("%d", &total_count);
	
printf("Please enter %d of integers that must be sorted.\n", total_count);
	
for (contador1 = 0; contador1 < total_count; contador1++){
	scanf("%d", &numeros[contador1]);
}
	//goes through the entire list until it finds the smallest item among them
for (contador1 = 0; contador1 < total_count - 1; contador1++){
    menor = contador1;
	 
//if the item is smaller than the list item, it swaps position. This happens with EVERY item on the listfor(contador2 = contador1 + 1; contador2 < total_count; contador2++){
    if(numeros[menor] > numeros[contador2])
        menor = contador2;
}	        

    //take the smallest item and compare it with the others
	if (menor != contador1){//ensure that you do not trade the same position
        aux = numeros[contador1];
	    numeros[contador1] = numeros[menor];
	    numeros[menor] = aux;
    }
}
    //display the ordered elements
printf("\nNumbers in ascending order:\n");
    for (contador1 = 0; contador1 < total_count; contador1++){
        printf("%d\n", numeros[contador1]);
    }
    
getch();
}
