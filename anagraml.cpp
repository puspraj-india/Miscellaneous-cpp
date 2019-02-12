#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,m,n;
    cin>>t;
    while(t--)
    {
        set<int> v;
        int flag=0;
        cin>>n>>m;
        int a=0,t=1;
        long long int t2=2*m,i;
        for(i=0;;i++)
        {
        	flag=0;
        	long r=a%m;
            if(r==n)
            {
                cout<<i<<endl;
                break;
            }
            else if(v.find(r)==v.end())
            {
            	v.insert(r);
            }
            else
            {
            	flag=1;
            	break;
			}
            a=t+a;
            t=t+2;
        }
        if(flag==1)
        {
            cout<<1<<endl;
        }

    }
}
