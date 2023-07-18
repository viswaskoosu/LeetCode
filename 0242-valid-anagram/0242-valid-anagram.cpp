class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26];
        int b[26];
        for(int i=0;i<26;i++){
            a[i]=0;b[i]=0;
        }
        for(int i=0;i<s.length();i++){
            a[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            b[t[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
};