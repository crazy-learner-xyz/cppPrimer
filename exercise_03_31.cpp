#include <iostream>
#include <string>

int main(){
	int[10] int_array;
	for (int i = 0; i < 10; ++i){
		int_array[i] = i;
	}
	std::cout << int_array << std::endl;

}