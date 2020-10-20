#include<iostream>

using namespace std;
int main()
{
	int n,flag=1;
	cout << "Enter a number:" <<
	cin >> n;
	sqr=n*n;
	while(n !=0 )
	{	
		if(sqr%10 != n%10)
		{	
			flag=0;
			break;
		}	
		n=n/10;
		sqr=sqr/10;

	}
	if(flag==1)
		cout<< n << " is a automorphic number" << endl;
	else
		cout<< n << " is not a automorphic number" << endl;
}
return 0;	
