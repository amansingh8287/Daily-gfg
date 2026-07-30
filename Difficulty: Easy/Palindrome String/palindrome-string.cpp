class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int i=0;
        int j=s.length()-1;
        int count=0;
        
        while(i <= j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                count=1;
                break;
            }
        }
        
        if(count == 1){
            return false;
        }
        
        return true;
    }
};