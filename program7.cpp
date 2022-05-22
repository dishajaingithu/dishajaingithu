/*
prime Number Code

*/

#include<iostream>

int main(){

	int n,i=2;
	
	std::cout<<"Enter the Number ? "<<std::endl;
	std::cin>>n;
	int flag=0;

	while(i<n){

		if(n%i==0){

			flag=1;
			break;

		}

		i++;
	}

	if(flag==0){

		std::cout<<"It Is Prime Number"<<std::endl;

	}

	else{

		std::cout<<"It is Not Prime Number"<<std::endl;

	}
}





