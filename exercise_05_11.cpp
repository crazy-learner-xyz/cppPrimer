#include<iostream>

int main(){
	char c;
	int n = 0;
	//char input[20];
	std::string input;
	std::cin >> input;
	for (size_t i = 0; i < input.size(); ++i){
		c = input[i];
		switch (c) {
			case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':case '\t': case '\n': case ' ': 
				++n;
				break;
		}
	}
	std::cout << n << std::endl;

}