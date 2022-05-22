/*
D
C D 
B C D
A B C D

*/


#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter the no of rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;

	while(i<=rows){

		int j=1;

		char ch = ('A' + rows-i);
		while(j<=i){

			

			std::cout<<ch<<" ";

			ch++;
			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
