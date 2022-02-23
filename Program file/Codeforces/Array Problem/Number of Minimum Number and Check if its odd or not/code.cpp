#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i,mini,count = 0;
 cin>>n;                             // 5
 long long int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];                 // 3 3 3 5 3
 }
 mini = a[0];
 for(i=0;i<n;i++)
 {
     if(a[i]<mini)       
     {
        mini= a[i];             // minimum = 3
     }
 }
 for(i=0;i<n;i++)
 {
     if(a[i]==mini)
     {
        count++;       // minimum value is 3. and there are four 3. that means 4
     }
 }
if(count%2==0)                 // 4%2==0 so its unlucky
cout<<"Unlucky"<<endl;
else
cout<<"Lucky"<<endl;

return 0;
}
