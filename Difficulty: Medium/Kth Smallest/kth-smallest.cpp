class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        set<int> st(arr.begin(),arr.end());
        
        return arr[k-1];
    }
};