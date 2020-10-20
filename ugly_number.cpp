#include<iostream>
using namespace std;
int main()
{
	int n,x=1;
	cout << "Enter a number:" <<endl;
	cin >> n;
	while(n != 0)
	{
		if(n%5==0)
			n=n/5;
		if(n%3==0)
			n=n/3;
		if(n%2==0)
			n=n/2;
		else
		{
			cout<< " not a ugly number" << endl;
			x=0;
			break;
		}
	}
	if(x==1)
		cout<< " not a ugly number" << endl;
return 0;
}
			

	
