class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        map<char,int> mp;
        map<char,int> mp1;
        if(s1.length()!=s2.length()){
            return false;
        }
        
        for(int i=0;i<s1.length();i++){
            mp[s1[i]]++;
            mp1[s2[i]]++;
        }
        
        if(mp != mp1){
            return false;
        }
        
        return true;
    }
};