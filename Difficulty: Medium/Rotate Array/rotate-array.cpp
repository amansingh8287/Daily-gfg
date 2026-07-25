class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
         int n=d%arr.size();
       
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+(arr.size()-n));
        reverse(arr.begin()+(arr.size()-n),arr.end());
    }
};