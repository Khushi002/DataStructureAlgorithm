class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;// to store unique numbers
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != val){// at any point if ith index value is not equal to the given value then add it into the count one and increase the count
               nums[count] = nums[i];
               count++;
            }
        }
        return count;
    }
};
