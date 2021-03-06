//
//  main.cpp
//  algorithms. weighted k-ary tree application.
//
//  Created by alifar on 02/25/16.
//  Copyright © 2016 alifar. All rights reserved.
//

#include "max_weighted_path.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char *argv[]){
	cout << "==== Weighted K-ary Tree. Max Weighted Path ====" << endl;
	WeightedKTree<char> tree;
	char item, parent_char;
	int weight;
	int number_of_items = 0;
	cout << "---> Enter a number of items to be inserted into a tree: ";
	cin >> number_of_items;
	for(int i = 0; i < number_of_items; ++i){
		cout << "---> Enter item, weight and parent to insert into a tree: ";
		cin >> item;
		cin >> weight;
		cin >> parent_char;
		KWNode<char> *parent_node = tree.Search(parent_char);
		tree.Insert(item, weight, parent_node);
	}
	cout << "Traversing tree:" << endl;
	tree.Traverse();
	cout << endl;

	cout << MaxWeightKTree(tree.get_root()) << endl;

	return 0;
}
