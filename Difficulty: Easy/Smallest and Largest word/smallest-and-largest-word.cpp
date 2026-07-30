class Solution {
  public:
    vector<string> smallerAndLarge(string &s) {
        // code here
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        string ans;
        string ans1;
        
        int count=0;
        string s1="";
        
         s+= ' ';
        
        for(char c:s){
            
            if(c!=' '){
                count++;
                s1+=c;
                
            }
            else{
                
                if(count > 0 ){
                if(count >= maxi){
                    maxi=count;
                    ans=s1;
                }
                if(count < mini){
                    mini=count;
                    ans1=s1;
                }
                }
                
                s1="";
                count=0;
            }
            
        }
        return {ans1,ans};
    }
};
