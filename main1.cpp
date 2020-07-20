// Sample code to perform I/O:
 
#include <iostream>
 
using namespace std;
 
int main() {
	int num;
	cin >> num;
	int n[num];
	for(int i=0;i<num;i++){
		cin>>n[i];
		cout<<n[i]<<" ";
	}									// Reading input from STDIN
			// Writing output to STDOUT
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
 
// Write your code here