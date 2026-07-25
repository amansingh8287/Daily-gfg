class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int count=INT_MIN;
        int n=1;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                n++;
            }
            count=max(count,n);
            
            if(arr[i]!=arr[i+1]){
                n=1;
            }
        }
        
        
        if(count==INT_MIN){
            return n;
        }
        
        return count;
        
    }
};