/*

1 1 1 1
- 2 2 2
- - 3 3
- - - 4

*/

#include<iostream>

int main(){

	int rows;
	std::cout<<"Enter Number of Rows ? "<<std::endl;
	std::cin>>rows;

	int i=1;
	int num=1;

	while(i<=rows){

		int space=i-1;
		while(space){

			std::cout<<" "<<" ";
			space--;

		}

		int j=1;
		while(j<=rows-i+1){

			std::cout<<num<<" ";

			j++;

		}

		i++;
		num++;
		std::cout<<std::endl;

	}
}
