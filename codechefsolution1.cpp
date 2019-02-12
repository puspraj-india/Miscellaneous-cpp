#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long f[1001];
long long power(long long x,long long y)
{
    long long res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
long long modInverse(long long n)
{
    return power(n, mod-2);
}
long long comb(long long n,long long r){
    return (f[n]*modInverse(f[r])%mod*modInverse(f[n-r])%mod)%mod;
}
int main() {
    long long t,i,j;
	f[0]=1;
	cin>>t;
	for(i=1;i<=1000;i++)
	f[i]=(f[i-1]*i)%mod;
	int com[2001][2001];
	for(int i=0;i<2001;i++){
        for(int j=0;j<=i;j++){
            if(j==0||i==0){
                com[i][j]=1;
            }
            else{
                com[i][j]=com[i-1][j]+com[i-1][j-1];
                com[i][j]%=mod;
            }
        }
	}

	while(t--){
	    long long n,k,res;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    res=power(2,n-1);
	    std::sort(a,a+n);
	    for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]==a[j])
        	        res=(res%mod+com[i+n-1-j][min(i,n-1-j)])%mod;
        	   else
        	      break;
	        }
	    }
	    	    cout<<res<<endl;
	}
	return 0;
}

