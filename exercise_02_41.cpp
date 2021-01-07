#include <iostream>

struct SalesBook{
	std::string bookNo = "";
	double bookPrice = 0.0;
	int numBookSold = 0;
	double totalSales = 0.0;
};

int main(){
	SalesBook book1;
	std::cout << "bookNo" << book1.bookNo << "\n";
	std::cout << "bookPrice" << book1.bookPrice << "\n";
	std::cout << "numBookSold" << book1.numBookSold << "\n";
	std::cout << "totalSales" << book1.totalSales << "\n";

}