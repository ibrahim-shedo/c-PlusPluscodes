#include <iostream>
using namespace std;

int myInt(int y, int w){
  return y *w;
}
double myDouble(double y, double w){
	return y/w;
}

int main(){
	int multiple = myInt(4,6);
	double devision = myDouble(10,2);
	
	cout<<" this is int funtion:"<<multiple<< " \n";
    cout<<" this is double funtion: "<<devision<< " \n";
    
    
    return 0;
}