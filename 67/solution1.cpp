class Solution {
public:
    string addBinary(string a, string b) {
        std::string c = "";
    
        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        int carry = 0;
        
        while(l1 >= 0 || l2 >= 0 || carry > 0){
            if(l1 >= 0){
                carry += (a[l1] - '0');
                l1--;
            }
            if(l2 >= 0){
                carry += (b[l2] - '0');
                l2--;
            }

            c = to_string(carry % 2)+ c;
            carry = carry >> 1;
        }
        
        return c;
    }
};
