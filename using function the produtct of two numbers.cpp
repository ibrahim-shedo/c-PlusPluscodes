//using function the product of two numbers 

#include <iostream>
using namespace std;

double  myProduct(double x, double y){
	return  x * y ;
}



int main(){
	double x,y;
	cout<<"enter the fist number: ";
	cin>>x;
	cout<<"enter the second numbetr: ";
	cin>>y;
	
   double product = myProduct(x,y);
   cout<<" the product is "<<product<<endl;
	
	return 0;
}