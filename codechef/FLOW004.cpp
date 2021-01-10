#include <iostream>
using namespace std;

int main() {
	// your code goes here
     int T;
     cin>>T;
     while(T--){
        long n,first,last,sum;
        cin>>n;
        
            first = n%10;
            while(n>=10){
                n=n/10;
            }
            last=n;
            sum = first + last;
            cout<<sum<<endl;
        
        
     }
	return 0;
}