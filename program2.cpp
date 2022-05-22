/*
Chcek the number is positive , negative or zero

*/

#include<iostream>

int main(){

	int a;

	std::cout<<"Enter the number"<<std::endl;
	std::cin>>a;

	if(a>0){

		std::cout<<a<<" "<<"is a Positive number"<<std::endl;

	}else if(a<0){

		std::cout<<a<<" "<<"is a Negative number"<<std::endl;

	}
	else{
		std::cout<<a<<" "<<"is Equal to Zero"<<std::endl;

	}

	return 0;

}



