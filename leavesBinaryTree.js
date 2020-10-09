'use strict';

// JavaScript implementation of a function that finds the number of leaves in a binary tree
// function's signature is a binary tree as a parameter, returns the number of leaves in the tree
// relies on the assumption that the input is a binary tree with a root, and made up of nodes with left and right properties on them, as illustrated below
// function uses preOrder depth traversal method

class Node {

  constructor(value, left = null, right = null) {
    this.value = value;
    this.left = left;
    this.right = right;
  }

}

class BinaryTree {

  constructor( root = null) {
    this.root = root;
  }

}

function numLeavesInTree(binaryTree) {

  let numLeaves = 0;

  function _preOrderTraversal(root) {

    if(!root) {
      return;
    }

    numLeaves += 1;
    _preOrderTraversal(root.left);
    _preOrderTraversal(root.right);

  }

  _preOrderTraversal(binaryTree.root);
  return numLeaves;

}
