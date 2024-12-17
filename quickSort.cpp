   void quickSort(vector<int>& arr, int low, int high) {
        // code here
           if (low < high) {
            // Partition the array and get the pivot index
            int pivotIndex = partition(arr, low, high);

            // Recursively sort the left and right subarrays
            quickSort(arr, low, pivotIndex - 1);  // Left subarray
            quickSort(arr, pivotIndex + 1, high); // Right subarray
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
         int pivot = arr[high]; // Choose the last element as the pivot
        int i = low - 1;       // Index for smaller elements

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) { // If the current element is smaller than the pivot
                i++;
                swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
            }
        }
        // Place the pivot in its correct position
        swap(arr[i + 1], arr[high]);
        return i + 1; // Return the index of the pivot
    }
