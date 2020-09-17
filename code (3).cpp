
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long cnt=0;
		string s;
		cin>>s;
		for(char c : s ) // New Step
		{
			if(c=='4')
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
