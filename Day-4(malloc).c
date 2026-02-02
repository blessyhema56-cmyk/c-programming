#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *array;
    int sum =0;
    //get lenght
    printf("Enter the number of elements :");
    scanf("%d",&n);
    //memeory allocation
    array = (int*)malloc(n*sizeof(int));
    //validation
    if(array == NULL){
        printf("Memory not allocated \n");
        return 0;
    }
    else{
        printf("Memory allocated and the allocated meemory is %d\n",n);
        
    }
    
    printf("Enter %d numbers by adding a gap for each numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    
    printf("The sum of all elements is : %d \n",sum);
    
    //destroy the memory
    free(array);
    printf("Memeory deleted successfully");
    return 0;
}


output:
Enter the number of elements :2
Memory allocated and the allocated meemory is 2
Enter 2 numbers by adding a gap for each numbers
34 45
The sum of all elements is : 79 
Memeory deleted successfully

=== Code Execution Successful ===
