#include <stdio.h>
#include <stdlib.h>

//QUICKSORT CODE

void quick_sort(int[], int, int);

int main(){
    
int num[50], total_count, count;

printf("=-=-=-=QUICK_SORT=-=-=-=\n");    
printf("\nHow many numbers do you want to enter? ");
scanf("%d", &total_count);
    
printf("Type %d int numbers to be sorted.\n", total_count);

//get the quantity of num and store it in the positions
    for (count = 0; count < total_count; count++) {
        scanf("%d", &num[count]);
    }
    
quick_sort(num, 0, total_count - 1);
printf("\nNumbers in ascending order:\n");
    for (count = 0; count < total_count; count++){
        printf("%d\n", num[count]);
    }
    
printf("\n");
    
return 0;
}

void quick_sort(int num[], int start, int end){
    int pivot, left, right, aux;
    
    //comparisons
if(start < end){
        pivot = start; //the number that will be checked
        left = start;
        right = end;
        
    while (left < right){
        
        //scroll through the value to the right
        while (num[left] <= num[pivot] && left <= end){
                left++; //as long as the left vector is equal to or less than the pivot, it advances ONE
    }
         //cycles through the value of right   
     while (num[right] > num[pivot] && right >= start){
                right--;//enquanto o vetor da right for maior que o pivot, recua UM
        }
            
        //if left is smaller than right, change the num
    if (left < right){
                aux = num[left];
                num[left] = num[right];
                num[right] = aux;
        }
    }
    
    //the smaller nums go to left and the larger ones to right, thus making comparisons
    aux = num[right];
    num[right] = num[pivot];
    num[pivot] = aux;
    quick_sort(num, start, right - 1);
    quick_sort(num, right + 1, end);
        
    }
}