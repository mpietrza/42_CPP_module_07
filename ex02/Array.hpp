/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:44:13 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/28 17:07:58 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _n; //size

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();
		
		T &operator[](unsigned int index); //non-const version for non-const objects
		const T &operator[](unsigned int index) const; //const version for const objects

		//getter
		unsigned int size() const;

};

#include "Array.tpp"
#endif
