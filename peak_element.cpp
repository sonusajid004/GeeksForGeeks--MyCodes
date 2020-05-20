int peak(int a[],int n,int l,int r)
{
   if(l>r)return -1;
   
   int mid = l + (r-l)/2;
   
   if((mid==0 || a[mid-1]<=a[mid] )&&(mid == n-1 || a[mid+1]<=a[mid])){
   return mid;}
   if((mid>0) && (a[mid] < a[mid-1]))
   {
       return peak(a,n,l,mid-1);
       
   }
   else return peak(a,n,mid+1,r);
    
}
int peakElement(int a[], int n)
{
   // Your code here
   return peak(a,n,0,n-1);
}
