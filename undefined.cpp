#include<iostream>
#include<sstream>
using namespace std;

int main() {
	// your code goes here
	int  T;  cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    ostringstream st1;
	    st1<<n;
	    string s=st1.str();
	    int count=0;
	    int k=(int)s.length();
	    for(int i=0;i<k;i++)
	    {
	        if (s[i]=='4')
	        count++;
	        else 
	        count=count;
	    
	     }
	     cout<<count<<"\n";
	
}
return 0;
}
