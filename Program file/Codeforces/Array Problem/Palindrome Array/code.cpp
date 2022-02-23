// we will solve this problem by comparing index


#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i,count = 0;
 cin>>n;                             // 3
 long long int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];                    // 1 2 1
 }

//        1  2  1
// index  0  1  2


for(i=0;i<n;i++)
 {
    if(a[i]==a[n-1-i])      
    {

                                 // for 1 and index no 0
                                // 0 == (3 - 1 - 0) or 0 index == 2 index
                               // which is 1 ==  1
                              // count = 1



                             
                                 // for 2 and index no 1
                                //1 == (3 - 1 - 1) or 1 index == 1 index
                               // which is 2 ==  2
                              // count = 1 + 1 or 2



                              
                                 // for 1 and index no 2
                                // 2 == (3 - 1 - 2) or 2 index == 0 index
                               // which is 1 ==  1
                              // count = 2 + 1 or 3
        count++;
    }
 }

 if(count == n )     // 3 == 3
cout<<"YES"<<endl;   // yes pallindrome
else
cout<<"NO"<<endl;

return 0;
}




