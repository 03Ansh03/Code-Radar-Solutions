// Your code here...
#include <stdio.h>

int main() {
    int n, i, max;

    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    max = arr[0];

    // Traverse the array to find the maximum
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    printf("Largest element in the array: %d\n", max);

    return 0;
}
