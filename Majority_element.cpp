int majorityElement(int a[], int s)
{
    
    // your code here
   int res =0,count=1;
   for(int i=1;i<s;i++)
   {
       if(a[i]==a[res])count++;
       else count--;
       if(count == 0){count=1;
           res=i;
       }
   }
   int c=0;
   for(int i=0;i<s;i++)
   {
       if(a[i]==a[res])
       c++;
   }
   if(c>s/2)
   return a[res];
   else return -1;
    
}
