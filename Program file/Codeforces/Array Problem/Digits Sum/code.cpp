#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i,sum = 0;
 string s;
 cin>> n;
 cin>> s;

 for(i=0;i<n;i++)
 {
     sum = sum + s[i] - 48;
 }
 cout<<sum<<endl;
return 0;
}



