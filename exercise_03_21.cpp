#include <iostream>
#include <string>
#include <vector>

int main(){
	int input;
	std::vector<int> input_vector;
	while (std::cin >> input){
		input_vector.push_back(input);
	}

	/// Not sure if the syntax is correct
	char ch;
	std::string input_string = "";
	for (auto i = input_vector.begin(); i < input_vector.end(); ++i){
		std::cout << *i << std::endl;
	}
	//std::cout << input_string << std::endl;


}