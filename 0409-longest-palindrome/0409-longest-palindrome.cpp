class Solution {
public:
    int longestPalindrome(string s) {
        int a[52]={0};int oddmax=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97&&s[i]<=122) {
                a[s[i]-97+26]++;
            }
            if(s[i]>=65&&s[i]<=90) {
                a[s[i]-65]++;
            }
        }
        int sum=0;
        for(int i=0;i<52;++i){
            if(a[i]%2==0){
                sum+=a[i];
            }
            else{
                sum+=a[i]-1;
                oddmax++;
            }
        }
        if(oddmax!=0)return sum+1;
        else return sum;
    }
};