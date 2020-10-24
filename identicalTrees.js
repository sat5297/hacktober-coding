'use strict';

// write a function to determine if two trees are identical 

// functions signature will be to accept two trees as parameters and return a boolean true if they're identical, false if not

// approach is to use in-order traversal of each tree to populate an array with the values, and then compare the two arrays to see if they're identical

// assumes the tree inputs have basic tree properties on them like root, root.left and root.right

function determineIdentical(tree1, tree2) {

  let tree1Arr = [];

  let tree2Arr = [];

  
  function _preOrder1(root){

    tree1Arr.push(root);
    _preOrder1(root.left);
    _preOrder1(root.right);

  }

  function _preOrder2(root){

    tree2Arr.push(root);
    _preOrder2(root.left);
    _preOrder2(root.right);

  }

  _preOrder1(tree1.root);

  _preOrder2(tree2.root);

  if(tree1Arr === tree2Arr){
    return true;
  } else {
    return false;
  }

}