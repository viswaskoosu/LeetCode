class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int size=coins.size();
        int ans[size+1][amount+1];
        for(int i=0;i<size+1;++i){
            for(int j=0;j<amount+1;++j){
                if(j==0) ans[i][j]=0;
                else if(i==0) ans[i][j]=1e8;
                else if(coins[i-1]>j){
                    ans[i][j]=ans[i-1][j];
                }
                else{
                    ans[i][j]=min(1+ans[i][j-coins[i-1]],ans[i-1][j]);
                }
            }
        }
        if(ans[size][amount]>1e4){
            return -1;
        }
        else{
            return ans[size][amount];
        }
    }
};