//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1=m-l+1;
         int n2=r-m;
         int left[n1] , right[n2];
         
         for(int i=0;i<n1;i++)left[i]=arr[l+i];
         for(int i=0;i<n2;i++)right[i]=arr[m+1+i];
         
         int i=0 , j=0 , k=l;
         while(i<n1 && j<n2){
             if(left[i]<right[j])arr[k++]=left[i++];
             else arr[k++]=right[j++];
         }
         
         while(i<n1)arr[k++]=left[i++];
         while(j<n2)arr[k++]=right[j++];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code her
        if(l<r){
            int mid=l+(r-l)/2;
            
            mergeSort(arr , l , mid);
            mergeSort(arr , mid+1 , r);
            merge(arr , l , mid , r);
        }
    }
};


//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends