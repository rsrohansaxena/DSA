Maximum Subarray sum can be solved using :
    Brute Force approach: O(N^3)
        - Three loops above two traverse through array for Subarray and last one set currentSum and compare with maxSum and set the value of maxSum.
    Prefix array approach: O(N^2)
        - Create an array to store sum of each position at respective index.
        - Then two loops traverse through original array and set the value of currentSum using PrefixArray[i]-PrefixArray[i-1] if i==0 then set as PrefixArray[i]
    Kadane approach: O(N)
        - Two variable approach, currentSum & maxSum, currentSum store += array[i] if value becomes less than 0 then currentSum set to 0.
        - maxSum set to currentSum when currentSum become greater than maxSum

Sorting in Array:
    Bubble Sort:
        Take larger element to the end by repeatedly swapping the adjacent elements.
    Insertion Sort:
        Insertion sort is similar to playing card in our hands. Insert the card in its correct position in a sorted part.
    Selection Sort:
        Repeatedly find the minimun element from unsorted part and putting it at the beginning.
    Counting Sort: O(range+N)


Inbuilt Sort & Comparator:
    It is present under #include<algorithm>
    sort(arr, arr+n); // O(N*logN)
    reverse(arr, arr+n);

    bool compare(int a, int b) { return a<b; }
    sort(arr, arr+n, compare);

    sort(arr, arr+n, greater<int>()); // decreasing order

Character Array:
    Creating a char array
    char a[100];
    char a[100] = {'a','b','c}; //wrong
    char a[100] = {'a','b','c','\0'}; //right
    cout<<a; //abc
    char a[100] = "abc"; //automatically terminates char array with \0

    #include<cstring>
    cout<<strlen(a); // 3 -> number of visible Characters
    cout<<sizeof(a); // 4 -> +1 because of null character

    