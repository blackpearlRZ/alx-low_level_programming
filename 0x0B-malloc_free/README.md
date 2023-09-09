# Learning Objectives
## General
* What is the difference between automatic and dynamic allocation
* What is ``malloc`` and ``free`` and how to use them
* Why and when use ``malloc``
* How to use ``valgrind`` to check for memory leak
### malloc() 
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

Syntax: 
      ``ptr = (cast-type*) malloc(byte-size``

### free() 
“free” method in C is used to dynamically de-allocate the memory. The memory 
allocated using functions ``malloc()`` and ``calloc()`` is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

Syntax: 
              ``free(ptr)``

| File      | Description |
| ----------- | ----------- |
| [0-create_array.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c) |  creates an array of chars, and initializes it with a specific char. |
| [1-strdup.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c) | eturns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. |
| [2-str_concat.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c) | concatenates two strings. |
| [3-alloc_grid.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c) |  returns a pointer to a 2 dimensional array of integers. |
| [4-free_grid.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c) | frees a 2 dimensional grid previously created by your ``alloc_grid`` function. |
| [100-argstostr.c](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c) | concatenates all the arguments of your program. |
| [main.h](https://github.com/blackpearlRZ/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h) | main.h |
