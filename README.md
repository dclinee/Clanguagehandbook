# C language Handbook
This C Beginner's Handbook follows the 80/20 rule. You'll learn 80% of the C programming language in 20% of the time.



# ![](/home/mrc20/Desktop/Clanguagehandbook/Pictures/c_language_programmer.png)Table of Contents:



## what is C Language?

**C programming** is a general-purpose, procedural, imperative  computer programming language developed in 1972 by Dennis M. Ritchie at  the Bell Telephone Laboratories to develop the UNIX operating system. C  is the most widely used computer language. It keeps fluctuating at  number one scale of popularity along with Java programming language,  which is also equally popular and most widely used among modern software programmers.

> C语言编程是一种通用的、程序化的、命令式的计算机编程语言，1972年由贝尔电话实验室的Dennis M. Ritchie为了开发UNIX操作系统而发明（备注：严格意义上将是为了改写Unix操作系统）。C语言是使用最广泛的计算机语言。它与Java编程语言一起，一直在最受欢迎的范围内波动，而Java编程语言在现代软件程序员中也同样受欢迎，使用最广泛。

## History of C Language

| Language      | Year | Developed By               |
| ------------- | ---- | -------------------------- |
| Algol         | 1960 | International Group        |
| BCPL          | 1967 | Martin Richard             |
| B             | 1970 | Ken Thompson               |
| Traditional C | 1972 | Dennis Ritchie             |
| K & R C       | 1978 | Kernighan & Dennis Ritchie |
| ANSI C        | 1989 | ANSI Committee             |
| ANSI/ISO C    | 1990 | ISO Committee              |
| C99           | 1999 | Standardization Committee  |









## C Language Basics

### Arrays in C Programming

Many applications require the processing of multiple data items that have common characteristics. In such a  situation it is convenient to place such data items in an Array.

An array is a collection of similar data items that are stored under a common name. A value in an array is  identified by index or subscript enclosed in square brackets with array  name.

The individual data items can be  integers, floating point numbers, characters and so, on, but they must  be the same type and same storage class.

An array is a variable that can store multiple values. 

> **许多应用程序需要处理具有共同特征的多个数据项。在这种情况下，将这些数据项放在一个数组中是很方便的。**
>
> **数组是一个类似数据项的集合，这些数据项被存储在一个共同的名称下。数组中的一个值是由索引或下标来识别的，下标用方括号和数组名称括起来。**
>
> **各个数据项可以是整数、浮点数、字符等等，但它们必须是相同的类型和相同的存储类别。**
>
> ***数组是一个可以存储多个值的变量。***

![](/home/mrc20/Desktop/Clanguagehandbook/Pictures/c-single-dimentional-arrary-in-c-programming.png)

### Why do we need array?

We can use normal variables when we have a small number of objects, but if we want to store  a large number of instance, it becomes difficult to manage them normal variables. The idea of an array is to represent many instances in one variable.

There are times while writing C code, you may want to store multiple items of same type as contiguous bytes in memory so that searching and sorting of items becomes easy.

**What is an Array?**



### How to declare an array?

There are a few different ways to declare an array in C.

```c
//General array declarator syntax
[storageClass] dataType arrayName[arraySize];
storage class is optional: auto extern static register
```

**Array declaration by specifying size.**



```c
#include <stdio.h>
int main(void)
{
    // Array declaration by specifing size
    
    int arryOne[3];
    
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", arrayOne[i]);
        printf("%p\n", &arrayOne[i]);
    }
    
    return 0;
}
```

**Array declaration by user specified size.**

With recent C/C++ versions, we can declare an array of user specified size.

```c
 #include <stdio.h>
  2 
  3 int main()
  4 {
  5         int size = 3;
  6         // Array declaration by user specified size.
  7         int arrayOne[size];
  8 
  9         for(int i = 0; i < 3; i++)
 10         {
 11                 printf("%d\n", arrayOne[i]);
 12                 printf("%p\n", &arrayOne[i]);
 13         }
 14         return 0;
 15 }

```

the code above can write 

