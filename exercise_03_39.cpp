#include <iostream>
#include <string>

int main(){
	std::string str1(10,40);
	std::string str2(10,40);

	if (str1 == str2){
		std::cout << "The two strings are equal" << std::endl;
	}

	const char[] cha1 = {1,1,1};
	const char[] cha2 = {1,1,1};
	if strcmp(ch1,cha2){
		std::cout << "The two char arrays are equal" << std::endl;
	}
}