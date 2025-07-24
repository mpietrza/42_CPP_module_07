/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:14:11 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/14 18:22:08 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
T min(T &a, T &b) {
	return (a < b ? a : b);
}

template <typename T>
T max(T &a, T &b) {
	return (a > b ? a : b);
}

#endif
