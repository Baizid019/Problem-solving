#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i;

 cin>>n;                          // 5

 long long int a[n];             // a[5]

 for(i=0;i<n;i++)
 {
     cin>>a[i];                 // 1 2 3 4 5
 }

 for(i=n-1;i>=0;i--)   // so in this case first num is n -1 which is 4 and we will take till 0 . and we will also use decrement.so 5 4 3 2 1
 {
     cout<<a[i]<<" ";   // 5 4 3 2 1
 }

return 0;
}
