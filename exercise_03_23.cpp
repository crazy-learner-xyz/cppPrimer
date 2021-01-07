#include <iostream>
#include <string>
#include <vector>

int main(){
	int input;
	std::vector<int> input_vector{0,1,2,3,4,5,6,7,8,9};

	/// Not sure if the syntax is correct
	for (auto i = input_vector.begin(); i < input_vector.end(); ++i){
		*i = *i * 2;
	}

	for (auto i = input_vector.begin(); i < input_vector.end(); ++i){
		std::cout << *i << std::endl;
	}

}