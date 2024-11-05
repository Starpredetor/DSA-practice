/*

*/


// Binary Search

#include <math.h>
#include <stdio.h>


void displayArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int binarySearch(int arr[], int x, int l, int r){
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}


int main(){
    int arr[50],n,x,result;

    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements of array:");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Given array is:");
    displayArray(arr, n);
    
    printf("\nEnter the number to be searched:");
    scanf("%d",&x);
    result = binarySearch(arr, x, 0, n - 1);
    if (result == -1) {
        printf("\nElement is not present in the array");
    } else {
        printf("\nElement is present at index %d",result);
    }
    return 0;
}