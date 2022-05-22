#include<iostream>

int main(){

	int i=1,n,sum=0;

	std::cout<<"Enter the End Condition ? "<<std::endl;

	std::cin>>n;

	std::cout<<std::endl;

	while(i<=n){

		std::cout<<i<<std::endl;
		sum = sum + i;
		i++;

	}

	std::cout<<"Addition is : " << sum <<std::endl;

	return 0;

}
