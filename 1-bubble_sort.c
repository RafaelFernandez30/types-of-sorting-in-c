#include <stdio.h>
#include <stdlib.h>

//BUBBLESORT CODE

int main(){

 int numbers[20]; //positions number 
 int count1, aux, count2, total_count;


printf("=-=-=-=BUBBLE_SORT=-=-=-=\n");
printf("\nHow many numbers do you want to enter?\n");
scanf("%d", &total_count);
	
printf("Type %d int numbers to be sorted.\n", total_count);

// take the amount of numbers and store in positions
 for (count1 = 0; count1 < total_count; count1++){
 scanf("%d", &numbers[count1]); 
 }
 

//Bubblesorts Ordenation
 for (count2 = 1; count2 < total_count; count2++){ //take the first item with the last
   for (count1 = 0; count1 < total_count - 1; count1++){ //if the number is smaller than the next number
     if (numbers[count1] > numbers[count1 + 1]){//Compare the number with the next one to see if it is bigger
       //exchange numbers
	   aux = numbers[count1];
       numbers[count1] = numbers[count1 + 1];
       numbers[count1 + 1] = aux;
     }
   }
 }
 
//display the ordered elements
printf("\nNumbers in ascending order:\n");
    for (count1 = 0; count1 < total_count; count1++) {
        printf("%d\n", numbers[count1]);
}

printf("\n");

return 0;
}
