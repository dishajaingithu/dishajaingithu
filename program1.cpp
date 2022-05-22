/*
Check the which numnber is greater 

*/


#include<iostream>
int main(){

	int a,b;
	std::cout<<"Enter the value of a : " <<std::endl;
	std::cin>>a;

	std::cout<<"Enter the value of b : " <<std::endl;
	std::cin>>b;

	if(a>b){
		std::cout<<a<<"is greater than"<<b<<std::endl;

	}
	else {
		std::cout<<b<<" " <<"is greater than"<<" "<<a<<std::endl;

	}
}



