#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    if (n <= 0) return 0;  // no array to process

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Normalize rotation (k can be > n)
    k = k % n;

    // Handle negative rotation (rotate right instead)
    if (k < 0) {
        k = k + n;  // convert right rotation to left
    }

    // Print rotated array directly without extra array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[(i + k) % n]);
    }

    return 0;
}
