# 0x1E. C - Search Algorithms

## Linear search

 In Linear search, we simply traverse the list completely and match each element of the list with the item whose location is to be found. If the match is found, then the location of the item is returned; otherwise, the algorithm returns NULL.

 It is widely used to search an element from the unordered list, i.e., the list in which items are not sorted. The worst-case time complexity of linear search is **O(n).**

 The function **linear_search** takes the array and the element to be searched as input and returns the index of the element in the array.

> Input: arr[] = {10, 30, 44, 98, 99, 101}
> x = 44
> Output: 2
> Note: Return  the index of the element in the given array.

Start from the leftmost element of the array and one by one compare x with each element of the array. 

If x matches with an element, return the index.

If x doesn’t match with any element, return -1.

> // C code to linearly search x in arr[]. If x
> // is present then return its location, otherwise
> // return -1
> // int arr[] : array to be searched
> // int n : size of array
> // int x : element to be searched
```
#include <stdio.h>
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
```

Video example:

https://www.youtube.com/watch?v=iwo5WAldDks

