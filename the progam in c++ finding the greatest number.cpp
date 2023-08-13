#include <iostream>
int main()
{
    int num1, num2, num3;
    std::cout<<" Enter the number 1 = "<<std::endl;
    std::cin >> num1;
    std::cout<<" Enter the number 2 = "<<std::endl;
    std::cin >> num2;
    std::cout<<" Enter the number 3 = "<<std::endl;
    std::cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        std::cout<< num1 << ",is the largest number."<<std::endl;
    }
   else if (num2 > num1 && num2 > num3)
    {
        std::cout<< num2 << ",is the largest number."<<std::endl;
    }
   else if (num3 > num1 && num3 > num2)
    {
        std::cout<< num3 << " ,is the largest number."<<std::endl;
    }
   else if(num1=num2=num3)
	{
		std::cout<<"The three numbers are equal"<<std::endl;
	}
  else if(num1=num2)
	{
		std::cout<<num3<<"is the largest"<<std::endl;
	}
	
    return 0;
}
 