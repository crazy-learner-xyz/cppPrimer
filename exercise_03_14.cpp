#include <iostream>
#include <string>
#include <vector>

int main(){
	int input;
	std::vector<int> input_vector;
	while (std::cin >> input){
		input_vector.push_back(input);
	}

	for (int i = 0; i < input_vector.size(); ++i){
		std::cout << input_vector[i] << std::endl;
	}

}