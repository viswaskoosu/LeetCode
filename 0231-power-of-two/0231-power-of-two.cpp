class Solution {
public:
    bool isPowerOfTwo(int n) {
      while(1){
        if(n<1){
         return false;
        }
        else if(n==1){
          return true;
        }
        else if(n%2==0){
          n/=2;
        }
        else{
          return false;
        }
      }
    }
};