              class Solution
{
    
    public:
    int select(int arr[], int i , int n )
    {
        int mini = i;
        
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini])
            mini = j;
        }
        return mini;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0;i<n-1;i++){
       int mini = select(arr , i , n);

       
       swap(arr[i] , arr[mini]);
    }
    }
};

