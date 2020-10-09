'use strict';
/*
 #148 - Problem Domain: check if a linked list is a circular linked list
 using Floyd's Algorithm (tortoise and hare approach), return true if they meet, false if not
*/

function findCircular(linkedlist) {

  let tortoise = linkedlist.head;
  let hare = linkedlist.head;

  if (linkedlist.head.next === null) {
    return false;
  }
  while (hare.next && hare.next.next) {
    tortoise = tortoise.next;
    hare = hare.next.next;
    if (tortoise === hare) {
      return true;
    }
  }
  return false;

}

// Establishing LinkedList and Node Classes
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

  insert(val) {
    this.head = new Node(val, this.head);
  }

  append(val) {
    let current = this.head;
    while (current) {
      current = curent.next;
    }
    current.next = new Node(val)
  }

  // method to create a circular linked list
  makeCirc(val, existingNode) {
    let node = new Node(val, existingNode);
    let current = this.head;
    while (current.next) {
      current = current.next
    }
    current.next = node;
  }
}



