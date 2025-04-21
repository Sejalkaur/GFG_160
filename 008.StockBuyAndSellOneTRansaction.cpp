//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/buy-stock-2
int maximumProfit(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int max_profit = 0;
        int maxi = INT_MIN;
        
        //greedy approach with backward maximum tracking
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] > maxi)maxi = arr[i];
            
            //we can do the transaction
            else max_profit = max(max_profit, maxi - arr[i]);
        }
        
        return max_profit;
    }
