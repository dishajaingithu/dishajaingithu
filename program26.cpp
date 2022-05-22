#include<iostream>
int main(){

	int range;
	std::cout<<"Enter the Range ?"<<std::endl;
	std::cin>>range;

	int sum=0;

	for(int i=1;i<=range;i++){

		sum = sum + i;

	}

	std::cout<<"Addition is : "<<sum<<std::endl;

}


