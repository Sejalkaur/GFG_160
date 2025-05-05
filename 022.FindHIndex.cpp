//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/find-h-index--165609
int hIndex(vector<int>& arr) {
        // find max h s.t. atleast h papers have h citations
        
        sort(arr.rbegin(), arr.rend());
        int n = arr.size();
        int h = 0;
        
        for(int i = 0; i < n ; i++){
            if(arr[i] >= i + 1){
                h = i + 1;
            }
            else break;
        } 
        return h;
    }
