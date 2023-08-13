//numbers divisible by 7 within the range of 100 to 10

#include <iostream>
using namespace std;
int main(){
	
	cout<<"numbers divisible by 7 within the range of 100 to 10"<<endl;
	
	for(int i = 10;i<=100;i++){
		if(i %7==0){
			cout<<i<< " ";
		}
	}
	
	cout<<endl;
	return 0;
}