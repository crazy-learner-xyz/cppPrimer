#include <iostream>
#include <string>
#include <vector>

int main(){
	int int_array[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};

	for (auto i = 0; i < 3; ++i){
		for (auto j = 0; j < 4; ++j){
			std::cout << int_array[i][j] << std::endl;
		}
	}




}