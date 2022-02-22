#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;
     cin>>n;   // so n = 3 that means array size is 3

     int arr[n];     // arr[3]

     for(i=0;i<n;i++)
     {
         cin>>arr[i];   // 3 2 1
     }

     for (i=0;i<n-1;i++)    //  here i will work for i = 0 to n-1 ,(0,1,2), {3 , 2}
     {
       for(int j =i+1;j<n;j++)   // here j will work for j = i + 1 or 0+1 or 1 to <n , (1,2,3), {2 ,1}
       {
           if(arr[j]<arr[i])  // if arr[j] < arr[i] or 2 < 3
           {
               int temp = arr[j];   // temp = 2
               arr[j] = arr[i];   //  arr[j] = 3
               arr[i] = temp;    //  temp = 2
           }
       }
     }
    
     // the process will continue till we get correct ordr  we were looking for which was 1 2 3
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" "; // 1 2 3
     }
     cout<<endl;
    return 0;
}





//code (using bubble sort) 

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

     int counter = 1;
     while(counter < n)
     {
         for(int i=0;i< n - counter;i++)
         {
             if(arr[i] > arr[i+1])
             {
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
             }
         }
         counter++;
     }

     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}

*/



