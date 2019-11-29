#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int LCS(int dp[][100], string X,string Y,int m,int n)
{
    if(n==0) return m;
    if(m==0) return n;
    if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    if(X[m-1]==Y[n-1]){
        dp[m-1][n-1]=LCS(dp,X,Y,m-1,n-1);
    }
    else{
        dp[m-1][n-1]=1+min(LCS(dp,X,Y,m,n-1),min(LCS(dp,X,Y,m-1,n),LCS(dp,X,Y,m-1,n-1)));
    }
    return dp[m-1][n-1];
}
int main() {
	int T,m,n;
	cin>>T;
	while(T>0)
	{
	    cin>>m>>n;
	    string X,Y;
	    for(int i =0;i<m;i++){
	        char c;
	        cin>>c;
	        X+=c;
	    }
	    for(int i =0;i<n;i++){
	        char d;
	        cin>>d;
	        Y+=d;
	    }
	    int ans=0;
	    int dp[m][100];
	    memset(dp,-1,sizeof(dp));
	    ans = LCS(dp,X,Y,m,n);
	    T--;
	    cout<<ans<<endl;
	}
	return 0;
}
