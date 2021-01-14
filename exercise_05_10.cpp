#include<iostream>

int main(){
	char c;
	int n = 0;
	while ((std::cin >> c) && (c != '0')) {
		std::cout << c << std::endl;
		switch (c) {
			case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
				++n;
				break;
		}
	}
	std::cout << n << std::endl;

}