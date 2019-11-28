#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T>0)
	{
	    cin>>N;
	    int A[N];
	    for(int i =0;i<N;i++){
	        cin>>A[i];
	    }
	    int L[N];
	    L[0]=1;
	    int maxl;
	    bool flg;
	    for(int i =1;i<N;i++){
	        flg = 0;
	        maxl = 0;
	        for(int j =i-1;j>=0;j--){
	            if(A[i]>A[j]){
	                flg = 1;
	                maxl = max(L[j],maxl);
	            }
	        }
	        if(flg==1)
	        L[i]=maxl+1;
	        else
	        L[i]=1;
	    }
	    int ans=0;
	    for(int i =0;i<N;i++)
	    ans = max(ans,L[i]);
	    cout<<ans<<endl;
	    T--;
	}
	return 0;
}
