//
//  bstWithParent.cpp
//  algorithms
//
//  Created by alifar on 7/4/16.
//  Copyright © 2016 alifar. All rights reserved.
//

#include "bstWithParent.hpp"

BstNodeWithParent::BstNodeWithParent(int data){
    this->data = data;
    this->left = 0;
    this->right = 0;
    this->parent = 0;
}

BstWithParent::BstWithParent(){
    this->root = 0;
}

BstNodeWithParent * BstWithParent::getRoot(){
    return this->root;
}

void BstWithParent::setRoot(BstNodeWithParent *node){
    this->root = node;
}

BstNodeWithParent * BstWithParent::insert(BstNodeWithParent *root, int data) {
    BstNodeWithParent *node = new BstNodeWithParent(data);
    if(!root){
        return node;
    }
    BstNodeWithParent *tmp = 0;
    if(data >= root->data){
        tmp = this->insert(root->right, data);
        root->right = tmp;
        tmp->parent = root;
    } else{
        tmp = this->insert(root->left, data);
        root->left = tmp;
        tmp->parent = root;
    }
    return root;
}

BstNodeWithParent * BstWithParent::search(BstNodeWithParent *root, int key){
    if(!root || root->data == key){
        return root;
    }
    if(key > root->data){
        return this->search(root->right, key);
    }
    return this->search(root->left, key);
}

BstNodeWithParent * BstWithParent::findMin(BstNodeWithParent *node){
    if(!node) return node;
    while(!node){
        node = node->left;
    }
    return node;
}

BstNodeWithParent * BstWithParent::remove(BstNodeWithParent *root, int key){
    if(!root) return root;
    if(key > root->data){
        root->right = this->remove(root->right, key);
    } else if(key < root->data){
        root->left = this->remove(root->left, key);
    } else{
        if(!root->left){
            BstNodeWithParent *tmp = root->right;
            delete root;
            return tmp;
        } else if(!root->right){
            BstNodeWithParent *tmp = root->left;
            delete root;
            return tmp;
        } else{
            BstNodeWithParent *minRight = this->findMin(root->right);
            root->data = minRight->data;
            root->right = this->remove(root->right, minRight->data);
        }
    }
    return root;
}
