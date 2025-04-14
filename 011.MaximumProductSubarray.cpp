//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/maximum-product-subarray3604
/*intuition: We are tracking both minp and maxp bcs
maxProd = maximum product jo ab tak mila
minProd = minimum product (negative ya zero), jo future mein kisi negative se multiply hoke bada ban sakta hai
*/
int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        int ans = arr[0];
        int maxPrdt = arr[0];
        int minPrdt = arr[0];
        
        for(int i = 1; i < n; i++){
            if(arr[i] < 0)swap(maxPrdt, minPrdt);
            
            maxPrdt = max(arr[i], maxPrdt * arr[i]);
            minPrdt = min(arr[i], minPrdt * arr[i]);
            
            ans = max(ans, maxPrdt);
        }
        return ans;
    }
