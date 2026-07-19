class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        if(arr.size() == 1) return 0;
        if(arr[0] == 0) return -1;
        
       
        
        int maxreach=arr[0];
        int steps=arr[0];
        int count = 1;
        
        for(int i=1;i<arr.size();i++){
            
            
            if(i == arr.size()-1) return count;
            
            maxreach=max(maxreach,i+arr[i]);
            
           
            
            steps--;
            
            if(steps == 0){
                count++;
                
                if(i >= maxreach){
                    return -1;
                }
                
                steps=maxreach-i;
            }
        }
        return -1;
    }
};
