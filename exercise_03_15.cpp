#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

int main(){
	std::string input;
	std::vector<std::string> input_vector;
	input_vector.push_back("hello world");

	while(1){
		std::cin >> input;
		if (input.empty()) break;
	}
	/*
	while (std::cin >> input){
		input_vector.push_back(input);
	}*/

/*
	for (int i = 0; i < input_vector.size(); ++i){
		std::cout << input_vector[i] << std::endl;
	}*/
	std::cout << toupper('a') << std::endl;

	/*
	for (int i = 0; i < input_vector.size(); ++i){
		std::cout << toupper(input_vector[i]) << std::endl;
	}*/

}