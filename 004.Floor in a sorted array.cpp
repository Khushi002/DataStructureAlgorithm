  int findFloor(vector<int>& arr, int k) {

        // Your code here
        int n = arr.size();
        int s = 0;
        int ans = -1;
        int e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
        if(arr[mid]<=k){
            ans = mid;
           s = mid+1;
        }    
        else{
           e = mid-1;
        }
            
        }
        return ans;
    }
