/*
 * Name        : bst_tree.h
 * Author      : B Mallan
 * Description : Base code for a binary search tree node .h file
 * Resources   : I wish to give many thanks to Boyd, Walter and 
 *               Absolute C ++ for their assistance with this assignment.
 *
 *
 *
 *
 *
 *
 */

// Header guards
#ifndef MALLAN_BST_TREE_H
#define MALLAN_BST_TREE_H

// Needed using and include statements
#include <iostream>
#include<sstream>
#include<cstddef>
#include "bst_node.h"
#include <string>

using std::endl;
using std::cout;
using std::stringstream;
using std::string;

class BSTree {
 public:
  // default constructor, sets the root to NULL and size to 0
  BSTree();

  // destructor, calls the Clear function
  ~BSTree();

  // bool Insert(int), calls private function Insert(int, root)
  // @param     : int input - the value to place into the tree
  bool Insert(int input);

  // void Clear(), call private function Clear(root)
  void Clear();

  // unsigned int GetSize() const
  // @return     : unsigned int returned current size of array
  unsigned int GetSize() const;

  // string InOrder (), call private function InOrder(root)
  // @return     : returns the contents of the tree as a string
  string InOrder();

 private:
  // bool Insert (int insert , BSTNode*&),
  // Create a new BSTNode and insert it into the tree, returns
  // true; if integer is already in the true, does not insert,
  // returns false
  // @param          : int insert - value to be inserted into array
  // @param          : BSTNode*& test_ node to be inserted
  // @return         : returns if the node was inserted into the tree or not
  bool Insert(int insert, BSTNode*& t_root_);

  // void Clear (BSTNode*&),
  // Clear the entire contents of the tree, freeing all memory
  // associated with all nodes
  void Clear(BSTNode*& test_);

  // string InOrder (BSTNode*),
  // Creates a string of the data in all nodes in the tree,
  // in ascending order, separate by spaces (there should be a
  // space after the last output value)
  // @param     : BSTNode* test_ - call by value root node
  // @return    : string  -  string to return to calling function
  string InOrder(BSTNode* test_);

  // permanent and temporary nodes of the binary search tree variables
  BSTNode* t_root_;
  unsigned int number_nodes_;
};

#endif  /* MALLAN_BST_TREE_H */
