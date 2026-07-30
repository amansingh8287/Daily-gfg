class Solution {
  public:
    string removeChars(string &s) {
        // code here
        string ans;
        for(char c:s){
            if(isalpha(c)){
                ans+=c;
            }
        }
        return ans;
    }
};