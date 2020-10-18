#include<iostream>
using namespace std;
int main()
{
	int n,flag=1;
	int a=n;
	cout << "Enter a number:" << endl;
	cin >> n;
	if(n==1)
	{	
		cout << "Not a mersenne number" << endl;
		return 0;
	}	
	n=n+1;
	while(n>0)
	{
		if(n==1)
			break;
		if(n%2 != 0)
		{
			flag=0;
			break;
		}
		else
		{
			n=n/2;
		}
	}	

if(flag==1)
	cout << "mersene number" <<  endl;
else 
	cout <<  "not a mersene number" <<  endl;
return 0;
}

