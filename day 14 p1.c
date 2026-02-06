#include<stdio.h>
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
        return i;
    }
}
int main(){
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5, key = 30;
    int reault = linearSearch(arr, n, key);
    if(result != -1)
    printf("Element found at index %d", result);
    else
    printf("Element not found");
    return 0;
}
OUTPUT
Element found at index 2

=== Code Execution Successful ===