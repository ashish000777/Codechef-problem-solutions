#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A, B, X, result;
	    cin>>A>>B>>X;
	    result = (B - A) / X;
	    cout<<result<<endl;
	}
	return 0;
}
