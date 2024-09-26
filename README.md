# CPP---Module---01
This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.

***

# C++ BASICS 01

***

# Table of Contents
- [NEW and DELETE](#new-and-delete)
- [REFERENCES](#references)

***

## NEW and DELETE
In C++, new and delete are operators used for dynamic memory management. They allow you to allocate and deallocate memory for objects at runtime. Here's a detailed explanation of each:

## New Operator
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

**example**:
```C++
//1
int* intPtr = new int; // Allocates memory for an integer
*intPtr = 42; // Assigning value

//2
int* arrayPtr = new int[10]; // Allocates memory for an array of 10 integers
for (int i = 0; i < 10; ++i) {
    arrayPtr[i] = i; // Initializing array elements
}
```

## Delete Operator
**purpose**: Deallocates memory that was previously allocated with new to prevent memory leaks.
**Syntax**:
- For a single object:
```C++
delete pointer; // Deallocates memory for the object pointed to by pointer
```
- For an array of objects:
```C++
delete[] pointer; // Deallocates memory for the array of objects
```

**example**
```C++
delete intPtr; // Deallocates memory for a single integer
delete[] arrayPtr; // Deallocates memory for the array of integers
```

### Example with class
```C++
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
    // Allocate a student variable on the stack
    // "bob" is a Student type variable (created on the stack)
    Student bob = Student("bfubar");

    // Allocate a student variable on the heap
    // "jim" is a pointer to a Student object
    // "new Student("jfubar");" allocates memory for a Student object on the heap and returns a pointer to it
    Student* jim = new Student("jfubar");

    // Do some stuff

    // Free the memory allocated for "jim" on the heap
    // The Student destructor will be called before memory is freed
    delete jim; 

    // bob is automatically destroyed when it goes out of scope at the end of the function
    return (0); 
}
```

## Allocate multiple objects
To allocate multiple objects dynamically in C++, you can use the new operator with an array. Here’s how you can allocate and deallocate multiple objects:
```C++
class Student
{
	private:
		std::string _login;

	public:
		Student() : _login("default")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
    // Allocate an array of 3 contiguos Student objects on the heap
    // "students" is a pointer to the first element of the array of Student objects
    Student* students = new Student[3];

    // You can now access and initialize each Student in the array
    students[0] = Student("Alice");
    students[1] = Student("Bob");
    students[2] = Student("Charlie");

    // Do some stuff with the students

    // Free the memory allocated for the array of Student objects
    delete[] students;  // Note the use of delete[] for arrays

    return 0;
}
```
Note: In this example, we use a default constructor when allocating memory, and then we assign individual Student objects to each array element. If you want to directly initialize the objects at allocation time, you will need a more advanced solution.

***

##  REFERENCES
In C++, a reference is an alias for an existing variable. It allows you to create another name for a variable, enabling you to access and modify the original variable through this new name. References are particularly useful for function parameters, where they can help avoid copying large objects, improving performance.

*From "lear.microsoft.com"*:
A reference, like a pointer, stores the address of an object that is located elsewhere in memory. Unlike a pointer, a reference after it's initialized can't be made to refer to a different object or set to null. There are two kinds of references: lvalue references, which refer to a named variable and rvalue references, which refer to a temporary object. The & operator signifies an lvalue reference and the && operator signifies either an rvalue reference, or a universal reference (either rvalue or lvalue) depending on the context.

## Key Characteristics of References:
### 1. Syntax
A reference is declared using the & symbol.
```C++
int& ref = originalVariable //creates a reference to originalVariable
```

### 2. Initialization
A reference must be initialized when it is created, and it cannot be changed to refer to another variable after initialization.

### 3. Behavior
A reference acts like the variable it refers to. Any operation performed on the reference will directly affect the original variable.

### 4. Cannot be Null:
Unlike pointers, references cannot be null. They must always refer to a valid object.

**Example**
```C++
#include <iostream>
using namespace std;

void increment(int& value) { // 'value' is a reference to an integer
    value++; // Increment the original variable
}

int main() {
    int num = 5;
    cout << "Original num: " << num << endl; // Output: 5

    increment(num); // Pass num by reference
    cout << "After incrementing: " << num << endl; // Output: 6

    return 0;
}
```

## Advantages of Using References: