#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Initialize the array

    // Declare the temporary variable for swapping
    int temp;

    // Swap elements in place: left with right, moving towards the center
    for (int left = 0, right = 4; left < right; left++, right--) {
        // Swap arr[left] and arr[right]
        temp = arr[left];  // Store arr[left] in temp
        arr[left] = arr[right];  // Assign arr[right] to arr[left]
        arr[right] = temp;  // Assign temp (original arr[left]) to arr[right]
    }

    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

