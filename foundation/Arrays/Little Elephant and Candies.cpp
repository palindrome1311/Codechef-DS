#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c,n,sum=0,j;
	    cin>>n>>c;
	    for(int i=0;i<n;i++)
	    {
	        cin>>j;
            sum += j;
     }
	  if(sum<=c){
	      cout<<"Yes"<<endl;
	  }
	  else{
	      cout<<"No"<<endl;
	  }
	  
	}
	return 0;
}
