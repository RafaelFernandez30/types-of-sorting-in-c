#include <stdio.h>
#include <conio.h>

//SELECTIONSORT CODE

void main(){
	
int total_count, count1, count2, smaller, aux;
int num[20];

printf("=-=-=-=SELECTION_SORT=-=-=-=\n");
printf("\nHow many numbers do you want to enter?\n");
scanf("%d", &total_count);
	
printf("Type %d int numbers to be sorted.\n", total_count);
	
for (count1 = 0; count1 < total_count; count1++){
	scanf("%d", &num[count1]);
}
	//Go through the entire list until you find the smallest item among them
for (count1 = 0; count1 < total_count - 1; count1++){
    smaller = count1;
	 
    //if the item is smaller than the list item, it switches position. This happens with EVERY item on the list
for(count2 = count1 + 1; count2 < total_count; count2++){
    if(num[smaller] > num[count2])
        smaller = count2;
}	        

    //take the smallest item and compare it with the others
	if (smaller != count1){//ensure that you do not trade the same position
        aux = num[count1];
	    num[count1] = num[smaller];
	    num[smaller] = aux;
    }
}
    //display the ordered elements
printf("\nNumbers in ascending order:\n");
    for (count1 = 0; count1 < total_count; count1++){
        printf("%d\n", num[count1]);
    }
    
getch();
}