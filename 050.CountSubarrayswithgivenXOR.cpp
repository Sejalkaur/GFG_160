//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-gfg-160/problem/count-subarray-with-given-xor
long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int cnt = 0;
        int prevXor = 0;
        
        //to check is ther eiany subaray with prevXor ^ k
        unordered_map<int, int> prevXorcount;
        prevXorcount[0] = 1;
        
        for(int i = 0; i < n; i++){
            prevXor ^= arr[i];
            int target = prevXor ^ k;
            
            //if found add the freq
            if(prevXorcount.find(target) != prevXorcount.end()){
                cnt += prevXorcount[target];
            }
            
            prevXorcount[prevXor]++;
        }
        return cnt;
    }
