Git repo for course in C++: https://github.com/coding-minutes/dsa-essentials-course

Git repo for course in Java: https://github.com/coding-minutes/dsa-essentials-Java

Coding Exercise Solution: https://github.com/coding-minutes/dsa-essentials-solutions-cpp

Arrays:
    An array is a collections of elements of the same type placed in contiguous memory locations.

Array Operations:
    1. Creation
    2. Update
    3. Read
    4. Delete

Character Array:
    - Always ends with null(\0)

Creating an Array:
    int a[100]; // data_type array_name[size] statically allocating memory to an array 
    int a[100] = {0}; //{0} initialization list [0,0,0,0,0,...]
    int a[100] = {1,2,3}; // [1,2,3,0,0,0,0,...]
    int a[] = {1,2,3}; // [1,2,3]

    string fruits[3] = {"apple", "mango", "guava"}; // array of strings

Arrays are passed by reference: 
    (int *arr) or (int arr[])

Subarray: A subarray is a contiguous part of array. An array that is inside another array.

Vector:
    - Vector are sequence containers representing arrays that can change in size.
    - Dynamic array, storage being handled automatically by the container(Vector).
    - Vector size changes in power of 2.