/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:59:34 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/19 01:14:11 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		T* _arr;
		unsigned int _size;

	public:
		Array() : _arr(0), _size(0) {}
		Array(unsigned int size) : _arr(new T[size]()), _size(size) {}
		Array(const Array &other) : _arr(new T[other._size]), _size(other.size) {
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = other._arr[i];
		}
		Array &operator=(const Array &other) {
			if (this != &other) {
				delete [] _arr;
				_size = other._size;
				_arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_arr[i] = other._arr[i];
			}
			return (*this);
		}
		~Array() {
			delete[] _arr;
		}
};

#endif