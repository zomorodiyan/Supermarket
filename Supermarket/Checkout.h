#pragma once
#include <string>
#include <map>

class Checkout
{
public:
	Checkout();
	~Checkout();
	void addItemPrice(std::string item, int price);
	void addItem(std::string item);
	int calculateTotal();
	void addDiscount(std::string item, int nbrOfItems, int discountPrice);
protected:
	struct Discount{
		int nbrOfItems;
		int discountPrice;
	};
	std::map<std::string, int> items;
	std::map<std::string, int> prices;
	std::map<std::string, Discount> discounts;
	int total;
	void calculateItem(std::string item, int ItemCnt);
	void calculateDiscount(std::string item, int ItemCnt, Discount discount);
};

