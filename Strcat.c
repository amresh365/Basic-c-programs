#include<iostream>
using namespace std;
main()
{  int row,col;

 int n;
	int a[row][col];
	
	cout<<"enter the number of alement";
	cin>>n;
	for (row=0;row<n;row++)
	{ 
	
		for(col=0;col<n;col++)
		{
		cin>>a[row][col];
		
		}
	
	
    }
	int sum=0;
     for( row=0;row<n;row++)
     {
     for( col=0;col<n;col++)
	 {
	 	
	 	
	 	sum=sum+a[row][col];
	 	
	 	
		 }	
	 }


     cout<<"sum="<<sum<<endl;


return 0;
   
}