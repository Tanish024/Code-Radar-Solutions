# Read input
N = int(input())
arr = list(map(int, input().split()))

# Check if sorted in non-decreasing order
is_sorted = all(arr[i] <= arr[i+1] for i in range(N - 1))

# Output result
if is_sorted:
    print("Sorted")
else:
    print("Not Sorted")