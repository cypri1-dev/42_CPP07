/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:41:36 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/19 14:49:01 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	size_t length = 5;

	std::cout << "Original array:" << std::endl;
	iter(arr, length, print);

	std::cout << "\nArray after increment:" << std::endl;
	iter(arr, length, increment); 
	iter(arr, length, print);

	return 0;
}