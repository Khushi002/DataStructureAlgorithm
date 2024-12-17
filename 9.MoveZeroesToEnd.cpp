class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // we will take 2 pointers and make them both stand in 0th index
        int left = 0;
        // left pointerwill always in 0 value index and right will go through the non zero elements
        for(int right = 0;right<nums.size();right++){
            //if at any point right is non zero ex 1 , 2 , 3 etc then swap it with left because left is always on 0 value index
            if(nums[right]!= 0){
                swap(nums[right] , nums[left]);
                // now ++ as we need to find next zero place 
                left++;
            }
        }
    }
};
