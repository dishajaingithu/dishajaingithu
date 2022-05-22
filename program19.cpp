/*
A
B C 
C D E
D E F G


*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter the no of rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;

	while(i<=rows){

		int j=1;
		while(j<=i){

			char ch = ('A' + i+j-2);

			std::cout<<ch<<" ";

			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
