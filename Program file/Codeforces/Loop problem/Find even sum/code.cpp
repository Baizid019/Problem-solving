    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
     int num,a,b,m,n,s,i;

     cin>>num;
    for(i=1;i<=num;i++)
   {
     cin>>a>>b;

     m = ((a-1)*a)/2;

     n = (b*(b+1))/2;

     s = n-m;

     cout<<s<<endl;
   }
     cout<<endl;

     return 0;
    }
