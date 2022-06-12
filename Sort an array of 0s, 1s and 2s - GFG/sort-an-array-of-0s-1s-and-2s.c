// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{   int v[n],j=0;
    for(int i=0;i<n;i++)
    if(a[i]==0)
    v[j++]=a[i];
    for(int i=0;i<n;i++)
    if(a[i]==1)
    v[j++]=a[i];
    for(int i=0;i<n;i++)
    if(a[i]==2)
    v[j++]=a[i];
    for(int i=0;i<n;i++)
    a[i]=v[i];
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends