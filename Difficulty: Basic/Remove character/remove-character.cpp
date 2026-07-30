class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string ans;
        
        string s1;
        for(char c:str1){
            char ch=tolower(c);
            s1+=ch;
        }
        
        string s2;
        for(char c:str2){
            char ch=tolower(c);
            s2+=ch;
        }
        
        unordered_set<char> st;
        for(char c:s2){
            st.insert(c);
        }
        
        for(char c:s1){
            if(st.find(c)==st.end()){
                ans+=c;
            }
        }
        
        
       return ans;
    }
};
