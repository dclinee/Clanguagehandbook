# The C Standard Library

**collection of built-in functions**

## C Library



## C library function



### C library function - atexit()

[atexit(3) —Linux manual page](https://www.man7.org/linux/man-pages/man3/atexit.3.html#top_of_page)

The C library function int atexit(void (*func)(vodi)) causes the specified function func to be called when the proggram terminates. You can register your termination function anywhere you like, but it will be called at the time of the program termination.

**Declaration**

Following is the declaration for atexit() function.

```c
int atexit(void (*func)(void));
```

**Parameters**

func — This is the function to be called at the termination of the program.

**Return Value**

This function returns a zero value if the function is registered successfully, otherwise a non-zero value is returned if it is failed.

**Example**

The following example shows the usage of atexit() function.

```c
  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 
  4 void functionCalled()
  5 {
  6         printf("This is to be called function.\n");
  7 }
  8 
  9 int main()
 10 {
 11         // register the termination function
 12         atexit(functionCalled);
 13 
 14         printf("Starting main program...\n");
 15 
 16 
 17         printf("Starting main program...\n");
 18 
 19         return 0;
 20 }
~                        

```



```C
  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 #include <unistd.h>
  4 
  5 void bye(void)
  6 {
  7         printf("That was all, folks\n");
  8 }
  9 
 10 int main(void)
 11 {
 12         long a;
 13         int i;
 14 
 15         a = sysconf(_SC_ATEXIT_MAX);
 16         printf("ATEXIT_MAX = %ld\n", a);
 17 
 18         i = atexit(bye);
 19         if(i != 0){
 20                 fprintf(stderr, "cannot set exit function.\n");
 21                 exit(EXIT_FAILURE);
 22         }

```

























































