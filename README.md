# Assignment-1
##Assignment 1 for TCSS

Sort1 is a counting sort which is a O(n) sort applicable when the range of the values is limited. It basically counts the number of occurences of each value in the range in the first pass and then puts the values into the sorted array in the second pass.

Sort2 is the built-in qsort function provided by C. gcc uses a hybrid algorithm of quicksort, heapsort and insertion sort depending on the number of elements to sort. quicksort and heapsort are divide and conquer types of algorithms that split the problem into smaller pieces. They are both O(nlogn). Insertion sort is O(n<sup>2</sup>) for random sets but is O(n) for nearly sorted sets.

###Timings for array size 100000

Method | Time | Time with optimise flags
:--- | ---: | ---: 
Counting |<B>0.67 ms | <B>0.28 ms
qsort |15.76 ms | 11.50 ms
Insertion |8129.36 ms | 1280.74 ms

###Timings for array size 500

Method | Time | Time with optimise flags
:--- | ---: | ---: 
Counting |0.180 ms | 0.143 ms
qsort |<B>0.167 ms | 0.157 ms
Insertion |0.492 ms | <B>0.082 ms
