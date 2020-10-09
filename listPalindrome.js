'use strict';

// Javascript implementation of a stand alone function that determines if a linked list is a palindrome 
// function's signature is a linked list as a parameter and returns true if it's a palindrome, false if not
// relies on a linked list node implementation as written below

class Node {

  constructor(value, next = null) {
    this.value = value;
    this.next = next;
  }
}


class LinkedList {

  constructor() {
    this.head = null;
  }

  insert(value) {
    this.head = new Node(value, this.head);
  }

}

function determineListPalindrome(linkedList) {

  let arr =[];

  let currentNode = linkedList.head;

  if(currentNode) {
    arr.push(currentNode.value);
  }

  while(currentNode.next) {
    currentNode = currentNode.next;
    arr.push(currentNode.value);
  }

  for(let i = 0; i < arr.length/2; i++) {

    if(arr[i] !== arr[arr.length - ( i + 1 ) ] ){

      return false;

    }

    return true;

  }


}



