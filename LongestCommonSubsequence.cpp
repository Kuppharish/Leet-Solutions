#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//#define MAX 100
//int L[MAX][MAX];
int LCS(int dp[][100], string X, string Y, int m, int n){
    if(m==0||n==0) return 0;
    if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    if(X[m-1]==Y[n-1]){
        dp[m-1][n-1]=1+LCS(dp,X,Y,m-1,n-1);
        return dp[m-1][n-1];
    }
    else{
        dp[m-1][n-1]=max(LCS(dp,X,Y,m,n-1),LCS(dp,X,Y,m-1,n));
        return dp[m-1][n-1];
    }
    
}
int main() {
	int T,N1,N2;
	cin>>T;
	while(T>0)
	{
	    cin>>N1>>N2;
	    string A,B;
	    for(int i =0;i<N1;i++){
	        char c;
	        cin>>c;
	        A+=c;
	    }
	    for(int i =0;i<N2;i++){
	        char d;
	        cin>>d;
	        B+=d;
	    }
	    int dp[N1][100];
	    memset(dp,-1,sizeof(dp));
	    int ans = LCS(dp,A,B,N1,N2);
	    cout<<ans<<endl;
	    T--;
	}
	return 0;
}
