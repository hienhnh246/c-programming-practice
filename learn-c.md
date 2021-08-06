## Table of Contents

* Introduction
  1. [Getting Started](#getting-started-with-c)
  2. [Literals and Variables](#literals-and-variables)
  3. [Data Types](#data-types)

<br/>

## Getting Started With C

Welcome to this interactive tutorial on C programming.

This course covers all the fundamentals of C programming, step by step. By the end, you will be comfortable programming in C.

Before we start, we have an important tip for you. The only way you can get better at programming is by writing code.

Next, we will write our first program in the code editor.

### "Hello, World!" Program

Let's write our first C program. We will write a program called **"Hello, World!"**. It is a simple program that displays `"Hello, World!"` on the screen.

```c
#include <stdio.h>

int main() {
	printf("Hello, World!");
	return 0;
}
```

The output should read:

```
Hello, World!
```

If you got this output, congratulations because you have executed your first program.

Next, we will see how this program works in brief.

### Working of the Program

> **Note:** If you do not understand everything on this page, that's okay; we will revisit these topics in detail in the upcoming lessons.

Here are the different sections of the "Hello, World!" program.

1. main() Function

```c
int main() {
	... .. ...
}
```

A valid C program must include the `main()` function. The C compiler starts executing code from this function.

> **Note:** A compiler is a special program that converts our code into machine code (code that the computer understands).

2. printf() Function

```c
printf("Hello, World!");
```

Inside the `main()` function, there is a `printf()` function. This function displays the text inside quotations.

For `printf()` to work, we must use `#include <stdio.h>` in our program.


3. return 0;

```c
return 0;
```

The program ends with this statement.

### What to Remember for Now?

Here, we will see what's the minimum we need to understand at this point so that we can move forward in this course.

For now, we just need to remember that every C program we will write will have this format.

```c
#include <stdio.h>

int main() {
	// we will write code here.

	return 0;
}
```

**Thing to Remember**

* The C compiler starts running code from the `main()` function.
* We will write our code after the starting bracket `{`.
* The program ends when `return 0;`, is reached.

Now that we know the bare minimum structure of a C program, we will start to learn the fundamental concepts of C programming.

<br/>

## Literals and Variables

In this lesson, we will learn about two concepts: literals and variables.

**Literals**

Literals are fixed values that we can use directly in our program. For example, `5`, `-12.5`, `'c'` etc.

**Variables**

Variables allow us to store these literal values so that we can use them later.

Next, we will learn about different types of values (literals) we can use directly in our C program.

### Different Types of Literals

For now, we will look at three types of literals:

1. **Integer Literals** - Numbers without a decimal part. For example, `4`, `-6`, `0`, `136` etc.
2. **Floating-point Literals** - Numbers that have a decimal part. For example, `4.5`, `-5.76`, `2.0` etc.
3. **Character Literals** - A single character. They are enclosed within single quotation marks. For example, `'a'`, `'}'`, `'F'`, `'+'` etc.

We can use these literals directly in our program.

Now that we know what literals are, we will learn to store these literals next.

### Variables

Every programming language has a concept called **variables** that allows us to store data like integers and characters.

To indicate the storage area, each variable is given a unique name. For example,

```c
int age;
```

Here, we have created a variable named `age`. This variable can only store integer values. We know this because we have used `int` to declare it.

> **Note:** The semicolon after the variable name is mandatory. It indicates the end of the statement.

Next, we will see how we can define a variable that can store decimal numbers.

### Creating a double Variable

To create a variable that can store decimal numbers, we can use `double`. For example,

```c
double salary;
```

Here, `salary` is a variable that can only store floating-point numbers (decimal numbers).

In C programming, every variable must have a type that indicates the type of data it can store. We will only work with variables of `int` and `double` type in this lesson.

Next, we will see how we can store values in variables.

### Assign Values to Variables

After we declare a variable, here is how we can assign values to it.

```c
int age;
age = 25;
```

Here,

* `int ages;` creates a variable `age` of type `int`. This variable can only store integer values.
* `age = 25;` assigns **25** to the `age` variable. We use the `=` operator to assign value in the right to the variable on the left.

**Assigning Value during Declaration**

We can also assign a value to a variable during it's declaration. For example,

```c
int age = 25;
```

Next, we will see how we can change the value stored in a variable.

### Changing Variable Values

As suggested by the name, **variable**, we can change the value stored in a variable. For example,

```c
int age = 18;
age = 25;
```

Initially, 18 was stored in the variable.

```c
int age = 18;
```

It's value is then changed to 25 using

```c
age = 25;
```

> **Note:** When we change the value of a variable, the type of value and variable must match. For example, `age` is a variable of type `int`; we cannot store decimal numbers to it.

Next, we will print the values stored in variables.

### Print Variables

Run the following program below to get the feel of how variables are used in a C program.

```c
#include <stdio.h>

int main() {
	int age = 18;
	printf("age (before): %d\n", age);

	age = 25;
	printf("age (after): %d", age);

	return 0;
}
```

**Output**

```
age (before): 18
age (after): 25
```

> **Note:** We will cover the topic of printing variables in detail in the upcoming lessons.

Next, we will learn to declare multiple variables at once in a single statement.

### Declare Multiple Variables At Once

We can declare multiple variables at once by separating them with commas.

**Example 1**

```c
int number1, number2;
```

**Example 2**

```c
double tax, salary = 4567.9;
```

Here, we have created two variables: `tax` and `salary`. And, we have assigned **4567.9** to the `salary` variable.

Next, we will look at rules for naming variables.

### Rules for Naming a Variable

* A variable name (identifier) consists of alphabets, digits, and an underscore `_`.
* The first letter of a variable should either be a letter or an underscore.
* There are certain reserved words (**keywords**) that cannot be used as variable names. For example, `int`, `double`, `if` etc. It's because these keywords are part of the C language syntax.

**Tip:** Always try to give meaningful variable names. This makes your code easier to write and understand. For example, `firstName` is a better variable name than `fn`.

In C programming, every variable must be of a specified type like `int` and `double`. Next, we will learn about these data types in detail.

<br/>

## Data Types

### Introduction

In the last lesson, we learned to create variables. For example,

```c
int age;
```

Here, we have used the `int` keyword to declare a variable named `age`. This means the data type of the `age` variable is `int`.

Data types determine the **type** and the **size** of data associated with variables. 

The int type
* can only store integers
* size is typically 4 bytes

Next, we will learn about `int` and other data types in detail.

### Data Type: int

* The `int` variables can only store integers.
* The size of an `int` variable is usually 4 bytes (32 bits).
* This means it can take `2^32` distinct integer values from **-2147483648** to **2147483647**.

**Example:**

```c
int age, user_id = 45;
```

Here, `age` and `user_id` are variables of type `int`. And, we have assigned 45 to the `user_id` variable.

### Data Type: float and double

* Both `float` and `double` variables can store floating-point numbers (decimal numbers).
* The size of a `double` variable is **8 bytes**. And, the size of a `float` variable is **4 bytes**.
* This means `double` variables can store numbers with better precision.

**Example:**

```c
double number1 = 45.67;
float number2 = 45.67f;
```

Here, both variables `number1` and `number2` have the same value **45.67**. However, to indicate that **45.67** is a `float` value, we need to use either `f` or `F` at the end like `45.67f`.

> **Note:** Unless you have a specific requirement, always use `double` to create decimal numbers.

**Exponential Numbers**

The `double` data type can also be used to store exponential numbers. For example,

```c
double factor = 22.44e6;
```

Here, ``22.44e6`` is equivalent to ``22.44 * 10^6``.

### Data Type: char

* The `char` type variables are used for characters.
* It's size is 1 byte.

**Example:**
```c
char letter = 'g';
```

> **Note:** To represent a single character, we put the character inside single quotations. For example, `'('`, `'h'`, `'8'` etc.

### long Keyword

If we need to store large numbers, we can use the `long` keyword before `int` and `float`. For example,

```c
long int number1 = 3147483647;
long double number2;
```

* The size of `int` is usually 4 bytes. However, the size of `long int` is usually 8 bytes.
* The size of `double` is 8 bytes. However, the size of `long double` is at least 10 bytes.

### Summary: Data Types

Here's a summary of all the data types we learned in this chapter.

Type   | Used for | Size
-------|----------|------
`int` | integers | usually 4 bytes
`double` | real numbers | 8 bytes
`float` | real numbers | 4 bytes
`char` | characters | 1 bytes
`long int` | integers | usually 8 bytes
`long double` | real numbers | at least 10 bytes

Now that we know about values and variables, we will learn to print them in the next chapter.