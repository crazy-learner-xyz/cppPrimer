#include <iostream>

struct SalesBook{
	std::string bookNo = "";
	double bookPrice = 0.0;
	int numBookSold = 0;
	double totalSales = 0.0;
};

int main(){
	// Read data points from input, and then output the total revenue.
	SalesBook book1;
	std::string curBookNo;
	double curBookPrice;
	int curNumSold;
	double totalRevenue = 0.0;
	while (std::cin >> curBookNo >> curBookPrice >> curNumSold){
		totalRevenue += curBookPrice * curNumSold;
	}
	std::cout << "totalRevenue" << totalRevenue << "\n";

}