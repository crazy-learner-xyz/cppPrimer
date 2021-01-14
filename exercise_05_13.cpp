#include <iostream>

int main(){
	std::string cur_word = "";
	std::string last_word = "";
	int cur_count = 0;

	std::string max_word = "";
	int max_times = 0;
	while ((std::cin >> cur_word) && (cur_word != "0")){
		if (cur_word == last_word){
			cur_count += 1;
			if (max_times < cur_count){
				max_times = cur_count;
				max_word = cur_word;
			}
		} else {
			cur_count = 1;
			last_word = cur_word;
		}
	}

	std::cout << max_word << "," << max_times << std::endl;
}