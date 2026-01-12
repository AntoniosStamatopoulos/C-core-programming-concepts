# C Core Programming Concepts

This repository contains a collection of C and C++ programs that demonstrate fundamental systems programming concepts, memory management techniques, file handling, and command-line tools.

The projects focus on writing clean, efficient, and well-structured code using standard C/C++ libraries.

---

## 📂 Projects Overview

### 🔹 CLI Calculator (argv-based)
Command-line calculator that performs arithmetic operations using arguments passed to `main()`.

**Concepts:**  
`argc/argv`, loops, basic arithmetic

---

### 🔹 Array Search (void function with output parameter)
Searches for an element in an array using a `void` function and returns the result through an output parameter.

**Concepts:**  
Pointers, arrays, output parameters

---

### 🔹 Character Statistics (A–Z)
Counts the frequency of alphabetic characters (A–Z) in input strings using global counters.

**Concepts:**  
Strings, ASCII handling, global variables

---

### 🔹 Credit Card Number Validation (Luhn Algorithm)
Validates credit card numbers using the Luhn algorithm, implemented with pointer-based string traversal.

**Concepts:**  
Pointers, string processing, algorithms

---

### 🔹 Dynamic Array & Average Calculation
Dynamically allocates an integer array, fills it with random values, and computes the average.

**Concepts:**  
Dynamic memory allocation (`malloc`, `free`), random numbers

---

### 🔹 Dynamic Array Resize (realloc)
Resizes a dynamically allocated array using `realloc()` and initializes newly allocated elements.

**Concepts:**  
Memory resizing, safe memory management

---

### 🔹 Binary File Analyzer
Analyzes a binary file to:
- count total bytes
- compute the sum of all byte values
- count how many bytes are divisible by a given integer

**Concepts:**  
Binary file I/O, command-line arguments, byte-level processing

---

### 🔹 Record Management
Reads numeric data from a file, separates positive and negative values into different files, and performs aggregation on the results.

**Concepts:**  
File I/O, dynamic memory, data processing

---

## 🛠 Compilation

Most programs can be compiled using `gcc` or `g++`:

```bash
gcc program.c -o program
./program
