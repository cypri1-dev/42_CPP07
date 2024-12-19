/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:59:30 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/19 14:27:38 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;


	Array<int> arr1(5);
	for (unsigned int i = 0; i < arr1.size(); ++i)
		arr1[i] = i * 2;
	std::cout << "Array 1: ";
	for (unsigned int i = 0; i < arr1.size(); ++i)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;

	Array<int> arr2(arr1);
	std::cout << "Array 2 (after copy): ";
	for (unsigned int i = 0; i < arr2.size(); ++i)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;

	Array<int> arr3(3);
	arr3 = arr1;
	std::cout << "Array 3 (after assignment): ";
	for (unsigned int i = 0; i < arr3.size(); ++i)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;
	
	try {
		std::cout << arr1[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}