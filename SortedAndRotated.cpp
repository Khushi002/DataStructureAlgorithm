class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drop = 0;
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                drop++;
            }    
        }
        // here we compare the 1st and last element
        if(nums[n-1]>nums[0]){
            drop++;
        }
      return drop<=1;
    }
};
