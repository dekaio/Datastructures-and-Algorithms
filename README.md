# Datastructures-and-Algorithms
Datastructures and algorithms in C and C++

## Strings
### Declaration of a string in C
  1. char *p = 'string' - Pointer created in stack. Actual array is created in heap. Modifying this string literal is undefined behaviour.
  2. char p[] = 'string' - Array is created in stack - leaving to compiler the job to count the size of the array.
  3. char p[7] = 'string' - Array is created in stack- takes 7 bytes in total counting '\0'
  Resources: http://c-faq.com/
### Some invalid operations on string in C
  char doSomeOp(char str[]){   
  //Some operations  
  return str;  
  }  
  Result: Compile time error-> Can't return str  
  Solution: Dynamically create string in doSomeOp and return a pointer to it. Else create a static string in doSomeOp and return it. But   
  this method is not thread safe.

### Recursion, Backtracking and Brute force intuition
TBD

### Searching
* Linear Search:
  1. Improving Linear Search:
    * Transposition
    * Move to header
* Binary Search

## SPECIAL MATRICES
1. Diagonal Matrix
2. Lower triangular matrix:
    * Row major formula for setting a value: ( i*(i-1)/2 ) + j - 1
    * Column major formula for setting a value: ( n*(j-1) - (j-1)*(j-2)/2 ) + i- j
3. Upper triangular matrix
    * Column major formula for setting a value: ( j*(j-1)/2 ) + i - 1
    * Row major formula for setting a value: ( n* (i-1) - (i-1)*(i-2)/2 ) + j-i   
4. Symmetric matrix - Can be represented as either lower triangular matrix or upper triangular matrix.
5. Tridiagonal matrix
6. Band Matrix
7. Toeplitz matrix
8. Sparse matrix- Coordinate list, compressed sparse row

## Polynomial Representation
  1. Polynomial representation
  2. Evaluation of polynomial
  3. Addition of two polynomials

## Linked List
### Problem with Arrays
  1. Array size needs to be known beforehand (for both heap and stack )
### Difference between Array and Linked list
  1. Linked list is always created inside heap
  2. Size can be modified
  3. Can insert, delete elements in between.

***C arrays don't have an end marker.***
 * Binary Search cannot be done in linked list
 * Better use pointers for all sorts of linked list manipulations
 * Improving linear search for LL: Transposition is not usually done because we avoid much movement of nodes.
 * Reversing a linked list: Reversal by swapping elements and sliding pointers
## STACK
 * FILO
 * Recursion uses stack
 ### ADT Stack
 #### Data:
 * Space for storing elements
 * Top pointer
 #### Operations:
 * Push()
 * Pop()
 * Peek(index)
 * Stacktop()
 * isEmpty()
 * isFull()
 ## Queue
 ### Data
 * Space for storing elements
 * Front- for deletion
 * Rear - for insertion
 ### Operations
  1. enqueue(x)
  2. dequeue()
  3. isEmpty()
  4. isFull()
  5. first()
  6. Last()
## Trees
  ### Terminology
  Tree is a collection of nodes.
  * Root
  * Parent
  * Child
  * Siblings
  * Descendents
  * Ancestors
  * Degree of a node: The number of children a node has.
  * Internal(Non leaf, Non termial)/External nodes(Leaf nodes, Terminal nodes): Those nodes with a degree zero.
  * Level: Starts at 1 from root
  * Height: Starts at 0 from root
  * Forest: A collection of trees.
  
  ### Binary tree
  * Degree of a node can be 0,1 or 2.
  ### Number of Binary trees
  Catalan  number: The number of binary trees for n nodes.
  T(n) = 2ncn/(n+1). There is one recursion formula as well.
  Maximum height for n nodes = 2^n-1
  ### Relationship between internal nodes and external nodes
  No. of nodes with degree 0 = No. of nodes with degree 2 + 1
  ### Strict Binary Tree: 
  #### Strict/ Proper/ Complete
  Strictly binary- either no children or zero children
  #### Height vs Nodes
  If height 'h' is given
  Minimum nodes n =2h+1
  Maximum nodes n=2^(h+1) - 1 
  If 'n' nodes are given
  Min height h=log(n+1) -1
  Max height h=(n-1)/2
  #### Internal vs External nodes
  Number of external nodes = Number of internal nodes + 1
  ## M-ary trees (Degree of a tree is M)
  ### What are n-ary trees
  ### Strict n-ary tree
  ### Height vs node
  ### Internal vc External nodes
  ### AVL Trees
  ### Search trees
  ## Heap
Heap must be a complete binary tree - either as max heap or as min heap
Since it is a complete binary tree, height will always be log(n)
## Hashing techniques
## Graphs
## Asymptotic notations
  # Sorting Techniques
  ## Criteria for analysis
  1. Number of comparisons
  2. Number of swaps
  3. Adaptive- If it's already sorted, then would take less time for sorting
  4. Stable- Maintains the relative order of records with equal values.
  5. Extra memory
  
  ## Type of sorts
  *Comparison based sorts
  O(n^2)
  1. Bubble sort- Adaptive, Stable
  2. Insertion sort - Designed for linked list
  3. Selection sort
  O(nlogn)
  4. Heap sort
  5. Merge sort
  6. Quick sort
  7. Tree sort
  O(n^3/2)
  8. Shell sort
  O(n)
  *Index based sorts
  9. Count sort
  10. Bucket/Bin sort
  11. Radix sort

