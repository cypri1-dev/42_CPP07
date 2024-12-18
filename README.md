<h1><img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/covers/cover-cpp-bonus.png"></h1> 

## Table of Contents

- [Overview](#overview)
- [Exercises](#exercises)
  - [Exercise 00: Generic Functions](#exercise-00-generic-functions)
  - [Exercise 01: `iter` Function](#exercise-01-iter-function)
  - [Exercise 02: Template Class `Array`](#exercise-02-template-class-array)
- [Requirements](#requirements)
- [Usage](#usage)

## Overview

This module explores C++ templates through practical exercises to enhance understanding and application. Each task focuses on creating flexible and reusable code.

## Exercises

### Exercise 00: Generic Functions

- **Objective**: Implement the following generic functions:
  - `swap`: Exchanges the values of two arguments.
  - `min`: Returns the smaller of two values. If equal, returns the second value.
  - `max`: Returns the larger of two values. If equal, returns the second value.
- **Key Features**:
  - Functions must work with any comparable types.
  - Templates must be defined in header files.

### Exercise 01: `iter` Function

- **Objective**: Implement a template function `iter` that applies a given function to each element of an array.
- **Key Features**:
  - Takes the address of an array, its length, and a function to apply.
  - Works with any type of array.

### Exercise 02: Template Class `Array`

- **Objective**: Develop a template class `Array` to handle elements of type `T`.
- **Key Features**:
  - Constructor without parameters: Creates an empty array.
  - Constructor with `unsigned int n`: Creates an array of `n` elements initialized by default.
  - Copy constructor and assignment operator: Ensure modifying one does not affect the other.
  - Access elements via `[]` with bounds checking. Throws an exception if out of bounds.
  - Member function `size()`: Returns the number of elements in the array.

## Requirements

- Templates must be fully implemented in header files.
- Memory management must use `new[]` without over-allocating.
- Code must not access unallocated memory.
