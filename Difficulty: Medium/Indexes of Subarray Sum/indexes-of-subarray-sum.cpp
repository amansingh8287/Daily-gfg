class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
      int start=0;
      int sum=0;
        
        for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           
           while(sum > target && start <= i){
               sum-=arr[start];
               start++;
           }
           
           if(sum==target){
               return {start+1,i+1};
           }
        }
        
        return {-1};
        
    }
};