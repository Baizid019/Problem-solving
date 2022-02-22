#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,v,i,pos = -1; // pos = -1 bcz array starts from 0,so we have to take from < 0


  cin>>n;                  // n = 3(for array's size)



  long long int a[n];     //a[3]


  for(int i=0;i<n;i++)  // now we will take 3 inputs which are   1 , 0 , 1
  {
      cin>>a[i];
  }


  cin>>v; // now we will take that value which position we would like to know , 0

  for(int i=0;i<n;i++)
  {
      if(a[i]==v)   // if a [i] == 0
      {
          pos=i;   // pos = 1 , bcz '0' is in '1' position
          break;
      }
  }

  if(pos==-1) // if previous pos remains same or our condition isn't fulfilled then we will print -1
  {
  cout<<"-1"<<endl;

  }
  else
  cout<<pos<<endl;//   else  we will print pos which is '1'


    return 0;
}
