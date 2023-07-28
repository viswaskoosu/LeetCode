class Solution {
public:
    int reverse(int x) {
        if(x>=INT_MAX||x<=INT_MIN) return 0;
        long int num=0;
        int neg=0;
        if(x<0){
            neg=1;
            x=x*(-1);
        }
        while(x>0){
            num=num*10+x%10;
            x=x/10;
        }
        if(num>INT_MAX||num<INT_MIN) return 0;

        if(neg==0) return num;
        else return num*(-1);
    }
};