/*Program File Name: Checkpoint2.14
Programmer: Marvin McCuller
Date: August 2024
Requirements:
Write a program that has the following character variables:
first, middle, and last. Store your initials in these variables
then display them on the screen.
*/


#include <iostream>


int main()
{
	char firstinitial;
	char middleinitial;
	char lastinitial;
	std::cout << "Please enter the initial of your first name:";
	std::cin >> firstinitial;
	std::cout << "Please enter the  initial of your middle name:";
	std::cin >> middleinitial;
	std::cout << "Please enter the initial of your last name:";
	std::cin >> lastinitial;
	std::cout << "Your initials are:" << firstinitial << middleinitial << lastinitial;
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
