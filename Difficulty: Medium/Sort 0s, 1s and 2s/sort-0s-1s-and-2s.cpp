class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int left=0;
        int right=arr.size()-1;
        
        int i=0;
        
        while(i <= right){
             
          if(arr[i]==0){
            swap(arr[i],arr[left]);
            left++;
            i++;
          }
          else if(arr[i]==1){
              i++;
          }
          else{
              swap(arr[i],arr[right]);
              right--;
          }
        }
    }
};