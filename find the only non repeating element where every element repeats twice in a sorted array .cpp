#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
          // Corner Case
        if(n==1)
        {
            return arr[0];
        }//if there is one element 
        // if(n==0)
        // {
        //     return 0;
        // }//if there is no element in the array
        if(arr[0]!=arr[1])
        {
            return arr[0];
        }//first element is not equal to the second element pair is not formed 
        if(arr[n-1]!=arr[n-2])
        {
            return arr[n-1];
        }//last element is not equal to second last element
        
        // applying decrease and conquer an example of it is binary search
        //T = O(log n) , S = O(1)
         int l = 0 , r = n-1 ; 
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
            {
                return arr[mid];
            }//if the number before mid is not equal to it and the number after it is also not equal means 
              //our mid is not forming pair with any of its adjacent elements . element that appears once in sorted array
              // is mid.
           else if((mid%2==0&&arr[mid]==arr[mid+1])||(mid%2!=0&&arr[mid]==arr[mid-1]))
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  // } Driver Code Ends
