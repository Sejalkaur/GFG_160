//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int l = 0;
        
        for(int r = 0; r < n; r++){
            if(arr[r] != 0){
                swap(arr[l], arr[r]);
                l++;
            }
        }
        
    }
