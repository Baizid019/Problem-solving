
#include <bits/stdc++.h>

using namespace std;

int main()
{
long long int n,m,i,j;
cin>>n>>m;                     //  i have taken 2d array size 
long long int a[n][m];

for (i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        cin>>a[i][j];     // then i have taken inputs
    }
}

 for (i=0;i<n;i++)
{
    for(j=m-1;j>=0;j--)
    {
        cout<<a[i][j]<<" ";   // then i have taken inputs from backward using reverse loop
    }
    cout<<endl;  
}
    return 0;
}