```c
    #include <stdio.h>
  2 
  3 #define SIZE 3
  4 
  5 int main()
  6 {
  7         // int size = 3;
  8         // Array declaration by specifing size
  9         int arrayOne[SIZE];
 10 
 11         for(int i = 0; i < 3; i++)
 12         {
 13                 printf("%d\n", arrayOne[i]);
 14                 printf("%p\n", &arrayOne[i]);
 15         }
 16         return 0;
 17 }

```

**Array declaration by initializing elements.**

```c
#include  <stdio.h>
int main(void)
{   
    // Array declaration by initializing elements.
    int arrayName[] = {1, 2, 3, 4};
    // Compiler creates an array of size 4.
    // above is same as "int arrayName[4]={1,2,3,4}"
    for(int i = 0; i i < 4; i++)
    {
        printf("%d", arrayName[i]);
    }
    printf("\n");
    
    return 0;
}
```

**Array declaration by specifying size and initializing elements.**



```c
#include <stdio.h>
int main(void)
{
    int arrayName[4] = {1, 2, 3, 4};
    // Compiler creates an array of size 6, initializes 
    // first 4 elements as specified by user and rest 2
    // elements as 0. above is same as 
    // "int arrayName[6] = {1, 2, 3, 4, 0, 0}"
    
    for(int i = 0; i i < 4; i++)
    {
        printf("%d", arrayName[i]);
    }
    printf("\n");
    
    return 0;
}

```

**Array declaration in C programming:**

```c
int i, j, intArray[8], number;
float floatArray[100];
int tableAray[3][4]; // 3 rows by 5 columns
const int NROWS = 100;
const int NCOLS = 200;
float matrixArray[NROWS][NCOLS];


```

**How to initialize Array?**

You can initialize C array elements at once using a single statement as follows:

```c
int intArray[] = {1, 2, 3, 4, 5};
double doubleArray[4] = {10.23, 32.45 ,36.22, 36.10};
// The number of values between braces{} can not be larger than the total number of elements.

```



You can initialize single elements of the array as follows:

```c
double doubleArray[4];
doubleArray[o] = 10.23;
doubleArray[1] = 32.45;
doubleArray[2] = 36.22;
doubleArray[3] = 36.10;

```



You can initialize array by loop statements as follows:



```c
#include <stdio.h>
  2 
  3 int main()
  4 {
  5         int arr[10];
  6         // Initialize array with for loop
  7 
  8         for(int i = 0; i <= 9; i++)
  9                 arr[i] = i;
 10         // for loop forward
 11         for(int i = 0; i <= 9; i++)
 12                 printf("%d = %d\n", arr[i], i);
 13         printf("\n");
 14 		// for loop backward
 15         for(int i = 9; i >= 0; i--)
 16                 printf("%d = %d\n", arr[i], i);
 17         printf("\n");
 18         return 0;
 19 }                  
```

**Initialization of array in compile time:**

Initialization of array compile means declaring elements of array before running the code at the time of declaration which can be done as follow:

```c
#include <stdio.h>
int main(void)
{
    // integer array
    int airTemperature[5] = {32, 33, 36, 35, 34};
    // float array
    float rainfallCapacity[5] = {32.1, 30.2, 30.3, 30.4, 30.6};
    
    return 0;
}
```

**Initialization of array at run-time:**

Initialization of array at run-time means declaring the elements of array after running the code. Here, elements are taken from user. we can also set the size of array when initialize array at run-time.

```c
#include <stdio.h>

int main(void)
{
    int arraySize;
    printf("Please input a numbuer as array size: \n");
    scanf("%d", &arraySize);
    
    int studentScore[arraySize];
    printf("Please input student's score: \n");
    for(int i = 0; i < arraySize; i++)
        scanf("%d", &studentScore[i]);
    
    return 0;
}
```

**example for array in C program:**

