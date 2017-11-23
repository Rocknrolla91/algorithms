//
//  main.cpp
//  algorithms. Sorting. Implementations
//
//  Created by alifar on 11/23/17.
//  Copyright © 2017 alifar. All rights reserved.

#include "sorting.hpp"
#include <iostream>

using sort_function = std::function<std::vector<int>(const std::vector<int> &)>;

void print_array(const std::vector<int> &array){
	for(auto it: array){
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

void sort_run(sort_function sort_func, std::vector<int> to_sort){
	std::cout << "Given array: ";
	print_array(to_sort);
	std::vector<int> result;
	result = sort_func(to_sort);
	print_array(result);
}

int main(int argc, const char *argv[]){

	std::cout << "== Sorting array ==" << std::endl;

	std::cout << "Enter integer items to sort and hit Enter: ";
	std::vector<int> items;
	int num;
	do{
		std::cin >> num;
		items.push_back(num);
	} while(std::cin.get() != '\n');

	sort_run(selection_sort, items);
}
