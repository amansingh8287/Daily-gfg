class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        unordered_set<int> st;
        
        for(auto it:arr){
            int num=target-it;
            
            if(st.find(num)!=st.end()){
                return true;
            }
            
            st.insert(it);
        }
        
        return false;
    }
};