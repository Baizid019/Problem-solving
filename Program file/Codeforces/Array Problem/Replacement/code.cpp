 #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        long long int n;
        cin>>n;
        long long int a[n];
         
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         
        for(int i=0;i<n;i++)
         {
            if(a[i]>0)
            {
                a[i] = 1;
            }
            
            if(a[i]<0)
            {
                a[i] = 2;
            }
         }
         
         for(int i=0;i<n;i++)
         {
             cout<<a[i]<<" ";
         }
         
        
        return 0;
    }