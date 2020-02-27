# Sorting

## Table of contents
* [Executing, Compiling, Comparing](#ECC)
* [Bubble Sort](#Bubble_sort)
* [Comb Sort](#Comb_sort)
* [Selection Sort](#selection_sort)
* [Insertion Sort](#Insertion_sort)
* [Counting Sort](#counting_sort)

=============================================================================================
<a name="ECC"></a>
## Executing, Compiling, Comparing

compiling filename <i><b>comb-sort.cpp</b></i>
```bash
g++ comb-sort.cpp
```
produces a file <i><b>a.out</b></i>

To execute <i><b>a.out</b></i>
```bash
./a.out
```
To execute <i><b>a.out</b></i> and take input from filename <i><b>testcase-size-medium</b></i> and saving output in filename <i><b>output</b></i>
```bash
./a.out < testcase-size-medium > output
```
To compare filename <i><b>output</b></i> with filename <i><b>output-size-medium</b></i>
```bash
cmp outout outout-size-medium
```

=============================================================================================
<a name="Bubble_sort"></a>
## Bubble Sort
-  Comparing Sort

#### Algorithm
```C++
//Sorting an array A
for i = 0 to A.length-1
    for j = 0  to A.length-1
        if A[j] > A[j+1]
            swap A[j] and A[j+1]
```

#### Time Complexity

Cases | Time Complexity
------------ | -------------
Best Case | O(n)
Worse Case | O(n^2)
Average Case | O(n^2)

**<i>Best case</i>** occurse when array is sorted. **<i>Worse case</i>** occurse when array is reverse sorted.

#### Auxiliary Space
**Auxiliary Space:** O(1)


=============================================================================================

<a name="Comb_sort"></a>
## Comb Sort
-  Comparing Sort

#### Algorithm
```c++
//Sorting an array A
gap = A.size    
shrink = 1.3
sorted = false
while sorted == false
    gap = floor(gap / shrink)
    if gap <= 1
        gap = 1
        sorted = true
    i = 0
    while i + gap < A.size
        if A[i] > A[i+gap]
            swap(A[i], A[i+gap])
            sorted = false
        i = i + 1
```
#### Time Complexity

Cases | Time Complexity
------------ | -------------
Best Case | O(n log n)
Worse Case | O(n^2)
Average Case | O(n^2 / 2^p), where p is the number of increments

#### Auxiliary Space
**Auxiliary Space:** O(1)


=============================================================================================

<a name="Selection_sort"></a>
## Selection Sort
-  Comparing Sort

#### Algorithm
```C++
//Sorting an array A
for i = 0 to A.length - 2
    min_index = i
    for j = i + 1 to A.length - 1
        if A[j] < A[min_index]
            min_index = j
    swap A[i] and A[min_index]
```

Cases | Time Complexity
------------ | -------------
Best Case | O(n)
Worse Case | O(n^2)
Average Case | O(n^2)

**<i>Best case</i>** occurse when array is sorted. **<i>Worse case</i>** occurse when array is reverse sorted.

#### Auxiliary Space
**Auxiliary Space:** O(1)


=============================================================================================

<a name="Insertion_sort"></a>
## Insertion Sort
-  Comparing Sort

#### Algorithm
```C++
//Sorting an array A
for i = 1 to A.length-1
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j = j - 1
    A[j+1] = key
```

Cases | Time Complexity
------------ | -------------
Best Case | O(n)
Worse Case | O(n^2)
Average Case | O(n^2)

**<i>Best case</i>** occurse when array is sorted. **<i>Worse case</i>** occurse when array is reverse sorted.

#### Auxiliary Space
**Auxiliary Space:** O(1)

<a name="counting_sort"></a>
## Counting Sort
-  Distribution sort

#### Algorithm
```c++
//sorting a integer array A
max = largest value in A
count[max + 1]
for i = 0 to max
    count[i] = 0
for i = 0 to A.length - 1
    count[A[i]] += 1
for i = 0 to max
    j = 0
    while count[i] > 0
        A[j] = i;
        j = j + 1
    i = i + 1
```
Cases | Time Complexity
------------ | -------------
Best Case | O(n)
Worse Case | O(n)
Average Case | O(n)

#### Auxiliary Space
**Auxiliary Space:** O(k) where k is the large value in the array
