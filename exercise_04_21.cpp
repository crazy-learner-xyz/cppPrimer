#include<vector>
#include<iostream>

using std::cout;

int main(){
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9};
	for (auto c: vec){
		if ((c) % 2 == 1){
			cout << c * 2 <<std::endl;
		}
		else {
			cout << c <<std::endl;			
		}
	}

}