class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        // loop will definately run for k times
        for(int i = 0;i<k;i++){
            //assinging largest value
             int mini = INT_MAX;
             //intially there is no smaller element ka index so assuming it -1
             int index = -1;
             //now loop will run for the entire array 
             // mini is a very big +ve integer so 
             //now we will compare and found the mini no's index
             //then at that index whatever the value is we will do multiplication  
             //ex 
             //mini = 22222 , 62421
             //2222>6 ans = 6 ind = 0, 6>2 ans = 2 ind = 1, 2>4 no , 2>2 no , 2>1 ans = 1 ind = 4
             for(int j = 0;j<nums.size();j++){
                if(mini>nums[j]){
                    mini = nums[j];
                    index = j;
                }
             }
             nums[index] = nums[index]*multiplier;
//atlast well return that
        }
        return nums;
    }
};
