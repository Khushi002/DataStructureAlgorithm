class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        // to find first occurence
        int mid;
        int low = 0;
        int n  = arr.size();
        int high = n-1;
        int firstocc = -1;
        int lastocc = -1;
        while(low<=high){
            
            mid = low+(high-low)/2;
            if(arr[mid]==target){
                firstocc = mid;
                high = mid -1;
            }
            
            else if(arr[mid]>target)
            high = mid - 1;
            else
            low = mid+1;
        }
        
    // to find last occurence
        if(firstocc == -1)
        return 0;
        low = 0;
        high = n-1;
        while(low<=high){
            mid = low+(high - low)/2;
            if(arr[mid]==target){
                lastocc = mid;
                low = mid+1;
                
            }
            else if(arr[mid]<target)
            low = mid+1;
            else high = mid-1;
        }
        
        
        return lastocc - firstocc+1;
        
    }
};
