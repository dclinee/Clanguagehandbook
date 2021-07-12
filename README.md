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

### How to declare an array?

There are a few different ways to declare an array in C.

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



## C Language Advanced

## C Language Standard Library

## C Language E-books

## C Language Pictures

## C Language Exercises

