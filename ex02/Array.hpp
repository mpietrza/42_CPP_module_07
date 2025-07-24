/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:44:13 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/24 18:07:24 by mpietrza         ###   ########.fr       */
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
		
		T& operator[](unsigned int index); //maybe const? but it can be risky
		
		//exception
		class InvalidIndexException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		//getter
		unsigned int getSize() const;

};

#endif
