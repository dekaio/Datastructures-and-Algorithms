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
