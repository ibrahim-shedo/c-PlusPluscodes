#include <iostream>
using namespace std;

void if_statement(int x,float w){
	
	
	if(x > w){
		cout<<"x is greathr than w";
	}
	else{
		cout<<"w is greather than x";
	}
	
}



int main(){

	int x,w;
    cout<<"enter x:"<<endl;
	cin>>x;
	cout<<"enter w:"<<endl;
	cin>>w;
	
	if_statement(x,w);
	
		
}