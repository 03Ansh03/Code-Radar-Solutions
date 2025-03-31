// Your code here...
#include <stdio.h>

int main() {
    int n, i, max;

    
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    max = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    printf("%d\n", max);

    return 0;
}
