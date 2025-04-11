#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read rotation count
    scanf("%d", &k);

    // Handle edge cases
    if (n == 0) return 0;

    // Normalize k
    k = k % n;

    // Left rotate using reversal algorithm
    reverse(arr, 0, k - 1);       // Reverse first k elements
    reverse(arr, k, n - 1);       // Reverse remaining n-k elements
    reverse(arr, 0, n - 1);       // Reverse whole array

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
