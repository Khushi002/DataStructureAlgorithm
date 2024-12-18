class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // ans to store those sneaky numbers
        vector<int>ans;
        // map to store the frequency of all the elements
        unordered_map<int , int>mpp;
        
        // here we will add all the elemets in map
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        // now we will traverse in map and see who so ever has the frequency of 2 those elemnts would be pushed in answer vector
        // first refers to value , and second refers to requency
        for(auto x:mpp){
            if(x.second == 2){
                ans.push_back(x.first);
            }
        }

    
    return ans;
    }
};
