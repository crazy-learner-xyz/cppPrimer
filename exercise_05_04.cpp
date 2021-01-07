#include<iostream>

int main(int argc, char *argv[]){
    std::cout << argv[1] << std::endl;
	int num = atoi(argv[1]);
    std::string lettergrade;
    std::cout << num << std::endl;
	if (num / 10 > 6){
		lettergrade = "A";
	} else {
		lettergrade = "C";
	}
	std::cout << lettergrade << std::endl;

}