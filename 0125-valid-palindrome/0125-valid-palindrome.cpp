class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.length();i++){
            if(iswalnum(s[i])!=0){
                if(isalpha(s[i])!=0){
                    s[i]=tolower(s[i]);
                }
                a.push_back(s[i]);
            }
        }
        string b=a;
        std::reverse(a.begin(), a.end());
        if(a==b){
            return true;
        }
        return false;
    }
};