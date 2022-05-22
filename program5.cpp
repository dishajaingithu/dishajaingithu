

#include<iostream>
int main(){

	char ch;

	std::cout<<"Enter the Character ? "<<std::endl;
	std::cin>>ch;

	if(ch>='A' && ch<='Z'){

		std::cout<<"Given Character is Higher Case"<<std::endl;

	}else if(ch>='a' && ch<='z'){

		std::cout<<"Given Character is Lower Case"<<std::endl;

	}

	else{
		std::cout<<"Given Charcater is Number"<<std::endl;


	}
}
