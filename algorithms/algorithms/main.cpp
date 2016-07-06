//
//  main.cpp
//  algorithms
//
//  Created by alifar on 6/24/16.
//  Copyright © 2016 alifar. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

/* In order to run one of the tests including of appropriate .hpp file is required 
   ex. : #include "factorial_fibonacci.hpp" then comment out section marked TEST: Fibonacci and Factorial DP */


int main(int argc, const char * argv[]) {
    

// TEST: Pairs of the same diff: pairs.hpp
//    int diff = 2;
//    std::vector<int> arr = {1,5,3,4,2};
//    std::cout << pairs(arr, diff) << std::endl;
    
// TEST: Row in Pascal's Triangle by number: pascalsTriangle.hpp
//    int k = 5;
//    std::vector<int> row = rowInPascalsTriangle(k);
//    for(auto it: row){
//        std::cout << it << " ";
//    }
//    std::cout << std::endl;

// TEST: Max Stock Profit: maxProfitInStock.hpp
//    std::vector<int> prices = {10, 7, 11, 5, 8, 9};
//    std::cout << maxStockProfit(prices) << std::endl;

// TEST: Product of all numbers in array except itself: productAllNumsExceptItself.hpp
//    const std::vector<int> numbers = {3,2,4,1,5};
//    std::cout << numbers.size() << std::endl;
//    std::vector<int> result1 = productOfAllNumExceptItself(numbers);
//    std::cout << "Brute Force: " << std::endl;
//    for(auto it: result1){
//        std::cout << it << " ";
//    }
//    std::cout << std::endl;
//    std::vector<int> result2 = productOfAllNyumbersExceptItselfLinear(numbers);
//    std::cout << "Linear complexity: " << std::endl;
//    for(auto it: result2){
//        std::cout << it << " ";
//    }
//    std::cout << std::endl;

// TEST: Lowest Common Ancestor: lowestCommonAncestor.hpp
//    Lca *tree = new Lca();
//    tree->setRoot(tree->insert(tree->getRoot(), 6));
//    tree->setRoot(tree->insert(tree->getRoot(), 7));
//    tree->setRoot(tree->insert(tree->getRoot(), 10));
//    tree->setRoot(tree->insert(tree->getRoot(), 3));
//    tree->setRoot(tree->insert(tree->getRoot(), 4));
//    tree->setRoot(tree->insert(tree->getRoot(), 5));
//    tree->setRoot(tree->insert(tree->getRoot(), 2));
//    
//    BstNodeWithParent *n1 = tree->search(tree->getRoot(), 2);
//    BstNodeWithParent *n2 = tree->search(tree->getRoot(), 5);
//    
//    std::cout << tree->lowestCommonAncesrotRoot(tree->getRoot(), n1, n2)->data << std::endl;
//    std::cout << tree->lowestCommonAncestorParent(n1, n2)->data << std::endl;
   
// TEST: check if trees are equal: equalTree.hpp (+ binarySearchTree.hpp)
//    Bst *tree1 = new Bst();
//    Bst *tree2 = new Bst();
//    tree1->insert(7);
//    tree1->insert(9);
//    tree1->insert(8);
//    tree1->insert(5);
//    tree1->insert(6);
//    
//    tree2->insert(7);
//    tree2->insert(9);
//    tree2->insert(8);
//    tree2->insert(5);
//    tree2->insert(6);
//    
//    std::cout << equalTrees(tree1->getRoot(), tree2->getRoot()) << std::endl; // cout 1 if true, 0 if false
    
// TEST: calculate the longest list of non-related nodes: nonRelativeNodes.hpp (+ binarySearchTree.hpp)
//    Bst *tree = new Bst();
//    tree->insert(7);
//    tree->insert(5);
//    tree->insert(10);
//    tree->insert(6);
//    tree->insert(3);
//    tree->insert(4);
//    tree->insert(1);
//    tree->insert(8);
//    tree->insert(11);
//    tree->insert(9);
//    tree->insert(12);
//    
//    std::vector<Tnode *> non_related_nodes = nonRelativeNodes(tree->getRoot());
//    for(auto it: non_related_nodes){
//        std::cout << it->data << " "; // 10 5 12 9 4 1
//    }
//    std::cout << std::endl;

// TEST: In Order Successor in BST: bstInorderSuccessor.hpp
//    bstSuccessor *tree = new bstSuccessor();
//    tree->setRoot(tree->insert(tree->getRoot(), 5));
//    tree->setRoot(tree->insert(tree->getRoot(), 7));
//    tree->setRoot(tree->insert(tree->getRoot(), 10));
//    tree->setRoot(tree->insert(tree->getRoot(), 3));
//    tree->setRoot(tree->insert(tree->getRoot(), 4));
//    BstNodeWithParent *temp = tree->getRoot()->left->right;
//    std::cout << tree->findSuccessorByParent(temp)->data << std::endl;
//    std::cout << tree->findSuccessorByRoot(tree->getRoot(), temp)->data << std::endl;

// TEST: Drone Flight Planning. both solutions: droneFlightPlanner.hpp
//    std::vector<int> coordinates {10, 0, 6, 15, 8};
//    std::cout << littersRequired(coordinates) << std::endl;
//    std::cout << littersRequiredSimple(coordinates) << std::endl;

// TEST: deletion from BST: bstTraversals.hpp or binarySearchTree.hpp
//    Bst *tree = new Bst();
//    tree->insert(4);
//    tree->insert(6);
//    tree->insert(2);
//    tree->insert(5);
//    tree->insert(8);
//    tree->insert(3);
//    tree->insert(1);
//    std::cout << "Current root:" << tree->getRoot()->data << std::endl;
//    std::cout << "In Order Traversal:" << std::endl;
//    inOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    tree->setRoot(tree->remove(4));
//    std::cout << "Current root:" << tree->getRoot()->data << std::endl;
//    std::cout << "In Order Traversal:" << std::endl;
//    inOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    tree->setRoot(tree->remove(2));
//    std::cout << "Current root:" << tree->getRoot()->data << std::endl;
//    std::cout << "In Order Traversal:" << std::endl;
//    inOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    tree->setRoot(tree->remove(3));
//    std::cout << "Current root:" << tree->getRoot()->data << std::endl;
//    std::cout << "In Order Traversal:" << std::endl;
//    inOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
    
// TEST: BST insertion, search for key, find Min, find min in a subtree: binarySearchTree.hpp or bstTraversals.hpp
//    Bst *tree = new Bst();
//    tree->insert(4);
//    tree->insert(6);
//    tree->insert(2);
//    tree->insert(5);
//    tree->insert(8);
//    tree->insert(3);
//    tree->insert(1);
//    std::cout << tree->search(3)->data << std::endl;
//    std::cout << tree->findMin()->data << std::endl;
//    std::cout << tree->findSubtreeMin(tree->search(6))->data << std::endl;
    
// TEST: BST Traversals: bstTraversals.hpp
//    Bst *tree = new Bst();
//    tree->insert(4);
//    tree->insert(6);
//    tree->insert(2);
//    tree->insert(5);
//    tree->insert(8);
//    tree->insert(3);
//    tree->insert(1);
//    std::cout << "Pre Order Traversal:" << std::endl;
//    preOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "In Order Traversal:" << std::endl;
//    inOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "Post Order Traversal:" << std::endl;
//    postOrderTraversal(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "In Order Traversal using Stack:" << std::endl;
//    inOrderTraversalStack(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "In Order Traversal Morris:" << std::endl;
//    inOrderTraversalNoRecursion(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "Breadth First Traversal using Queue:" << std::endl;
//    breadthFirstTraversalQueue(tree->getRoot());
//    std::cout << std::endl;
//    std::cout << "Breadth First Traversal using Height:" << std::endl;
//    breadthFirstTraversalHeight(tree->getRoot());
//    std::cout << std::endl;
    
// TEST: Reverse a sentance: sentecReverse.hpp
//    std::string array = "practice reverse words";
//    char arr[22];
//    std::strcpy(arr, array.c_str());
//    
//    reverseWords(arr, 23);
//    for(int i=0; i<23; ++i){
//        std::cout << arr[i];
//    }
//    std::cout << std::endl;

// TEST: split string
//    std::string str("Split me by spaces");
//    std::string buf;
//    std::stringstream ss(str);
//    
//    std::vector<std::string> tokens;
//    while(ss >> buf)
//        tokens.push_back(buf);
//    
//    for (std::vector<std::string>::const_iterator i = tokens.begin(); i != tokens.end(); ++i)
//        std::cout << *i << std::endl;
    
// TEST: Knapsack 1-0 problem: knapsackProblem.hpp
//    int n_items = 5;
//    int capacity = 11;
//    int *values = new int[n_items];
//    int *weights = new int[n_items];
//    values[0] = 1; weights[0] = 1;
//    values[1] = 6; weights[1] = 2;
//    values[2] = 18; weights[2] = 5;
//    values[3] = 22; weights[3] = 6;
//    values[4] = 28; weights[4] = 7;
//    maxValueforKnapsack(capacity, n_items, values, weights);
    
// TEST: ways to calculate amount with give list of debominations: amountWithCoins.hpp
//    int *denominations = new int[3];
//    denominations[0] = 1;
//    denominations[1] = 2;
//    denominations[2] = 3;
//    std::cout << waysToGetAmount(6, denominations) << std::endl;
    
// TEST: Jump Stairs tasks DP: hopSomeStairs.hpp
//    std::cout << walkThoughStairs(10) << std::endl;
    
// TEST: Fibonacci and Factorial DP: factorial_fibonacci.hpp
//    std::cout << fibonacci(45) << std::endl;
//    std::cout << factorial(15) << std::endl;
    
// TEST: Binomial coefficients calculation: binomialCoefficient.hpp
//    std::cout << bimonialCoefficient(5,4) << std::endl;
    
// TEST: Stack using Queue: stackFromQueue.hpp
//    {
//        using namespace stackFromQueue;
//        Stack *stack = new Stack();
//        
//        stack->push(1);
//        stack->push(2);
//        stack->push(3);
//        
//        std::cout << stack->pop() << std::endl;
//        std::cout << stack->pop() << std::endl;
//        std::cout << stack->pop() << std::endl;
//    }
    
// TEST: Queue using stack: QueueFromStack.hpp
//    Queue *q = new Queue();
//    q->enqueue2(1);
//    q->enqueue2(3);
//    q->enqueue2(5);
//    q->enqueue2(9);
//    std::cout << q->dequeue2() << std::endl;
//    std::cout << q->dequeue2() << std::endl;
//    q->enqueue2(15);
//    std::cout << q->dequeue2() << std::endl;
//    std::cout << q->dequeue2() << std::endl;
    
// TEST: stack using class: QueueFromStack.hpp
//    Stack *stack = new Stack();
//    stack->push(3);
//    stack->push(5);
//    stack->push(6);
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
//    
//    stack->push(9);
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
    
// TEST: stack using linked list: stackUsingLinkedList.hpp
//    stackNode *head = newNode(1);
//    push(&head, 2);
//    push(&head, 3);
//    push(&head, 4);
//    std::cout << pop(&head) << std::endl;
//    std::cout << peek(head) << std::endl;
//    std::cout << " ================== " << std::endl;

// TEST: queue using linked list: queueUsingLinkedList.hpp
//    Queue *q = createQueue();
//    enqueue(q, 2);
//    enqueue(q, 4);
//    enqueue(q, 5);
//    std::cout << dequeue(q)->data << std::endl;
//    std::cout << dequeue(q)->data << std::endl;
    return 0;
}
