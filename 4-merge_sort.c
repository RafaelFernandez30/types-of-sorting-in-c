#include <stdio.h>
#include <stdlib.h>

// MERGE SORT CODE

void merge_sort(int num[], int count1, int count2);
void executar_merge(int num[], int count11, int count12, int count22, int count21);

int main() {
    int num[100], total_count, count1;
    
    printf("=-=-=-= MERGE_SORT =-=-=-=\n");
    printf("\nHow many numbers do you want to enter? ");
    scanf("%d", &total_count);
    
    printf("Type %d int numbers to be sorted.\n", total_count);
    
    // Get the quantity of numbers and store it in the positions
    for(count1 = 0; count1 < total_count; count1++)
        scanf("%d", &num[count1]);
        
    // Sort the array using merge sort
    merge_sort(num, 0, total_count - 1);
    
    // Display ordered elements
    printf("\nNumbers in ascending order:\n");
    for(count1 = 0; count1 < total_count; count1++)
        printf("%d\n", num[count1]);
  
    return 0;
}

// Merge Sort Function
void merge_sort(int num[], int count1, int count2) {
    int mid;
    
    // Divide the array into smaller parts
    if(count1 < count2) {
        mid = (count1 + count2) / 2; // Find the midpoint
        merge_sort(num, count1, mid); // Sort the first half
        merge_sort(num, mid + 1, count2); // Sort the second half
        executar_merge(num, count1, mid, mid + 1, count2); // Merge the two halves
    }
}

// Merge Function
void executar_merge(int num[], int count11, int count12, int count22, int count21) {
    int temp_num[100]; // Temporary array to hold merged results
    int c1, c2, c3;
    c1 = count11; // Start index for the first half
    c2 = count22; // Start index for the second half
    c3 = 0;
    
    // Merge the two halves into temp_num
    while(c1 <= count12 && c2 <= count21) {
        if(num[c1] < num[c2])
            temp_num[c3++] = num[c1++];
        else
            temp_num[c3++] = num[c2++];
    }
    
    // Copy remaining elements from the first half, if any
    while(c1 <= count12)
        temp_num[c3++] = num[c1++];
    
    // Copy remaining elements from the second half, if any
    while(c2 <= count21)
        temp_num[c3++] = num[c2++];
    
    // Copy the merged elements back into the original array
    for(c1 = count11, c2 = 0; c1 <= count21; c1++, c2++)
        num[c1] = temp_num[c2];
}
