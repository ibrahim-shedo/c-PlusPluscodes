#include <iostream>
using namespace std;

void primeNumber(int number){
	for(int i =2; i < number; i++)
	if(number %i==0){
		cout<<"NOT PRIME NUMBER"<<endl;
	}
	else{
		cout<<"ITS PRIME NUMBER"<<endl;
	}
		
	
}

int main(){
	
	int number;
	cout<<"enter the number"<<endl;
	cin>>number;
	
	primeNumber(number);

	
	
	
	return 0;
}