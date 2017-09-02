class Solution {
public:
    int countSubstrings(string s) {
        int result = 0;
        int n = s.length();
        
        for(int i = 0; i < n; i++){
          //centre at i
          for(int j = 0; i-j >= 0 && i+j < n; j++){
              if(s[i-j] != s[i+j]) break;
              result++;
          }  
            
          for(int j = 0; i-1-j >= 0 && i+j < n; j++){
              if(s[i-1-j] != s[i+j]) break;
              result++;
          }  
        }
        
        return result;
    }    
};
