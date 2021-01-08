#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0){
	    int n,rem;
	    int sum=0;
	    cin>>n;
	    while(true){
	        rem = n%10;
	        sum = sum + rem;
	        n = n/10;
	        if(n ==0){
	            break;
	        }
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}
