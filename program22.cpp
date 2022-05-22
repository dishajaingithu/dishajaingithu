/*

* * * *
* * * 
* * 
* 

*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter Number of Rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;

	while(i<=rows){

		int j=1;
		while(j<=rows-i+1){

			std::cout<<"*"<<" ";

			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
