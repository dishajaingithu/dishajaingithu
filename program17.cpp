/*
A
B B 
C C C

*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter the no of rows ? "<<std::endl;
	std::cin>>rows;

	char ch = 'A';

	int i=1;

	while(i<=rows){

		int j=1;
		while(j<=i){

			std::cout<<ch<<" ";

			j++;

		}

		ch++;
		i++;
		std::cout<<std::endl;

	}
}
