class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int lenght=0;
        int sum=0;
        map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            
            if(sum == k){
                lenght= i+1;
            }
            
            // prefix sum ke leye check
            
            if(mp.find(sum-k) != mp.end()){
                lenght = max(lenght,i - mp[sum-k]);
            }
            
            // store fist occurence only
            
            if(mp.find(sum) == mp.end()){
                mp[sum]=i;
            }
        }
        
        return lenght;
    }
};