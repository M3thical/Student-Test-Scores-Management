# Student Test Scores Management System

This project demonstrates how to manage student test scores using dynamic memory allocation, copy constructors, and operator overloading in C++. It allows you to create student records, store their test scores, and manage memory efficiently.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

This project contains the `StudentTestScore` class, which stores a student's name and their test scores. The number of test scores is dynamically allocated based on input, and memory is properly managed through a custom copy constructor and an overloaded assignment operator.

### Key Components:
- **Student Name**: Each student has a name that is stored as a string.
- **Test Scores**: Test scores are stored in a dynamically allocated array.
- **Dynamic Memory**: Proper memory management is ensured through constructors, destructors, and copy/assignment operators.

### Example Workflow:
- Create a `StudentTestScore` object for a student.
- Store the student's test scores dynamically.
- Retrieve and display the student's name and test scores.

## Purpose of Learning

This project was designed to practice the following key C++ programming concepts:
- **Dynamic Memory Allocation**: Allocating and deallocating memory for test scores using `new` and `delete`.
- **Copy Constructors**: Implementing a deep copy constructor to handle copying objects with dynamic memory.
- **Overloading Operators**: Properly managing memory when assigning one object to another with the overloaded `=` operator.
- **Encapsulation**: Using getter and setter methods to access private data members.

## Installation

To compile and run this program:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/student-test-scores.git
    ```

2. Navigate to the project directory:
    ```bash
    cd student-test-scores
    ```

3. Compile the program (if integrated with a main program):
    ```bash
    g++ main.cpp -o student_scores
    ```

4. Run the program:
    ```bash
    ./student_scores
    ```

## Usage

The `StudentTestScore` class can be used to store and manage student test scores dynamically. Below is a typical workflow:

1. **Create a Student Object**: Create a `StudentTestScore` object with the student's name and number of test scores.
2. **Set Test Scores**: Use the `setTestScore()` method to assign scores to the student.
3. **Retrieve Test Scores**: Retrieve the student's test scores and name using the appropriate getter methods.
4. **Copy Objects**: Use the copy constructor or assignment operator to create or assign new objects without memory issues.

## Features
Dynamic Memory: Test scores are stored in a dynamically allocated array, allowing flexibility in the number of scores.
Deep Copying: The copy constructor ensures deep copying of objects with dynamically allocated memory.
Assignment Operator: The assignment operator is overloaded to prevent memory leaks during object assignment.
Encapsulation: Getter and setter methods are used to access private members safely.
