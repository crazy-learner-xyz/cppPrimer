
#include <iostream>
using std::cin;
using std::cout;

int main(){
	std::string w1;
	std::string w2;
	cin >> w1 >> w2;
	if (w1 == w2){
		cout << "equal" <<"\n";
	} else if (w1 > w2) {
		cout << w1 <<"\n";
	} else if (w1 < w2) {
		cout << w2 <<"\n";
	}

	if (w1.size()>w2.size()){
		cout << w1 <<"\n";
	} else {
		cout << w2 <<"\n";
	}

}