1.) #include<stdio.h>
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

OUTPUT:
Enter the number of elements :2
Memory allocated and the allocated meemory is 2
Enter 2 numbers by adding a gap for each numbers
489
783
The sum of all elements is : 1272 
Memeory deleted successfully

=== Code Execution Successful ===




2.)#include <stdio.h>
#include <stdlib.h>

int main() {
    int *empIDs;
    int n, newN, i;

    // 1. Get initial number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Allocate memory using calloc (initializes to zero)
    empIDs = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (empIDs == NULL) {
        printf("Memory allocation failed!\n");
        return 1;

    }

    // 2. Display initial values (should be zero)
    printf("\nInitial employee IDs:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", empIDs[i]);
    }
    printf("\n");

    // 3. Accept employee IDs from the user
    printf("\nEnter employee IDs:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &empIDs[i]);
    }

    // 4. Increase the number of employees using realloc()
    printf("\nEnter new total number of employees: ");
    scanf("%d", &newN);

    empIDs = (int *)realloc(empIDs, newN * sizeof(int));

    // Check if reallocation was successful
    if (empIDs == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Accept IDs for newly added employees
    printf("\nEnter IDs for new employees:\n");
    for (i = n; i < newN; i++) {
        scanf("%d", &empIDs[i]);
    }

    // 5. Display the updated list
    printf("\nUpdated employee ID list:\n");
    for (i = 0; i < newN; i++) {
        printf("%d ", empIDs[i]);
    }
    printf("\n");

    // 6. Free allocated memory
    free(empIDs);

    return 0;
}
Output:
 Enter number of employees: 5

Initial employee IDs:
0 0 0 0 0 

Enter employee IDs:
1
2
3
4
5

Enter new total number of employees: 5

Enter IDs for new employees:

Updated employee ID list:
1 2 3 4 5


3.)#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,marks;
int *array;
//get length
      printf("Enter the number of subjects:\n");
      scanf("%d",&n);
// memory allocation 
   array = (int*)malloc(n*sizeof(int));
   
   if(array == NULL){
       printf("Memory is not allocated\n");
       return 0;
   }
   else{
       printf("Memory allocated\n");
   }
   printf("Enter the subjects marks:\n");
   for(i=0;i<n;i++){
       scanf("%d",&array[i]);
   }
   printf("Subject marks are:\n");
for (i = 0; i < n; i++) {
    printf("Subject marks %d: %d\n", i + 1, array[i]);
}

   free(array);
   printf("Memory deleted successfully\n");
   return 0;
}


OUTPUT:

Enter the number of subjects:
3
Memory allocated
Enter the subjects marks:
50
60
80
Subject marks are:
Subject marks 1: 50
Subject marks 2: 60
Subject marks 3: 80
Memory deleted successfully


4.)#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, new_n, i;

    // Initial size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // New size
    printf("Enter new size: ");
    scanf("%d", &new_n);

    // Reallocate memory using realloc
    arr = (int *)realloc(arr, new_n * sizeof(int));

    // Check reallocation
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // If size increased, take new values
    if (new_n > n) {
        printf("Enter %d more elements:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display final array
    printf("Final array elements:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}

OUTPUT:

Enter number of elements: 1
Enter 1 elements:
23
Enter new size: 2
Enter 1 more elements:
56
Final array elements:
23 56

5.)#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i;
    int *array;
    printf("Enter the number of employee IDs:\n");
    scanf("%d",&n);
    
    array = (int*)calloc(n,sizeof(int));
    if(array == NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory is allocated\n");
    }
    printf("Enter the employee ID:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("The Employee IDs are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
    printf("Enter the new employee\n");
    scanf("%d",&m);
    
    array = (int*)realloc(array,m*sizeof(int));
    if(array == NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory is allocated\n");
    }
    printf("Enter the new employee ID:\n");
    for(i=n;i<m;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<m;i++){
    printf("The Ids %d is:%d\n",i+1,array[i]);
    }
    free(array);{
        printf("Memory is deleted");
    }
    return 0;
    
    
}


OUTPUT:

Enter the number of employee IDs:
1
Memory is allocated
Enter the employee ID:
2
The Employee IDs are:
2
Enter the new employee
3
Memory is allocated
Enter the new employee ID:
4






6.)// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int number = 10;
    int *point = &number;
    int **secondpoint = &point;
    printf("%d \n", number);
    printf("%p \n", point);
    printf("%d \n", *point);
    printf("%p \n", secondpoint);
    printf("%d \n", **secondpoint);
    

    return 0;
}

OUTPUT:

10 
0x7fffd79fd9f4 
10 
0x7fffd79fd9e8 
10 

