#include <iostream>
using namespace std;

void myFunction(int myArray[5]){
      for(int i = 0; i<5; i++)
      	cout<< myArray[i]<<" \n";
   }
   
int main(){ 
	
	int myArray[5]={60,49,20,50,10};

    myFunction(myArray);

return 0;
}