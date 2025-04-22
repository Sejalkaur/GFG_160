//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615
int maximumProfit(vector<int> &arr) {
        // code here
        int l = 0, r = 0;
        int sum = 0;
        int n = arr.size();
        
        while(r < n){
            while(l < n - 1 && arr[l] >= arr[l + 1])l++;
            while(r < n - 1 && arr[r] <= arr[r + 1])r++;
            
            if(r > l)sum += arr[r] - arr[l];
            
            l = r + 1;
            r++;
            
        }
        return sum;
    }
