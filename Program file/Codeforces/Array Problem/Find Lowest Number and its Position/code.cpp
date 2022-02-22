#include<bits/stdc++.h>
using namespace std;
int main()
{

// first we will find mimimum value then we will find the position of that minimum value.

long long int i,n,mini,pos=-1;

cin>>n;                              //n=3
long long int a[n];                  //a[3]

for(int i=0;i<n;i++)
{
cin>>a[i];                   // 2,1 ,3
}

mini=a[0];                  // lets think 0th index is minimum,here 0th index is 2 
for(i=1;i<n;i++)
{
if(a[i]<mini)             // if a[i] is smaller than 0 th index then we will transfer that a[i] to mini and then it will be the new minimum value 
{
mini=a[i];          // mini = 1
}
}


for(int i=0;i<n;i++)
  {
      if(a[i]==mini)
      {
          pos=i+1; // as they are counting from greater than zero so we will add +1 will thee actuall position 
          break;
      }
  }


cout<<mini<<" "<<pos<<endl; // after getting minimum and its position we will print them together and keep a space between them.

return 0;
}
