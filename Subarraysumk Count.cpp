class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
    unordered_map<int, int> mpp;
    int sum = 0;
    int count = 0;

    // Initialize hashmap with sum 0 to handle subarrays starting from index 0
    mpp[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // Check if (sum - k) exists in the hashmap
        if (mpp.find(sum - k) != mpp.end()) {
            count += mpp[sum - k];
        }

        // Update the hashmap with the current cumulative sum
        mpp[sum]++;
    }

    return count;
    }
};
