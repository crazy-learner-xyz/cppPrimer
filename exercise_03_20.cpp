#include <iostream>
#include <string>
#include <vector>

int main(){
	int input;
	std::vector<int> input_vector;
	while (std::cin >> input){
		input_vector.push_back(input);
	}

	//std::cout << input_vector.size() / 2 << std::endl;

	///This only works if / return type is an integer.
	for (int i = 0; i < input_vector.size() / 2; ++i){
		std::cout << input_vector[2*i] + input_vector[2*i+1] << std::endl;
	}

	for (int i = 0; i < input_vector.size() / 2; ++i){
		std::cout << input_vector[i] + input_vector[input_vector.size()-1-i] << std::endl;
	}

}