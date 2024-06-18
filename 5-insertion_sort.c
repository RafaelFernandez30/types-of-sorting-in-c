#include <stdio.h> 
#include <stdlib.h>  

//INSERTION SORT
  
int main(){ 
    
    int count1,count2, total_count, temp_num, num[100]; 
    
printf("=-=-=-=INSERTION_SORT=-=-=-=\n");
printf("\nHow many numbers do you want to enter? "); 
scanf("%d", &total_count); 

printf("Type %d int numbers to be sorted.\n", total_count);

    //get the quantity of num and store it in the positions
    for(count1 = 0; count1 < total_count; count1++){ 
        scanf("%d", &num[count1]); 
    } 
    
    //compare the current item with the item to its left
    //if the counter total is greater than or equal to the current item number, it changes position
    for(count1 = 1; count1 <= total_count - 1; count1++){ 
        temp_num = num[count1]; 
        count2 = count1 - 1;
        
        //as long as the item on the left is larger, it will change position
        while((temp_num < num[count2]) && (count2 >= 0)){ //compare the numbers
            num[count2 + 1] = num[count2]; //as long as the item on the left is larger, it will change position
            count2 = count2 - 1; 
        } 
        num[count2 + 1] = temp_num; 
    } 
    
    //display ordered elements
    printf("\nNumbers in ascending order:\n"); 
    for(count1 = 0; count1 < total_count; count1++){ 
        printf("%d\n", num[count1]); 
    } 
    return 0; 
} 