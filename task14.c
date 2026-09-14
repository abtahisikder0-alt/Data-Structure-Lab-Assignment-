#include <stdio.h>

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            res = mid;
            high = mid - 1; // search left
        } else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            res = mid;
            low = mid + 1; // search right
        } else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);

    if (first == -1) {
        printf("Element not found\n");
    } else {
        printf("First Occurrence = %d\n", first);
        printf("Last Occurrence = %d\n", last);
        printf("Total Count = %d\n", (last - first + 1));
    }
    return 0;
}
