#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    int sorted = 1; // Assume sorted unless proven otherwise
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if the array is sorted
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = 0; // Found an unsorted pair
            break;
        }
    }
    
    // Output result
    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    
    return 0;
}
