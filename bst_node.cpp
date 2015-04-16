/*
 * Name        : bst_node.cpp
 * Author      : B Mallan
 * Description : Base code for a binary search tree node cpp file
 * Resources   :
 *
 *
 *
 *
 *
 *
 */
#include "bst_node.h"

// Constructor
// default constructor, sets left and right child to NULL
// and the contents to 0
BSTNode::BSTNode() {
  l_child_ = NULL;
  r_child_ = NULL;
  // Int to hold the data of the BST
  data_ = 0;
}

// overloaded constructor, int parameter assigned to the contents
// and the left and right nodes equal to null
// @ param      : int input sets a node with a predetermined input.
BSTNode::BSTNode(int input) {
  l_child_ = NULL;
  r_child_ = NULL;
  data_ = input;
}

// destructor, sets left and right child to NULL and contents equal to zero.
BSTNode::~BSTNode() {
  l_child_ = NULL;
  r_child_ = NULL;
  data_ =0;
}

// Class functions and Descriptions
// Mutator for contents set to a passed value input
void BSTNode::SetContents(int input) {
  data_ = input;
}

// Accessor to get the value of contents with the
// const modifier to prevent the change of the values.
int BSTNode::GetContents() const {
  return data_;
}

// Accessor to get the value of contents as a call by reference value
int& BSTNode::GetContents() {
  return data_;
}

// Mutator for setting the node of the left child
// @param        : BSTNode - the new setter for the node (address) of tree
void BSTNode::SetLeftChild(BSTNode* node) {
  l_child_ = node;
}

// Mutator for setting the node of the right child
// @param        : BSTNode - the new setter for the node (address) of tree
void BSTNode::SetRightChild(BSTNode* node) {
  r_child_ = node;
}

// Accessor for left child in a call by value
// @return       : returns the value of the left child
BSTNode* BSTNode::GetLeftChild() const {
  return l_child_;
}

// Accessor for left child in a call by reference;
// @return       : returns the reference of the left child

BSTNode*& BSTNode::GetLeftChild() {
  return l_child_;
}

// Accessor for right child in a call by value
// @return       : returns the value of the right child
BSTNode* BSTNode::GetRightChild() const {
  return r_child_;
}

// Accessor for right child in a call by reference;
// @return       : returns the reference of the right child
BSTNode*& BSTNode::GetRightChild() {
  return r_child_;
}