```c
#include <stdio.h>
  2 
  3 int main()
  4 {
  5         int n;              //size of array
  6 
  7         scanf("%d", &n);
  8 
  9         int student[n];    // declaration of array
 10 
 11         int average, sum = 0;
 12 
 13         for(int i = 0; i < n; i++)
 14         {
 15                 scanf("%d", &student[i]);//initialization of array      
 16         }
 17 
 18         student[2] = student[2] + 7;  // accessing 3rd element
 19 
 20         student[4] = student[4] + 7;  // accessing 5rd element
 21 
 22 
 23         for(int i = 0; i < n; i++)
 24         {
 25                 sum = sum + student[i];// accessing elements via loop   
 26         }
 27 
 28         average = sum / n;             //calculating average
 29 
 30         for(int i = 0; i < n; i++)
 31         {
 32                 printf("Marks of student %d : %d\n", i + 1, student[i]);
 33         }
 34         printf("Sum is : %d\n", sum);
 35         printf("Average is : %d\n", average);
 36 
 37 
 38         return 0;
 39 }

```

### How to understand memory address of array ?

When a program containing an array of size n is compiled, the compiler allocates n blocks of memory for the array for storing the values of its elements. The size of each block depends on the data type of the array.



```c
#include <stdio.h>
  2 
  3 int main(void)
  4 {
  5         int a;
  6         char b;
  7         float c;
  8         double d;
  9         printf("The size of a: %ld\n", sizeof(a));
 10         printf("The size of b: %ld\n", sizeof(b));
 11         printf("The size of c: %ld\n", sizeof(c));
 12         printf("The size of d: %ld\n", sizeof(d));
 13 
 14         int intArray[5] = {10, 11, 12, 13, 15};
 15         printf("The size of intArray: %ld\n", sizeof(intArray));
 16         printf("The intArray memory address: %p\n", &intArray);
      //The address of an array is the address of the first element of the array.
 17         printf("The intArray memory address: %p\n", intArray);       
            // The & is not necessary.
      		//The name of an array holds the address of the array.
 18         // The name fo array is address.
 19 
 20         // The memory address of array elements
 21 
 22         for(int i = 0; i < 5; i++)
 23         {
 24 
 25                 printf("The %drd element memory address: %p\n",i+1, &intArray[i]);
 26         }
 27         return 0;
 28 
 29 }
 30 

```



We know that each byte is numbered and this number represents the address of the byte.

The address of an array is the address of the first element of the array.

In the above array, the first element is allocated 4 bytes. The number of the first byte is the address of the element. Similarly, the second element is also residing on the next 4 bytes. Here also the number of the first byte of this block of memory is the address of the second element. The same argument holds for other elements of the array as well. 

The name of an array holds the address of the array. It may be extracted by simply calling the name of array as illustrated in the following code for the array intArray[5]:

```c
printf("%p", intArray);
```

The address of any element of an array may also be extracted in a similar manner.

We have to call (name + offset). The offset is equal to the subscript or index value of the element. Thus, for obtaining the address of the second member of array intArray[5], the code may be written as given below.

```c
printf("%p", intArray + 1);
```

Similarly, for obtaining the address of any one element of array the  code may bi written as follow:

```c
printf("%p", intAray + (offset of element));
```

**The value of offset is same as the index value of the element.**

### Multi-dimensional array in C

Here is  the general form of a multidimensional array declaration:

```c
type name[size1][size2]...[sizen]
```

**Two-dimensional Arrays**

Different ways to initialize two-dimensional array

```c
int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
int c[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
int c[2][3] = {1, 3, 0, -1, 5, 9};
```

Initialization of a 3-dimensional array

You can initialize a three-dimensional array in similar way like two-dimensional array.

```c
int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
```



```c
#include <stdio.h>
int main()
{
int a[5][2] = {
	{0, 0},
	{1, 2},
	{3, 4},
	{4, 5},
	{5, 6}
	};
    
    int i, j;
	// output each array element's vlaue
    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
        	printf("a[%d][%d] = %d\n", i, j, a[i][j]);  
        }
    }
    return 0;
}

```

Example 1: Two-dimensional array to store and print values









**Accessing array elements**

The elements of array can be accessed by programmer with the help of index number of the element.
**Note: 1st element is present at the 0th index, 2nd element is present at the 1st index, and so on.** 

















## C Language Advanced

## C Language Standard Library

## C Language E-books

## C Language Pictures

## C Language Exercises

