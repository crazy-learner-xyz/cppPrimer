///一次读入一整行
///一次读入一个词

#include <iostream>

int main(){
	std::string a;
	while (getline(std::cin, a)){
		std::cout << a << std::endl;
	}

	/*
	std::string word;
	while (std::cin >> word){
		std::cout << word << std::endl;
	}
	*/
}