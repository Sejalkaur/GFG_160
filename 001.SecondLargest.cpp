//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max1 = -1;
        int max2 = -1;
        
        for(int i = 0; i < n ;i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && arr[i] < max1)max2 = arr[i];
        }
        return max2;
    }
