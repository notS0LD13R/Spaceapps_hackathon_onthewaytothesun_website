#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int power(int a, int b)
{
    int res = 1;
    a = a % mod;
    for(int i=1 ; i<=b ; ++i)
        res = (res * a) % mod;
    
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<long long int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(m==1)
    {
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            c+=power(2,a[i]);
            c%=mod;
        }
        cout<<c;
    }
    else{
    //cout<<a[n-1];
    long long int b=*max_element(a.begin(),a.end());
    long long int c=power(2,b);
    cout<<c%mod<<endl;}
    return 0;
}