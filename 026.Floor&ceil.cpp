// Brute approact
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin() , arr.end());
        // -1 is initialised for both floor and ceil
        // if floor/ceil did not found then it will reman - 1 only
        vector<int> ans(2  , -1);
        int s = 0;
        int n = arr.size();
        int e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            // if mid == x , then both floor&ceil = x
            
           if(arr[mid] == x){
               ans[0]=arr[mid];
               ans[1]=arr[mid];
               return ans;
           }
           // if mid is less than x then  , mid is floor
           else if(arr[mid]<x){
               ans[0] = arr[mid];
               e = mid+1;
           } // and if it is not less than x then it is ceil
           else{
               ans[1] = arr[mid];
               s = mid-1;
           }
        }
       return ans; 
    }
};




// Optimal approach

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int> ans(2);
        ans[0] = INT_MIN;
        ans[1] = INT_MAX;
        
        for(int num : arr){
            if(num == x){
                ans[0] = num;
                ans[1] = num;
                return ans;
            }
            //if current index is less than x but greater than value of ans[0] then
            else if(num < x && num > ans[0]){
                ans[0] = num;
                // similarly for ans[1]
            } else if(num > x && num < ans[1]){
                ans[1] = num;
            }
        }
        // if nothing matches then return -1 for both
        if(ans[0] == INT_MIN) ans[0] = -1;
        if(ans[1] == INT_MAX) ans[1] = -1;
        
        return ans;
    }
};
