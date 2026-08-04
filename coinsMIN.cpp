#include <iostream>
#include <vector>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
        int x=0;
        
        vector<int> newarr;
        for(int i=0;i<coins.size();i++){
            int y= amount - x;
            if(coins[i]<y){
                newarr.push_back(coins[i]);
                x=x+coins[i];
            }
        }
        return
        
    }
int main(){



    return 0;
}