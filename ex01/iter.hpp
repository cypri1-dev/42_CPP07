/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:41:57 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/19 00:50:17 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&)) {
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void print(T& element) {
	std::cout << element << std::endl;
}

template <typename T>
void increment(T& element) {
	++element;
}