class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low >= high ) return;
        int idx = partition(arr,low, high);
        quickSort(arr,low, idx - 1);
        quickSort(arr, idx + 1, high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot = low - 1;
        for(int i = low; i < high; i++) {
            if(arr[i] <= arr[high]) {
                pivot++;
                swap(arr[pivot], arr[i]);
            }
        }
        
        swap(arr[pivot+1], arr[high]);
        return pivot + 1;
    }
};