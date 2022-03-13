// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This is a program that calculates
// the total price of a pizza based
// on the diameter given by the user

#include <iostream>
#include <cmath>

float diameter, tax, subtotal, TotalCost;

int main() {
std::cout << "Input a pizza size in diameter: \n";
std::cin >> diameter;
subtotal = 4.25 + (1.50*diameter);
tax = subtotal*0.13;
TotalCost = tax + subtotal;
std::cout << "The subtotal cost is $" << subtotal << "\n";
std::cout << "The total cost is $" << TotalCost << "\n";
}
