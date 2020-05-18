#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long a[], int n) {
    // Your code here
    int md = n;
    for(int i=0;i<n;i++)
    {
        a[i]+=(a[a[i]%md]%md)*md; 
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]/md;
    }
    
    
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        arrange(A, n);
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
