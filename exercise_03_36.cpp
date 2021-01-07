#include <iostream>
#include <string>

int main(){
	int[10] int_array = {0,1,2,3,4,5,6,7,8,9};
	int[10] int_array2 = {0,1,2,3,4,5,6,7,8,9};

	int* p = &int_array[0];
	for (int i = 0; i < 10; ++i){
		*(p+i) = 0;
	}

	std::cout << int_array << std::endl;

}