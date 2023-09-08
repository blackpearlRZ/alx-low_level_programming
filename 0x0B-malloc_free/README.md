# Learning Objectives
## General
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
### malloc() 
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 
Syntax: 
      ``ptr = (cast-type*) malloc(byte-size``

 ### calloc() 
 “calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to ``malloc()`` but has two different points and these are:
* 1. It initializes each block with a default value ‘0’.
* 2. It has two parameters or arguments as compare to malloc().
Syntax: 
        ``ptr = (cast-type*)calloc(n, element-size);``
here, n is the no. of elements and element-size is the size of each element.

### free() 
“free” method in C is used to dynamically de-allocate the memory. The memory 
allocated using functions ``malloc()`` and ``calloc()`` is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.
Syntax: 
              ``free(ptr)``

### realloc()
“realloc” or “re-allocation” method in C is used to dynamically change the 
memory allocation of a previously allocated memory. In other words, if the 
memory previously allocated with the help of ``malloc`` or ``calloc`` is insufficient, 
realloc can be used to dynamically re-allocate memory. re-allocation of memory 
maintains the already present value and new blocks will be initialized with the 
default garbage value.
Syntax: 
              ``ptr = realloc(ptr, newSize);``
where ptr is reallocated with new size 'newSize'.
