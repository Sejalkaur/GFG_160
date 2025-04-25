//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/max-circular-subarray-sum-1587115620
int kadane(vector<int> &arr){
        int n = arr.size();
        int sum = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0; i < n ; i++){
            if(sum < 0)sum = 0;
            sum += arr[i];

            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
    
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        // max circular subaaray sum = total sum - min subarray sum(negative)
        //ans would be max(normal kadane, upr wala)
        
        //case 1 ans could be from the non wrapped subarray
        int max_normal = kadane(arr);
        if(max_normal < 0)return max_normal;
        
        //case 2 where its wrapped we need to find total and minimum subaray sum
        int total_sum = 0;
        for(int i = 0; i < n; i++){
            total_sum += arr[i];
            
            //for minimum subarray
            arr[i] = -arr[i];
        }
        
        int minimum_sum = kadane(arr);//it returns positive
        
        return max(max_normal, total_sum + minimum_sum);
    }
