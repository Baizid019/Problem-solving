// code (using buit in function)


// for minimum to maximum
// 3 2 1 input, 1 2 3 output

#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;
     cin>>n;

     int arr[n];

     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     sort(arr,arr+n);

     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}




// from maximum to minimum
// 1 2 3 input, 3 2 1 output

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;
     cin>>n;

     int arr[n];

     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     sort(arr,arr+n,greater<int >());

     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}
