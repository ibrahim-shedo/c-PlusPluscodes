//return the squire root of given number

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int number;
	cout<<"enter the number: ";
	cin>>number;
	if(number < 0){
		cout<<"the number must be positive"<<endl;
	}
	else{
		double squareRoot = sqrt(number);
		cout<<"the square root of the number  "<<number<<" is "<<squareRoot<<endl;
	}
	
	
	return 0;
}