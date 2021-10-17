# The C Standard Library

**collection of built-in functions**

## C Standard Library Header File

### C Library - <stdio.h>

The stdio.h header defines three variable types, several macros, and various functions for performing input and output.

**Library Variables**

Following are the variable types defined in the header stdio.h:

| Name       | Variable & Description                                       |
| ---------- | :----------------------------------------------------------- |
| **size_t** | This is the unsigned integral type and is the result of the sizeof keyword. |
| **FILE**   | This is an object type suitable for storing information for a file stream. |
| **fpos_t** | This is an object type suitable for storing any position in a file. |

**Library Macros**

Following are the macros defined in the header stdio.h:

|        Name        | Macros & Description                                         |
| :----------------: | :----------------------------------------------------------- |
|        NULL        | This macro is the value of a null pointer constant.          |
|       _IOFBF       | (_IOFBF,_IOLBF,_IONBF)These are the macros which expand to integral constant expressions with distinct values and suitable for use as third argument to the setvbuf function. |
|       BUFSIZ       | This macro is an integer, which represents the size of the buffer used by the setbuf function. |
|        EOF         | This macro is a negative integer, which indicates that the end-of-file has been reached. |
|     FOPEN_MAX      | This macro is an integer, which represents the maximum number of files that the system can guarantee to be opened simultaneously. |
|    FILENAME_MAX    | This macro is an integer, which represents the longest length of a char array suitable for holding the longest possible filename. If the implementation imposes no limit, then this value should be the recommended maximum value. |
|      L_tmpnam      | This macro is an integer, which represents the longest of a char array suitable for holding the longest possible temporary filename created by the tmpnam function. |
|      SEEK_CUR      | SEEK_CUR,SEEK_END, and SEEK_SET                  These macros are used in the fseek function to locate different positions in a file. |
|      TMP_MAX       | This macro is the maximum number of unique flenames that the function tmpnam can generate. |
| stderr,stdn,stdout | These macros are pointer to FILE types which correspond to the standard error, standard input, and standard output streams. |

**Library Functions**

Following are the functions defined in the header stdio.h:

| Name                                                | Function & Description                                       |
| --------------------------------------------------- | :----------------------------------------------------------- |
| **int fclose(FILE *stream)**                        | Closes the stream.  All buffers are flushed.                 |
| void clearerr(FILE *stream)                         | Clears the end-of-file and error indicators for the given stream. |
| int feof(FILE *stream)                              | Tests the end-of-file indicator for the given stream.        |
| int ferror(FILE *stream)                            | Tests the error indicator for the given stream.              |
| int fflush(FILI *stream)                            | Flushes the output buffer of a stream.                       |
|                                                     |                                                              |
| FILE *fopen(const char *filename, const char *mode) | Opens the filename pointed to by filename using the given mode. |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |
|                                                     |                                                              |



## C library function

**What are C Standard Library Functions?**

**How to use them in our C programming?**

We'll learn about the standard library functions in C.

More specifically, what are they, different library functions in C and how to use them in our program.

C Standard library functions or simply C Library functions are inbuilt functions in C programming.

The prototype and data definitions of these functions are present in their respective header files. To use these functions we need to include the header file in our program.

If you try to use library functions without including the header file, you will get an error.

**C library function - ferror()**

**Description**

The C library function int ferror(FILE *stream) tests the error indicator for the given stream.

**Declaration**

Following is the declaration for ferror() function.

```c
int ferror(FILE *stream)
```

**Parameters**

stream — This is the pointer to a FILE object that identifies the stream.

**Return Value**

If the error indicator associated with the stream was set, the function returns a non-zero value else, it returns a zero value.

**Example**

```c
1 #include <stdio.h>
  2 
  3 int main()
  4 {
  5         FILE *fp;
  6         char c;
  7 
  8         fp = fopen("file.txt", "w");
  9 
 10         c = fgetc(fp);
 11 
 12         if (ferror(fp)) {
 13                 printf("Error in reading from : file.txt\n");
 14         }
 15 
 16         clearerr(fp);
 17 
 18         if (ferror(fp)) {
 19                 printf("Error in reading from file : file.txt\    n");
 20         }
 21         fclose(fp);
 22 
 23         return (0);
 24 }

```

**C library function - feof()**

**Description**

The C library function int feof(FILE *stream) tests the end-of-file indicator for the given stream.

**Declaration**

Following is the declaration for feof() function.

```c
#include <stdio.h>
int feof(FILE *stream);

```

**Parameters**

stream - This is the pointer to a FILE object that identifies the stream.

**Return value**

This function returns a non-zero value when End-of-File indicator associated whit the stream is set, else zero is returned.

```c
  1 #include <stdio.h>
  2 
  3 int main()
  4 {
  5         FILE *fp;
  6         int c;
  7 
  8 
  9         fp = fopen("file.txt", "r");
 10         if(fp == NULL){
 11 
 12                 perror("Error in opening file");
 13                 return(-1);
 14         }
 15 
 16 
 17         while(1){
 18 
 19                 c = fgetc(fp);
 20                 if(feof(fp)){
 21                         break;
 22                 }
 23                 printf("%c", c);
 24         }
 25 
 26         fclose(fp);
 27         return 0;
 28 }

```



**C library function - fflush()**

**Description**

The C library function int fflush(FILE *stream) flushes the output buffer of a stream.

**Declaration**

Following is the declaration for fflush() function.

```c
int fflush(FILE *stream)
```

**Parameters**

stream —This is the pointer to a FILE object that specifies a buffered stream.

Return Value

This function returns a zero value on successs. If an error occurs, EOF is returned and the error indicator is set(i.e. feof).





**C library function - fopen()**

**Description**

