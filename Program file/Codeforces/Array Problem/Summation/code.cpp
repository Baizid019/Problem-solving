 #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        long long int a[100000];
        long long int num,sum =0;
     
        cin>>num;                // num = 4
        for(int i=0;i<num;i++)
        {
          cin>>a[i];             // a[i] = 7  2 1 3
          sum = sum + a[i];      // sum = 0 + 7 , sum = 7+2,sum=9+1,sum=10+3,sum=13
        }
        cout<<abs(sum)<<endl; // abs(sum),abs(13),13
        return 0;
    }