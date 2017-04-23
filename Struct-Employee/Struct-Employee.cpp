// Struct-Employee.cpp : Defines the entry point for the console application.
//

#include <iostream>

struct employee
{
	int employeeNumber;
	float compensation;

};

int main()
{

	employee employee1, employee2, employee3;

	std::cout << "Please provide details for 1st employee" << std::endl;
	std::cout << "employee number: ";
	std::cin >> employee1.employeeNumber;
	std::cout << "employee compenstation: ";
	std::cin >> employee1.compensation;
	std::cout << std::endl;

	std::cout << "Please provide details for 2nd employee" << std::endl;
	std::cout << "employee number: ";
	std::cin >> employee2.employeeNumber;
	std::cout << "employee compenstation: ";
	std::cin >> employee2.compensation;
	std::cout << std::endl;

	std::cout << "Please provide details for 3rd employee" << std::endl;
	std::cout << "employee number: ";
	std::cin >> employee3.employeeNumber;
	std::cout << "employee compenstation: ";
	std::cin >> employee3.compensation;
	std::cout << std::endl;


	std::cout << "Employee 1 details: " << std::endl;
	std::cout << "Number: " << employee1.employeeNumber << " compensation: " << employee1.compensation << " USD" << std::endl;

	std::cout << "Employee 2 details: " << std::endl;
	std::cout << "Number: " << employee2.employeeNumber << " compensation: " << employee2.compensation << " USD" << std::endl;

	std::cout << "Employee 3 details: " << std::endl;
	std::cout << "Number: " << employee3.employeeNumber << " compensation: " << employee3.compensation << " USD" << std::endl;


	system("pause");
    return 0;
}

