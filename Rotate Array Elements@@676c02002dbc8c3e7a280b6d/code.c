#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of rotations
    scanf("%d", &k);

    // Normalize k (in case it's larger than n)
    k = k % n;

    // Temporary array to store rotated version
    int rotated[n];

    // Rotate left by k positions
    for(int i = 0; i < n; i++) {
        rotated[i] = arr[(i + k) % n];
    }

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
