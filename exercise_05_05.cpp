#include<iostream>

int main(int argc, char *argv[]){
	int num = atoi(argv[1]);
    std::string lettergrade;
    lettergrade = (num / 10 > 6) ? "A" : "C";
	std::cout << lettergrade << std::endl;

}