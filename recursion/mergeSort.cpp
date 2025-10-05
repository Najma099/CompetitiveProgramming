class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l >= r) {
            return;
        }
        int mid = l + (r - l) / 2;
        mergeSort(arr,l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l , r, mid);
    }
    
    void merge(vector<int>& arr, int l, int r, int mid) {
        int i = l, j = mid + 1;
        vector<int> temp;
        
        while( i <= mid && j <= r) {
            if(arr[i] > arr[j]) {
                temp.push_back(arr[j]);
                j++;
            }
            else {
                temp.push_back(arr[i]);
                i++;
            }
        }
        
        if(i <= mid) {
            while(i <= mid) {
                temp.push_back(arr[i]);
                i++;
            }
        }
        if(j <= r) {
            while(j <= r) {
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        for(int i = 0; i < temp.size(); i++) {
            arr[l] = temp[i];
            l++;
        }
        
    }
};