int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        //to track the prefix sum and its freq
        unordered_map<int, int> prefixSumCount;
        int count = 0;
        //so that 0 th sum should also exist
        prefixSumCount[0] = 1;
        
        int curr_sum = 0;
        
        for(int i = 0;i < n; i++){
            curr_sum += arr[i];
            //if curr_sum - k exists i.e. there is a subarray with sum k
            if(prefixSumCount.find(curr_sum - k) != prefixSumCount.end()){
                //add its freq
                count+= prefixSumCount[curr_sum - k];
            }
            //add the curr_sum in the map
            prefixSumCount[curr_sum]++;
        }
        return count;
    }
