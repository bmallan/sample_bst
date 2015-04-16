/*
 * Name        : bs_tree.cpp
 * Author      : B Mallan
 * Description : Base code for a binary search tree node cpp file
 * Resources   :
 *
 */
#include "bst_node.h"
#include "bs_tree.h"
  // default constructor, sets the root to NULL and size to 0
BSTree::BSTree() {
t_root_ = NULL;
number_nodes_ = 0;
}

// destructor, calls the Clear function
BSTree::~BSTree() {
  Clear();
}

// bool Insert(int), calls private function Insert(int, root)
// @param     : int input - the value to place into the tree
bool BSTree::Insert(int input) {
  return Insert(input, t_root_);
}

// void Clear(), call private function Clear(root)
void BSTree::Clear() {
  Clear(t_root_);
}

// unsigned int GetSize() const
// @return     : unsigned int returned current size of array
unsigned int BSTree::GetSize() const {
  return number_nodes_;
}

// string InOrder (), call private function InOrder(root)
// @param      : Root of the tree to return
// @return     : returns the contents of the tree as a string
string BSTree::InOrder() {
  return InOrder(t_root_);
}

// bool Insert (int insert , BSTNode*&),
//   Create a new BSTNode and insert it into the tree, returns
//   true; if integer is already in the true, does not insert,
//   returns false
bool BSTree::Insert(int input, BSTNode*& t_root_) {
  // if root is equal to NULL create a new root with input value & increase
  // count of nodes.
  if (t_root_ == NULL) {
    t_root_ = new BSTNode(input);
    number_nodes_++;
    return true;
  // call if input value is less than root then call recursive function
  // with left child
  } else if (input < t_root_->GetContents()) {
    return Insert (input, t_root_->GetLeftChild());
  // call if input value is more than root then call recursive function
  // with the right child
  } else if (input > t_root_->GetContents()) {
    return Insert (input, t_root_->GetRightChild());
  // if input == root then return false and don't add node
  } else {
    return false;
  }
  // force return to one of the outlets
  return -1;
}

// void Clear (BSTNode*&),
// Clear the entire contents of the tree, freeing all memory
// associated with all nodes
void BSTree::Clear(BSTNode*& t_root_) {
  // if root is not equal to null
  if (t_root_ != NULL) {
    // Call a recursive function to clear the left child
    Clear(t_root_ ->GetLeftChild());
    // Call a recursive function to clear the right child
    Clear(t_root_->GetRightChild());
    // When at the leaf node delete the leaf
    delete t_root_;
    // set that pointer to NULL
    t_root_ = NULL;
    // decrement number of nodes
    number_nodes_--;
  }
}

// string InOrder (BSTNode*),
// Creates a string of the data in all nodes in the tree,
// in ascending order, separate by spaces (there should be a
// space after the last output value)
string BSTree::InOrder(BSTNode* t_root_) {
  // initialize the stringstream output
  stringstream output;
  // if root is not null
  if (t_root_ != NULL) {
    // call the recursive function InOrder to get the left child
    // and puts the returned value in the output stream
    output << InOrder(t_root_ ->GetLeftChild());
    // puts the contents of the temp root into the stringstream
    output << t_root_ -> GetContents() << " ";
    // calls the recursive function InOrder to get the right child
    // and puts the returned value in the output stream
    output << InOrder(t_root_ -> GetRightChild());
  }
  // returns the output stream as a string.
  return output.str();
}
