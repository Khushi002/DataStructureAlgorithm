class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here

        int score=0,n=arr.size();
        for(int i=1;i<n;i++){
          // just find sum of 2 numbers
            score = max(score,arr[i-1]+arr[i]);
        }
        return score;
    }
