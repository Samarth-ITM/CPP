#include <iostream>
using namespace std;

// Quick Sort function
void quickSort(int arr[], int low, int high)
{

    // Base case: if the array has 1 or no element, stop recursion
    if (low >= high)
        return;

    // Step 1: Choose pivot (last element)
    int pivot = arr[high];

    // Step 2: 'i' will track the correct position for smaller elements
    int i = low;

    // Step 3: Traverse the array
    for (int j = low; j < high; j++)
    {

        // If current element is smaller than pivot
        if (arr[j] < pivot)
        {

            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            // Move i forward
            i++;
        }
    }

    // Step 4: Place pivot at its correct sorted position
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;

    // Step 5: Recursively sort left part (elements smaller than pivot)
    quickSort(arr, low, i - 1);

    // Step 6: Recursively sort right part (elements greater than pivot)
    quickSort(arr, i + 1, high);
}

int main()
{
    // Initial array
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}