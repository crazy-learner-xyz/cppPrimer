#include<iostream>

int main(){
	char c;
	int n = 0;
	while ((std::cin >> c) && (c != '0')) {
		std::cout << c << std::endl;
		switch (c) {
			case 'a':
				++n;
				break;
			case 'e':
				++n;
				break;
			case 'i':
				++n;
				break;
			case 'o':
				++n;
				break;
			case 'u':
				++n;
				break;
		}
		break;
	}
	std::cout << n << std::endl;

}