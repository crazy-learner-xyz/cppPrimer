#include <string>
#include <iostream>

int main(){
	std::string orig = "abcdefg";
	for (int i =0; i<orig.size();++i){
		orig[i] = 'X';
	}
	std::cout << orig;

} 