'use strict';

// print the inOrder traversal of a tree
// replies on the Binary Tree class implementation with Nodes that have value, left, and right properties on them


class BinaryTree {

  constructor( root = null) {
    this.root = root;
  }

  inOrder() {

    const arr = [];

    function _inOrder(root) {

      if(!root){
        return;
      }

      _inOrder(root.left);
      arr.push(root.value);
      _inOrder(root.right);
    }

    _inOrder(this.root);
    return arr;
  }

}

class Node {

  constructor(value, left = null, right = null) {
    this.value = value;
    this.left = left;
    this.right = right;
  }

}