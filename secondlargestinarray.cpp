class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int smax=-1;
        int max=0;
        int n = arr.size();
        for (int i = 0 ; i<n ; i++)
        {
           
            if (arr[i]>max)
            {
                smax=max;
                max=arr[i];
            }
            if (arr[i]>smax&&arr[i]<max)
            {
                smax=arr[i];
            }
            // if ()
            // {
                
            // }
        }
        if (smax==0){
            return -1;
        }
        else {
        return smax;
        }
    }
};
