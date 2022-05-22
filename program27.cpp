/*
Fibonacci Series

*/


#include<iostream>

int main(){

	int n1=0,n2=1;

	int range;
	std::cout<<"Enter the Range ?"<<std::endl;
	std::cin>>range;

	std::cout<<n1<<" "<<n2<<" ";

	for(int i=2;i<=range;i++){

		int n3=n1+n2;

		std::cout<<n3<<" ";

		n1=n2;
		n2=n3;

	}
}


