#include <iostream>
#include <sstream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i,a;
	    signed long long int sum=0;
	    cin>>a;
	    string arr;
	    cin>>arr;
	    for(i=0;i<a;i++){
	        if(arr[i]=='1') {
	        sum++;
	       }   
	    }
	    cout<<((sum*(sum+1))/2)<<endl;
	}
	return 0;
}
