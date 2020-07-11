# Datastructures-and-Algorithms
Datastructures and algorithms in C and C++

## Strings
### Declaration of a string in C
  1. char *p = 'string' - Pointer created in stack. Actual array is created in heap. Modifying this string literal is undefined behaviour.
  2. char p[] = 'string' - Array is created in stack - leaving to compiler the job to count the size of the array.
  3. char p[7] = 'string' - Array is created in stack- takes 7 bytes in total counting '\0'
  Resources: http://c-faq.com/
