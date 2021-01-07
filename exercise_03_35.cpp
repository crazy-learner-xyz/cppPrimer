#include <iostream>
#include <string>

int main(){
	int int_array[10] = {0,1,2,3,4,5,6,7,8,9};

	for (auto i: int_array){
		std::cout << i << std::endl;
	}

	int* p = &int_array[0];
	for (int i = 0; i < 10; ++i){
		*(p+i) = 0;
	}

	for (auto i: int_array){
		std::cout << i << std::endl;
	}

}