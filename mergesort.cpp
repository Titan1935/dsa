class Solution {
  public:
    // Function to merge two sorted halves
    void merge(vector<int>& arr, int l, int mid, int r) {
        vector<int> temp; // Temporary array
        int left = l;      // Starting index of left half
        int right = mid + 1; // Starting index of right half

        // Storing elements in sorted order in the temporary array
        while (left <= mid && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // If elements in the left half are remaining
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // If elements in the right half are remaining
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copying sorted elements back into the original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    // Recursive function to perform merge sort
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2; // Avoids overflow

            // Sort left and right halves
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);

            // Merge sorted halves
            merge(arr, l, mid, r);
        }
    }
};
