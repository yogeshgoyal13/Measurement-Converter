#include<iostream>
#include<vector>
using namespace std;
int boardPath_memo(int si,int ei,vector<int>&dp){
    if(si==ei){
        return 1;
    }
    int count=0;
    if(dp[si]!=0) 
    return dp[si];
    for(int dice=1;dice<=6;dice++){
        if(si+dice<=ei){
            count+=boardPath_memo(si+dice,ei,dp);
        }
    }
    dp[si]=count;
    return count;
}

int main(){
    int n=10;
    vector<int>dp(n+1,0);
cout<<boardPath_memo(0,n,dp)<<endl;
}