class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // take out arrays size
        int n = nums.size();

        // take sum of n natural numbers because it is sure that numbers will start from 0
        int expectedSum = (n*(n+1))/2;
        // take ASum = 0  , then whatever you have in array add that to sctual sum
        int ActualSum = 0;
        for(int i = 0;i<n;i++){
            ActualSum = ActualSum +nums[i];
        }
        //whatever the diffrence is left that is our missing number
        return expectedSum - ActualSum;
    }
};
