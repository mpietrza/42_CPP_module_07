/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpietrza <mpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:27:09 by mpietrza          #+#    #+#             */
/*   Updated: 2025/07/14 18:49:19 by mpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

/**
 * @brief Applies a function to each element of an array.
 * two template parameters:
 * - `T` is the type of the array elements (e.g., `int`, `double`, `std::string`, etc.).
 * - `F` is the type of the function or callable object passed as the third argument
 *   (e.g., a function pointer, lambda, or functor).

 * @param arr The array to iterate over.
 * @param len The length of the array.
 * @param func The function to apply to each element.
 * @tparam T The type of the elements in the array.
 * @tparam F The type of the function to apply.
 * 
 */
template <typename T, typename F>
void iter(T* arr, size_t len, F func) {
	for (size_t i = 0; i < len; ++i) {
		func(arr[i]);
	}
}

#endif
