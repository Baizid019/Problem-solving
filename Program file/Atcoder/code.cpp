#include <bits/stdc++.h>

    using namespace std;

    int main()
    {
       long long int n,p,q,r,a,num1,num2,num3,sum;

       cin>>n;    // 123

       p = n%10;   // 3

       a = n /10; // 12

       q = a%10; // 2

       r = a/10; // 1

       num1 = (r*100) + (q*10)+ p;

       num2 = (q*100) + (p*10)+ r;

       num3 = (p*100) + (r*10)+ q;

       sum = num1 + num2 + num3;
       cout<<sum<<endl;

       return 0;
    }
