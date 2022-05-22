/*
1 1 1 
2 2 2
3 3 3 

*/


#include<iostream>

int main(){

	int n;
	std::cout<<"Enter rows ?"<<std::endl;
	std::cin>>n;

	int i=1;

	while(i<=n){

		int j=1;
		while(j<=n){

			std::cout<<i;

			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
