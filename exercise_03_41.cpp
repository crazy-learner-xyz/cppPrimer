#include <iostream>
#include <string>
#include <vector>

int main(){
	int int_array[10] = {0,1,2,3,4,5,6,7,8,9};
	std::vector<int> input_vector(&int_array[0],&int_array[9]);

	for (int i = 0; i < input_vector.size(); ++i){
		std::cout << input_vector[i] << std::endl;
	}


	int int_array_new[] = input_vector;
	std::cout << int_array_new << std::endl;
}