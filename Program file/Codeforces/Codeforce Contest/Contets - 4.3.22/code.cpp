#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,s,num;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>n>>s;
    num = s / (n*n);
    cout<<num<<endl;
    }
    return 0;
}
