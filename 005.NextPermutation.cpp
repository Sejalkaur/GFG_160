//Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226
public:
  void reverse(vector<int> &arr, int &s, int &e){
      while(s <= e){
          swap(arr[s], arr[e]);
          s++;
          e--;
      }
  }
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        
        //step 1 check for pivot
        int pivot = -1;
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                pivot = i;
                break;
            }
        }
        //if its the greatest permutation
        if(pivot == -1)sort(arr.begin(), arr.end());
        
        else{
            //step 2 find greater element than pivot then swap it
            int mini = INT_MAX;
            int toswap = 0;
            
            for(int i = pivot + 1; i < n; i++){
                if(arr[i] > arr[pivot]){
                    mini = min(mini, arr[i]);
                    if(arr[i] == mini)toswap = i;
                }
            }
            swap(arr[toswap], arr[pivot]);
            
            //step 3 reverse the elements after pivot point
            int s = pivot + 1;
            int e = n - 1;
            reverse(arr, s, e);
        }
    }
