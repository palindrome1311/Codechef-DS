#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,sum,n;
	cin>>t;
	while(t--){
        cin>>n;
        sum=0;
        int a[n],min;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if (i==0)
                min=a[i];
            else if(a[i]<min)
                min=a[i];
        }
        cout<<sum-(n*min)<<endl;
    }
	return 0;
}
