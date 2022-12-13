#include <iostream>
using namespace std; 
///           count 1's in sorted binary array

int countfun(int a[], int low, int high)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==0)
            return countfun(a,mid+1,high);
            // low=mid+1; for iterative binary search
        else{
            if(mid==0 || a[mid-1]!=1)
                return mid;
         return countfun(a,low,mid-1);
        }
    }
    return -1;
}
    
    

int main() 
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
    
    // int count=countfun(a,0,n-1);
    int k=countfun(a,0,n-1);
cout<<n-k;
return 0;
}