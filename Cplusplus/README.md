## Principles of object oriented programming   
 1. Abstraction: functions in a class
 2. Encapsulation: Class encapsulates data and functions
      Data Hiding: Access specifiers- private, public, protector, get x is accessor and set x is mutator
 3. Inheritance: An object can inherit properties from another class
 4. Polymorphism: Same class different forms. Polymorphism can be achieved through inheritance.
 
 Programming is concerned about: data and operations on data
 In a class data is made private to avoid mishandling.
 ### Types of constructors
 1. Default constructor
 2. Non-parameterized constructor
 3. Parameterized constructor
 4. Copy constructor: Disadvantage - If dynamic mem alloc, then both the objs would point to the same mem. Shallow copy and deep copy construcors.
 
 ### Types of functions in a class
  1. inline functions: Inline functions are implemented inside class
  2. friend functions
  
  ** Only difference between structures and class: By default members in a class are private while it's public in structure **   
 ** Objects will consume memory only for data memebers, functions will be common for all the objects in the memory **
### STL (Standard Template Library)
STL has built-in classes for datastructures
It has algorithms(searching, sorting, binary_search, reverse on containers), containers(datastructures-array,ll,stack..) and iterators
Container classes:
The following operations are possible for the below 5 classes: push_front(), pop_front(), push_back(), pop_back(), insert(), remove(), size(), empty(), front(), back()
* Vector: Self managed array
* List
* Forward_list
* Dequeue
* Priority queue: Always the largest element will be deleted.
* Stack
* Set
* Multiset

## Some properties of cpp 11
* auto
* decltype
* final keyword
* smart pointers: unique_ptr, shared_ptr, weak_ptr
* Inclass initializer and delegation of constructors
* ellipsis - for taking variable number of arguments in a function(same as spread in js)
