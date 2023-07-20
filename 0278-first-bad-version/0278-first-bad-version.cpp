// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        long int left=1,right=n;
        while(left<right){
            if(isBadVersion((right+left)/2)) right=left + (right-left)/2;
            else left=(right+left)/2+1;
        }    
        return (right+left)/2;
    }
};