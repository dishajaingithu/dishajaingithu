/*

- - - *
- - * *
- * * *
* * * *

*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter Number of Rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;

	while(i<=rows){

		int space=rows-i;
		while(space){

			std::cout<<" "<<" " ;
			space--;

		}

		int j=1;
		while(j<=i){

			std::cout<<"*"<<" ";

			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
