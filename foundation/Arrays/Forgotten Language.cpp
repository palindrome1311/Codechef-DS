#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b;
	    int arr[a]={};
	    string lang1[a];
	    string s1;
	    for(int i=0;i<a;i++){
	        cin>>lang1[i];
	    }
	    for(int i=0;i<b;i++){
	        cin>>c;
	        for(int j=0;j<c;j++){
	        cin>>s1;
	        for(int z=0;z<a;z++){
	        if(s1==lang1[z]){
	            arr[z]+=1;
	            }
	            }
	        }
	    }
	        for(int i=0;i<a;i++){
	            if(arr[i]>0){
	                cout<<"YES"<<endl;
	            }
	            else{
	                cout<<"NO"<<endl;
	        }
	        }
	    
	}
	
	return 0;
}
