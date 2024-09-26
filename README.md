# CPP---Module---01
This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.

***

# C++ BASICS 01

***

# Table of Contents
- []

***

## NEW AND DELETE
In C++, new and delete are operators used for dynamic memory management. They allow you to allocate and deallocate memory for objects at runtime. Here's a detailed explanation of each:

### New Operator
**purpose**: Allocates memory on the heap for an object or an array of objects.
**Syntax**:
- For a single object:
```C++
Type* pointer = new Type; // Allocates memory for one object of Type
```
- For an array of objects:
```C++
Type* pointer = new Type[size]; // Allocates memory for an array of 'size' objects
```
**Returns**: A pointer to the allocated memory. If the allocation fails, it throws a std::bad_alloc exception.