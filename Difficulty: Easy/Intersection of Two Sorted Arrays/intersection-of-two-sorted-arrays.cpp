class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        set<int> ans;
        
        int i=0 ,j=0;
        
        while( i < arr1.size() && j < arr2.size()){
           if(arr1[i] <= arr2[j]){
                if(arr1[i] == arr2[j]){
                ans.insert(arr1[i]);
                i++;
                j++;
            }
            else{
                i++;
            }
           }
           else{
               if(arr1[i] == arr2[j]){
                ans.insert(arr1[i]);
                i++;
                j++;
            }
            else{
                j++;
            }
           }
        }
        
       vector<int> arr;
       
       for(auto it:ans){
           arr.push_back(it);
       }
    //   reverse(arr.begin(),arr.end());
        return arr;
    }
};