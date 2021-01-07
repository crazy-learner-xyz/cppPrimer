#include <iostream>
#include <string>

int main(){
	const char cha1[] = "hello";
	const char cha2[] = "world";

	char cha3[100];
	strcpy(cha3,cha1);
	strcat(cha3,cha2);
	std::cout << cha3 << std::endl;
}