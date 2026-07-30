class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        
        int maxsum=sum;
        
        for(int i=k;i<arr.size();i++){
            sum+=arr[i] - arr[i-k];
            maxsum=max(maxsum,sum);
        }
        
        return maxsum;
    }
};