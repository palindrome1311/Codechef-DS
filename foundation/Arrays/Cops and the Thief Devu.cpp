#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q,c,z,d=100;
	    int sum=0,arr[101]={0};
	    cin>>a>>b>>c;
	    int x=b*c;
	    for(int i=0;i<a;i++){
	        cin>>z;
	        if(z-x<0){
	             p=1;
	        }
	        else{
	            p=z-x;
	        }
	        if(z+x>100){
	             q=100;
	        }
	        else{
	            q=z+x;
	        }
	        for(int j=p;j<q+1;j++){
	            arr[j]++;
	    
	        }
	    }
	    for(int i=1;i<101;i++){
	        if(arr[i]>0){
	            sum++;
	        }
	    }
	    cout<<100-sum<<endl;
	    
	}
	return 0;
}
