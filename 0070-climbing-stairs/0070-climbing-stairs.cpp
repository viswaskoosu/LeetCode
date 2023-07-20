class Solution {
public:
    int climbStairs(int n) {
        int count=0,r=0;
        // count=1+(n-1)+(n-2)
        while(n>0){
            count+=nCr(n,r);
            n--;
            r++;
        }
        return count;
    }
    double nCr(int n, int r)
    {   
        double sum=1;
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        return sum;
    }
 
};