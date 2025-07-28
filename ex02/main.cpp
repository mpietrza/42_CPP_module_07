/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:37:29 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/28 17:14:26 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	std::cout << "\n|------checking the default constructor------|\n" << std::endl;
	Array<int> a;
	std::cout << "Default constructed array size: " << a.size() << std::endl;

	std::cout << "\n|------checking the parametrized constructor------|\n" << std::endl;
	Array<int> b(5);
	std::cout << "Parametrized array size: " << b.size() << std::endl;

	std::cout << "\n|------checking element assignment and access------|\n" << std::endl;
	for (unsigned int i = 0; i < b.size(); ++i)
		b[i] = i * 10;
	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << "b[" << i << "] = " << b[i] << std::endl;

	std::cout << "\n|------checking copy constructor------|\n" << std::endl;
	Array<int> c(b);
	std::cout << "Copied array c from b:" << std::endl;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << "c[" << i << "] = " << c[i] << std::endl;

	std::cout << "\n|------checking if the change of the values of b doesn't change c-----|\n" << std::endl;
	b[0] = 42;
	b[1] = 777;
	b[2] = 123;
	b[3] = 0;
	b[4] = 999;

	for (unsigned int i = 0; i < (b.size() < c.size() ? b.size() : c.size()); ++i)
		std::cout << "b[" << i << "] = " << b[i] << "; c[" << i << "] = " << c[i] << std::endl;

	std::cout << "\n|-----checking the assignment operator------|\n" << std::endl;
	Array<int> d;
	d = c;
	std::cout << "Assigned array d from c:" << std::endl;
	for (unsigned int i = 0; i < d.size(); ++i)
	std::cout << "d[" << i << "] = " << d[i] << std::endl;

	std::cout << "\n|-----checking out-of-bounds exception------|\n" << std::endl;
	try {
		std::cout << "Trying to access b[999]..." << std::endl;
		std::cout << b[999] << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << "\n|-----checking array of strings------|\n" << std::endl;
	Array<std::string> strArr(3);
	strArr[0] = "It is";
	strArr[1] = "an array";
	strArr[2] = "of strings";
	for (unsigned int i = 0; i < strArr.size(); ++i)
		std::cout << "strArr[" << i << "] is: " << strArr[i] << std::endl;

	return 0;
}
