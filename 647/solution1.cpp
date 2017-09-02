class Solution {
public:
    int countSubstrings(string s) {
        int result = 0;
        int n = s.length();
        string sub_s = "";
        
        for(int i = 0; i < n; i++){
          for(int j = i; j < n; j++){
            sub_s = "";  
            for(int k = i; k <= j; k++){
              sub_s += s[k];   
            }
            
            //cout << sub_s << isPalindrome(sub_s)<<endl;  
            if(isPalindrome(sub_s)) result++;    
          }
        }
        
        return result;
    }
    
    bool isPalindrome(string s){
        int n = s.length();
        
        for(int i = 0; i < (n/2); i++){
            if(s[i] != s[n-1-i]) return false;
        }
        
        return true;
    }
};
