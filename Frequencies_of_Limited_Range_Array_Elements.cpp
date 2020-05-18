void printfrequency(int a[], int n)
{ 

	// Your code herre
	
	int md = n;
	for(int i=0;i<n;i++)
	a[i]-=1;
	for(int i=0;i<n;i++)
	{
	    a[a[i]%n]+=n;
	}
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]/n<<" ";
	}
	
	
} 
