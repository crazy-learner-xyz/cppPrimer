#include <iostream>
#include <string>
#include <vector>

int main(){
	int input;
	std::vector<int> input_vector;
	while (std::cin >> input){
		input_vector.push_back(input);
	}

	//Use two pointer
	auto i = input_vector.begin();
	while (i <= input_vector.end()-2){
		std::cout << *i + *(i+1) << std::endl;
		i+=2;
	}

	i = input_vector.begin();
	auto j = input_vector.end()-1;
	while (i<j){
		std::cout << *i + *j << std::endl;
		++i;
		--j;
	}

}