#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,k,c,p,count=0;
	    cin >>x>>y>>k>>n;
	    for(int i=0;i<n;i++){
	    cin>>p>>c;
	    int d=x-y;
	    if(p>=d && k>=c)
	        count++;
	    }
	    if(count>0){
	        cout<<"LuckyChef"<<endl;
	    }
	    else{
	        cout<<"UnluckyChef"<<endl;
	    }
	}

	return 0;
}
