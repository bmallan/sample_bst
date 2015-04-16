/*
 * Name        : bst_node.cpp
 * Author      : B Mallan
 * Description : Base code for a binary search tree node .h file
 * Resources   : 
 *               
 *               
 *               
 *               
 *               
 *
 */
#ifndef MALLAN_BST_NODE_H
#define MALLAN_BST_NODE_H

#include <iostream>
#include<sstream>
#include<cstddef>

using std::endl;
using std::cout;
using std::stringstream;

class BSTNode {
 public:
  // default constructor, sets left and right child to NULL
  // and the contents to 0
  BSTNode();
  // overloaded constructor, int parameter assigned to the contents
  // @ param      : int input sets a node with a predetermined input.
  BSTNode(int input);
  // destructor, sets left and right child to NULL and contents to 0
  ~BSTNode();
  // Mutator for contents set to a passed value input
  // @param         : int input - input that is passed to set the contents of
  //                  a new node.
  void SetContents(int input);

  // Accessor to get the value of contents with the
  // const modifier to prevent the change of the values.
  // @return       : int returns the value of the contents
  int GetContents() const;

  // Accessor to get the value of contents as a call by reference value
  // @return       : int& returns the value of the contents
  int& GetContents();

  // Mutator for setting the node of the left child
  // @param        : BSTNode - the new setter for the node (address) of tree
  void SetLeftChild(BSTNode* node);

  // Mutator for setting the node of the right child
  // @param        : BSTNode - the new setter for the node (address) of tree
  void SetRightChild(BSTNode* node);

  // Accessor for left child in a call by value
  // @return       :BSTNode* returns the value of the left child
  BSTNode* GetLeftChild() const;
  // Accessor for left child in a call by reference;
  // @return       : BSTNode* returns the reference of the left child
  BSTNode*& GetLeftChild();

  // Accessor for right child in a call by value
  // @return       :BSTNode* returns the value of the right child
  BSTNode* GetRightChild() const;
  // Accessor for right child in a call by reference;
  // @return       :BSTNode* returns the reference of the right child
  BSTNode*& GetRightChild();

 private:
  // Left and right nodes of the binary search tree variables
  BSTNode* l_child_;
  BSTNode* r_child_;
  // Int to hold the data of the BST
  int data_;
};

#endif  /* MALLAN_BST_NODE_H */
