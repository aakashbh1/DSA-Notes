/*
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
*/
 long long maxSubarraySum(int arr[], int n){
        
        long long sum=0;
        long long maxm=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum <0)
             sum=0;
            maxm=max(maxm,sum);
             
        }
        
        
        return maxm; 
