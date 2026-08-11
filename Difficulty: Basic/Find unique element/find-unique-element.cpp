class Solution {
  public:
    int uniqueElement(vector<int>& arr, int k) {
        // code here
        map<int ,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        
        for(auto it:mp){
            if(it.second%k!=0){
                return it.first;
            }
        }
    }
};