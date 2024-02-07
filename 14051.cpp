#include<iostream>
using namespace std;
int arr[16];
int dp[16];
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n>>arr[i];
        
        dp[i+n] = max(dp[i+n]+arr[i], dp[i+n]);
        if(i>0)
            dp[i] = max(dp[i-1],dp[i]);

        
        for(int i=1;i<=N;i++)
            cout<<dp[i]<<' ';
        cout<<'\n';
    }
}