class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int water=0;
        int i=0;
        int j=arr.size()-1;
        int maxleft=0;
        int rightmax=0;
        
        while( i <= j){
            if(arr[i] <= arr[j]){
                if(arr[i] > maxleft){
                    maxleft=arr[i];
                }else{
                    water+=maxleft - arr[i];
                }
                i++;
            }
            else{
                if(arr[j] > rightmax){
                    rightmax=arr[j];
                }else{
                    water+=rightmax - arr[j];
                }
                j--;
            }
        }
        return water;
    }
};