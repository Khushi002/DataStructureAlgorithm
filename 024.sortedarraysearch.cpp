bool searchInSorted(vector<int> arr, int k) {

        // Your code here
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(arr[i]== k){
                return true;
            }
        }
        return false;
    }