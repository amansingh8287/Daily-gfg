class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> mp;
        
        for(auto it:arr){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(it.first==target){
                return it.second;
            }
        }
        
        return 0;
    }
};
