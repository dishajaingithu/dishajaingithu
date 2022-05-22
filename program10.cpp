/*
1 2 3 4
1 2 3 4
1 2 3 4

*/


#include<iostream>

int main(){

	int n;
	std::cout<<"Enter rows ?"<<std::endl;
	std::cin>>n;

	int i=1;

	while(i<=n){

		int j=1;
		int num=1;
		while(j<=n){

			std::cout<<num;

			num++;
			j++;

		}

		i++;
		std::cout<<std::endl;

	}
}
