 vector<int> leaders(vector<int>& arr) {
     int n = arr.size();
     vector<int>ans;
     int max = arr[n-1];
     for(int i = n-1;i>=0;i--){
         if(arr[i]>=max){
             max = arr[i];
             ans.push_back(max);
         }
     }
     reverse(ans.begin() , ans.end());
     return ans;
     
        // Code here
    }
