// Surcharge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Complexe.h"

int main()
{
    Complexe *c1 = new Complexe(3, 2);
    Complexe *c2 = new Complexe(2, -3);
    Complexe c3 = *c1 - *c2;
	Complexe c4 = *c1 * *c2;  
	Complexe c5 = *c1 / *c2; 
	double a = 5;
	Complexe c6 = *c1 - a;
	Complexe c7 = *c1 * a;  
	Complexe c8 = *c1 / a;
	if (*c1 == *c2)
	{
		std::cout << "c1 est egal a c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas egal a c2" << std::endl;
	}
	if (*c1 != *c2)
	{
		std::cout << "c1 est different de c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas different de c2" << std::endl;
	}
	if (*c1 <= *c2)
	{
		std::cout << "c1 est inferieur ou egal a c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas inferieur ou egal a c2" << std::endl;
	}
	if (*c1 >= *c2)
	{
		std::cout << "c1 est superieur ou egal a c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas superieur ou egal a c2" << std::endl;
	}
	if (*c1 < *c2)
	{
		std::cout << "c1 est inferieur a c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas inferieur a c2" << std::endl;
	}
	if (*c1 > *c2)
	{
		std::cout << "c1 est superieur a c2" << std::endl;
	}
	else
	{
		std::cout << "c1 n'est pas superieur a c2" << std::endl;
	}
	c1->afficher();
    c2->afficher();
    c3.afficher();
	c4.afficher();  
    c5.afficher();
    c6.afficher();
	c7.afficher();  
	c8.afficher();
    delete c1;
    c1 = nullptr;

    delete c2;
    c2 = nullptr;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
