class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      k = k % nums.size();
      // 1234567 -> 7654321
          reverse(nums.begin() , nums.end());
          //765 4321 -> 5674321
          reverse(nums.begin() , nums.begin()+k);
          // 567 4321 ->5671234
          reverse(nums.begin()+k , nums.end());
        }
    
};
