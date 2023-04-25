# 0x1B. C - Sorting algorithms & Big O

## Resources :books:
Read or watch:
* [Sorting algorithm](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw)
* [Big O notation](https://intranet.hbtn.io/rltoken/XrLMaOhUMHfwsFEz15TVow)
* [Sorting algorithms animations](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ)
* [15 sorting algorithms in 6 minutes](https://intranet.hbtn.io/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA)

---
## Learning Objectives :bulb:
What you should learn from this project:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

---
## Requirements ⚙️
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called sort.h
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.
* Written in: <a href="https://www.cprogramming.com/" target="_blank"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="20" height="20"/>

---
## Tasks ✔️

For each task, create a file (task #)-o. Write the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case

### [0. Bubble sort](./0-bubble_sort.c)
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm:
* Prototype: void bubble_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements

### [1. Insertion sort](./1-insertion_sort_list.c)
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
* Prototype: void insertion_sort_list(listint_t \**list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements 

### [2. Selection sort](./2-selection_sort.c)
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
* Prototype: void selection_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements 

### [3. Quick sort](./3-quick_sort.c)
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
* Prototype: void quick_sort(int *array, size_t size);
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements (See example below)

---

## Author
* **Peyton Smith** - [peytonbrsmith](https://github.com/peytonbrsmith)
