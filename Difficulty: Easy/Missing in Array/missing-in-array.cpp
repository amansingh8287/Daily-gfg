class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int maxi=arr.size()+1;
        
        int asum=0;
        
        for(int i=1;i<=maxi;i++){
            asum+=i;
        }
        
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        
        return asum-sum;
    }
};