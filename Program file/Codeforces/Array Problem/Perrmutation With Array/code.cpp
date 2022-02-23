
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i;

 cin>>n;

 long long int a[n];             // i took two array
 long long int b[n];

 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
                                // here i have taken inputs for two array                 
for(i=0;i<n;i++)
 {
     cin>>b[i];
 }

 sort(a,a+n);                 // i sorted two array
 sort(b,b+n);

 for(i=0;i<n;i++)
 {
     if ( a[i] != b[i])            // i checked if two array were same 
     {
     cout<<"no";         // if no that means its not permutation
     return 0;
     }
 }
     cout<<"yes"<<endl; // else its permutation
return 0;
}

