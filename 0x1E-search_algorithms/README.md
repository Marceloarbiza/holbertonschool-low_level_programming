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

[![Watch the video](https://img.youtube.com/vi/4GPdGsB3OSc/maxresdefault.jpg)](https://youtu.be/4GPdGsB3OSc)

1. Time Complexity

| Case | Time Complexity |
| ------------- | ------------- |
| Best Case  | O(1)  |
| Average Case  | O(n)  |
| Worst Case  | O(n)  |

**Best Case Complexity** - In Linear search, best case occurs when the element we are finding is at the first position of the array. The best-case time complexity of linear search is O(1).
**Average Case Complexity** - The average case time complexity of linear search is O(n).
**Worst Case Complexity** - In Linear search, the worst case occurs when the element we are looking is present at the end of the array. The worst-case in linear search could be when the target element is not present in the given array, and we have to traverse the entire array. The worst-case time complexity of linear search is O(n).
The time complexity of linear search is O(n) because every element in the array is compared only once.

2. Space Complexity

| Space Complexity |  |
| ------------- | ------------- |
| Best Case  | O(1)  |

## Binary search

Binary search is the search technique that works efficiently on sorted lists. Hence, to search an element into some list using the binary search technique, we must ensure that the list is sorted.

Binary search is a search algorithm that works on a sorted array. It finds the given value by comparing the value with the middle element and then dividing the array into two halves.

Vide example:

[![Watch the video](https://img.youtube.com/vi/P3YID7liBug/maxresdefault.jpg)](https://youtu.be/P3YID7liBug)


1. Time Complexity

| Case | Time Complexity |
| ------------- | ------------- |
| Best Case  | O(1)  |
| Average Case  | O(logn)  |
| Worst Case  | O(logn)  |

**Best Case Complexity** - In Binary search, best case occurs when the element to search is found in first comparison, i.e., when the first middle element itself is the element to be searched. The best-case time complexity of Binary search is O(1).
**Average Case Complexity** - The average case time complexity of Binary search is O(logn).
**Worst Case Complexity** - In Binary search, the worst case occurs, when we have to keep reducing the search space till it has only one element. The worst-case time complexity of Binary search is O(logn).

2. Space Complexity

| Space Complexity |  |
| ------------- | ------------- |
| Best Case  | O(1)  |

## Jump Search

Like Binary Search, Jump Search is a searching algorithm for sorted arrays. The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.
For example, suppose we have an array arr[] of size n and block (to be jumped) size m. Then we search at the indexes arr[0], arr[m], arr[2m]…..arr[km] and so on. Once we find the interval (arr[km] < x < arr[(k+1)m]), we perform a linear search operation from the index km to find the element x.
Let’s consider the following array: (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610). Length of the array is 16. Jump search will find the value of 55 with the following steps assuming that the block size to be jumped is 4. 

- STEP 1: Jump from index 0 to index 4; 
- STEP 2: Jump from index 4 to index 8; 
- STEP 3: Jump from index 8 to index 12; 
- STEP 4: Since the element at index 12 is greater than 55 we will jump back a step to come to index 8. 
- STEP 5: Perform linear search from index 8 to get the element 55.

**What is the optimal block size to be skipped?** 
In the worst case, we have to do n/m jumps and if the last checked value is greater than the element to be searched for, we perform m-1 comparisons more for linear search. Therefore the total number of comparisons in the worst case will be ((n/m) + m-1). The value of the function ((n/m) + m-1) will be minimum when m = √n. Therefore, the best step size is m = √n.

Video example:

[![Watch the video](https://img.youtube.com/vi/63kS6ZkMpkA/maxresdefault.jpg)](https://youtu.be/63kS6ZkMpkA)



## Interpolation Search

![alt text](https://www.baeldung.com/wp-content/uploads/2019/08/probe-position.jpg)

Given a sorted array of n uniformly distributed values arr[], write a function to search for a particular element x in the array. 
Linear Search finds the element in O(n) time, Jump Search takes O(√ n) time and Binary Search take O(Log n) time. 
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed. Binary Search always goes to the middle element to check. On the other hand, interpolation search may go to different locations according to the value of the key being searched. For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side.
To find the position to be searched, it uses following formula. 

> // The idea of formula is to return higher value of pos
 // when element to be searched is closer to arr[hi]. And
 // smaller value when closer to arr[lo]
 pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

> arr[] ==> Array where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in arr[]
hi    ==> Ending index in arr[]

**The formula for pos can be derived as follows.**

> Let's assume that the elements of the array are linearly distributed. 

> General equation of line : y = m*x + c.
y is the value in the array and x is its index.

> Now putting value of lo,hi and x in the equation
arr[hi] = m*hi+c ----(1)
arr[lo] = m*lo+c ----(2)
x = m*pos + c     ----(3)

> m = (arr[hi] - arr[lo] )/ (hi - lo)

> subtracting eqxn (2) from (3)
x - arr[lo] = m * (pos - lo)
lo + (x - arr[lo])/m = pos
pos = lo + (x - arr[lo]) *(hi - lo)/(arr[hi] - arr[lo])

**Algorithm** 
Rest of the Interpolation algorithm is the same except the above partition logic. 
- Step1: In a loop, calculate the value of “pos” using the probe position formula. 
- Step2: If it is a match, return the index of the item, and exit. 
- Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array. 
- Step4: Repeat until a match is found or the sub-array reduces to zero.

Video example:

[![Watch the video](https://img.youtube.com/vi/DlCPTPQD6Mw/maxresdefault.jpg)](https://youtu.be/DlCPTPQD6Mw)


1. Time Complexity
   
| Case | Time Complexity |
| ------------- | ------------- |
| Best Case  | O(1)  |
| Average Case  | O(log(logn))  |
| Worst Case  | O(n)  |
