

class Solution {
  public:
  
    string hexadecimal(int count){
        string s="";
        while(count >= 0){
            int count=count%16;
            
            
        }
    }
    string encryptString(string s) {
        // code here
        string ans;
        int i=0;
        int n=s.length()-1;
        
        while(i <= n){
            int count=1;
            
            while(i+1 <= n && s[i]==s[i+1]){
                count++;
                i++;
            }
            ans+=s[i];
            ans+=to_string(count);
           i++;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};