The C library function **FILE *f**open(const char *filename, const char *mode)** opens the filename pointed to, by filename using the given mode.

**Declaration**

Following is the declaration for fopen() function.

```c
FILE *fopen(const char *filename, const char *mode);
```

Parameters

filename - This is the C string containing the name of the file to be opened.

mode - This is the C string containing a file access mode.

**Example**

The following example shows the usage of fopen() function.

```c
  1 #include <stdio.h>
  2 
  3 int main()
  4 {
  5         FIFL *fp;
  6         int c;
  7 
  8         fp = fopen("file.txt", "r");
  9         while(1)
 10         {
 11                 c = fgetc(fp);
 12                 if(feof(fp)){
 13                         break;
 14                 }
 15                 printf("%c", c);
 16         }
 17         fclose(fp);
 18 
 19         return 0;
 20 }

```





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



### C library function - exit()

[exit(3) — Linux manual page](https://www.man7.org/linux/man-pages/man3/exit.3.html)

The C library function void exit(int status) terminates the calling process immediately. Any open file descriptors belonging to the process are closed and any children of the process are inherited by process 1, init, and the process parent is sent a SIGCHLD signal.

**Declaration**

Following is the declaration for exit() function.

```c
noreturn void exit(int status);
```

**Parameters**

status — This is the status value returned to the parent process.

**Return Value**

This function does not return any value.

Example

```c
  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 
  4 int main(void)
  5 {
  6         printf("Start of the program...\n");
  7 
  8         printf("Start of the program...\n");
  9 
 10         exit(0);
 11 
 12         printf("Start of the program...\n");
 13 
 14         return 0;
 15 }

```

### C library function - strlen()

**Description**

The C library function **size_t strlen(cost char *str)** computes the length of the string str up to, but not including the terminating null character.

Declaration

Following is the declaration for strlen() function.

**Synopsis**

```c
#include <stdio.h>
size_t strlen(const char *str)
```

**Parameters**

str - This is the string whose length is to be found.

**Return value**

This function returns the length of string.

Example

This following example shows the usage of strlen() function.

```c
  1 /* example of the  strlen() function*/
  2 
  3 #include <stdio.h>
  4 #include <string.h>
  5 
  6 int main(void)
  7 {
  8         char str[100];
  9         int len;
 10 
 11         strcpy(str, "This is an example of C library function strl    en().");
 12 
 13         len = strlen(str);
 14         printf("The length of |%s| is |%d|\n", str, len);
 15 
 16         return 0;
 17 }

```

### C library function - strcpy()

**Description**

The C library function char *strcpy(char *dest, const char *src) copies the string pointed to, by src to dest.

Declaration

Following is the declaration for strcpy() function.

**Synopsis：**

```c
#include <stdio.h>
char *strcpy(char *dest, const char *src);
```

**Parameters**

dest — This is the pointer to the destination array where the content is to be copied.

src — This is the string to be copied.

**Return value**

This returns a pointer to the destination string dest.

**Example** 

The following example shows the usage of strcpy() function.

```c
  1 /* example of the strcpy() function */
  2 
  3 #include <stdio.h>
  4 #include <string.h>
  5 
  6 int main()
  7 {
  8         char src[40];
  9         char dest[100];
 10         int len;
 11 
 12         memset(dest, '\0', sizeof(dest));
 13         strcpy(src, "This is an example of strcpy() function");
 14         strcpy(dest, src);
 15         len = strlen(dest);
 16 
 17         printf("Final copied string: %s\n", dest);
 18         printf("The length of dest is : %d\n", len);
 19 
 20         return 0;
 21 }

```

### C library function - strncpy()

Description

The C library function **char *strncpy(char *dest, const char *src, size_t n)** copies up to n characters from the string pointed to, by src to dest. In a case where the length of src is less than that of n, the remainder of dest will be padded with null bytes.

**Declaration**

Following is the declaration for strncpy() function.

```c
#include <string.h>
char *strncpy(char *dest, const char *src, size_t n)
```

**Parameters**

dest - This is the pointer to the destination array where the content is to be copied.

src - This is the string to be copied.

n - The number of character to be copied from source.

**Return value**

This function returns the final copy the copied string.

**Example**

The following example shows the usage of strncpy() function.

Here we have used function memset() to clear the memory location.

```c
  1 /* example of the strncpy() function */
  2 
  3 #include <stdio.h>
  4 #include <string.h>
  5 
  6 int main()
  7 {
  8         char src[40];
  9         char dest[12];
 10 
 11         memset(dest, '\0', sizeof(dest));
 12         strcpy(src, "This is an example of the strncpy().");
 13         strncpy(dest, src, 10);
 14 
 15 
 16         printf("Final copied string: %s\n" ,dest);
 17 
 18         return 0;
 19 }

```

### C library function - memset()

**Description**

The C library function **void *memset(void *str, int c, size_t n)** copies the character c(an unsigned char) to the first n characters of the string pointed to, by the argument str.

**Declaration**

Following is the declaration for memset() function.

```c
#include <string.h>
void *memset(void *str, int c, size_t n);
```

**Parameters**

str - This is a pointer to the block of memory to fill.

c - This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.

n - This is the number of bytes to be set to the value.

Return value

This function returns a pointer to the memory area str.



Example

The following example shows the usage of memset() function.

```c
  1 /* example of the strncpy() function */
  2 
  3 #include <stdio.h>
  4 #include <string.h>
  5 
  6 int main()
  7 {
  8         char src[40];
  9         char dest[12];
 10 
 11         memset(dest, '\0', sizeof(dest));
 12         strcpy(src, "This is an example of the strncpy().");
 13         strncpy(dest, src, 10);
 14 
 15 
 16         printf("Final copied string: %s\n" ,dest);
 17 
 18         return 0;
 19 }

```





























