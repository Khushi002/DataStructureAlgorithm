class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);// ans vector
        int pos = 0 , neg = 1;
        for(int i = 0;i<nums.size();i++){
            // element pos h if to even index 
            // add in negative index
         if(nums[i]>0){
           ans[pos] = nums[i];
           pos+=2;
         }
         // if element is negative then put it in negative index in the ans vector
         if(nums[i]<0){
            ans[neg] = nums[i];
            neg+=2;
         } }
        return ans;
    }
};
