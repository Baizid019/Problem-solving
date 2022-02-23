#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i,mini,maxi;
 cin>>n;
 long long int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }

 mini = a[0];
 maxi = a[0];

 for(i=0;i<n;i++)
 {
     if(a[i]<mini)
     {
         mini = a[i];
     }

     if(a[i]>maxi)
     {
         maxi = a[i];
     }
 }

  for(i=0;i<n;i++)
  {
      if (a[i]==maxi)
      {
           a[i] = mini;
      }
      else if(a[i]== mini)
      {
          a[i] = maxi;
      }
  }

   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

return 0;
}
