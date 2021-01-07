#include <iostream>

using std::cout;
using std::cin;

int main(){
	//1.4.1的练习using "using"
	int tot = 0;
	int i=50;
	while (i<=100){
		tot += i;
		++i;
	}
	cout << tot << "\n";

	int low, high;
	if (cin >> low >> high){
		while (low<=high){
			tot += i;
			++i;
		}
	}

}