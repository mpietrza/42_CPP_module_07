/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:56:12 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/28 17:05:11 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(NULL), _n(0) {
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(NULL), _n(n) {
	std::cout << "Array unsigned int n parametrized constructor called" << std::endl;
	if (_n)
		_arr = new T[_n];
}

template <typename T>
Array<T>::Array(const Array &other) : _arr(NULL), _n(0) {
	std::cout << "Array copy constructor called" << std::endl;
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
	std::cout << "Array copy assignment operator called" << std::endl;
	if (this != &other)
	{
		if (_arr && _n)
			delete [] _arr;
		_arr = NULL;
		_n = other._n;
		if (_n)
			_arr = new T[_n];
		for (unsigned int i = 0; i < _n; i++) //not ++i ?
			_arr[i] = other._arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Array default destructor called" << std::endl;
	if (_arr && _n)
		delete [] _arr;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (!_arr || !_n || _n <= index)
		throw std::out_of_range("Index is out of range");
	return _arr[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
	if (!_arr || !_n || _n <= index)
		throw std::out_of_range("Index is out of range");
	return _arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _n;
}

#endif