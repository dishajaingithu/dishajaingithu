/*
A A A
B B B
C C C

*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter Number of Rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;
	char ch='A';

	while(i<=rows){

		int j=1;

		while(j<=rows){

			std::cout<<ch<<" ";
			ch++;

			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
