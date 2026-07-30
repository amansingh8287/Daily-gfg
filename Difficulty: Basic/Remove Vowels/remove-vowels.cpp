class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string ans;
        
        for(char c:s){
          char it=tolower(c);
            if(it!='a' && it!='e' && it!='i' && it!='o' && it!='u'){
                ans+=it;
            }
        }
        return ans;
    }
};