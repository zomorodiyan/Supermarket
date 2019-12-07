// Supermarket.cpp : This file contains the 'main' function.
// Program execution begins and ends there.

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "\nSupermarket is a TDD practice project which contains Checkout class with the fallowing methodes:\n"; 
    std::cout << "  input methodes:\n"; 
	std::cout << "    void addItemPrice(std::string item, int price)\;\n";
	std::cout << "    void addItem(std::string item)\; // throws \"invalid argument\" exception if the item has no price.\n";
	std::cout << "    void addDiscount(std::string item, int nbrOfItems, int discountPrice)\;\n";
    std::cout << "  Output methode:\n"; 
	std::cout << "    int calculateTotal()\;\n";
}
