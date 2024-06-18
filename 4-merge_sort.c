#include <stdio.h> 
#include <stdlib.h>
  
//MERGESORT  CODE
  
void merge_sort(int num[], int couter1, int counter2); 
void executar_merge(int num[], int counter11, int counter12, int counter22, int counter21); 
  
int main(){ 
    int num[100], total_count, count1; 
    
printf("=-=-=-=,MERGE_SORT=-=-=-=\n");
printf("\nHow many numbers do you want to enter? "); 
scanf("%d", &total_count); 
    
printf("Type %d int numbers to be sorted.\n", total_count); 
    
   //get the quantity of num and store it in the positions
    for(count1 = 0; count1 < total_count; count1++) 
        scanf("%d", &num[count1]); 
        
    //display ordered elements
    merge_sort(num, 0, total_count - 1); 
    printf("\nNumbers in ascending order:\n"); 
    for(count1 = 0; count1 < total_count; count1++) 
        printf("%d\n", num[count1]); 
  
    return 0; 
} 
  
void merge_sort(int num[], int count1, int count2){ //set up the operation
    int mid;
    
    /*divide the num into small parts to make the comparison. as soon as it is compared,
    performs an action, the exchange.*/
    if(count1 < count2){ 
        mid = (count1 + count2) / 2; //splits the data to make small organizations to become faster
        merge_sort(num, count1, mid); 
        merge_sort(num, mid + 1, count2); 
        executar_merge(num, count1, mid, mid + 1, count2); 
    } 
} 

void executar_merge(int num[], int count11, int count12, int count22, int count21){ //execute the operation
    int temp_num[50]; 
    int c1, c2, c3; 
    c1 = count11; //comparing numbers
    c2 = count22; 
    c3 = 0; 
    
    // as long as the number is larger, it compares to find the smallest
    while(c1 <= count12 && c2 <= count21){ //comparison
        if(num[c1] < num[c2]) //if the first number is smaller than the second, perform the exchange
            temp_num[c3++] = num[c1++]; 
        else 
            temp_num[c3++] = num[c2++]; //otherwise, keep the position
    
    //compare with the others separately and change position
    // the while will only end when everyone is in their positions

    while(c1 <= count12) 
        temp_num[c3++] = num[c1++]; 
    while(c2 <= count21) 
        temp_num[c3++] = num[c2++]; 
    for(c1 = count11, c2 = 0; c1 <= count21; c1++, c2++) 
        num[c1] = temp_num[c2]; 
}