/*
 
 *
 * *
 * * *
 * * * *
 
 */

#include<iostream>

int main(){

	int n;

	std::cout<<"Enter number of rows ? "<<std::endl;
	std::cin>>n;

	int i=1;

	while(i<=n){

		int j=1;

		while(j<=i){

			std::cout<<"*"<<" ";
			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}

