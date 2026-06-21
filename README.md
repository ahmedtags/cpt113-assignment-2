# CPT113 - Data Structures (Assignment 2)

This repository contains the C++ LinkedList implementation for **CPT113: Data Structures - Assignment 2** (Academic Session 2024/2025) at Universiti Sains Malaysia (USM).

## Course Details
- **Course Code:** CPT113
- **Course Name:** Data Structures
- **Semester:** Year 1, Semester 2 (2024/2025)
- **Project Title:** Linked List Data Structure Implementation

---

## Assignment Overview

The assignment focuses on implementing a Singly and Doubly Linked List data structure in C++ using object-oriented design:
1. **LinkedList Class (`LinkedList_class.h`):** Template-based linked list with insert, delete, search, traverse, and display operations.
2. **Person Class (`Person_Class.h`):** Custom object class to be stored as node data inside the linked list.
3. **Driver Program (`main.cpp`):** Tests all linked list operations including inserting at head/tail, deleting by value, searching, and printing the complete list.

---

## What I Did
- Developed the templated `LinkedList` class in [`LinkedList_class.h`](LinkedList_class.h) with a set of node-based insert, delete, and traverse methods.
- Created a `Person` custom object class in [`Person_Class.h`](Person_Class.h) to use as the stored data type.
- Wrote the `main.cpp` driver that tests all operations end-to-end.
- Consolidated the original assignment guideline: [`Assignment 2_(2024)_1.1.pdf`](Assignment%202_%282024%29_1.1.pdf).

---

## Tools & Tech Stack
- **Language:** C++ (classes, templates, dynamic memory allocation, pointers)
- **IDE/Compiler:** GCC / MinGW or Visual Studio

---

## How to Run

1. Compile with all header files in the same directory:
   ```bash
   g++ main.cpp -o linked_list_app
   ```
2. Run the executable:
   ```bash
   ./linked_list_app
   ```
3. The program will demonstrate linked list operations and print the resulting node values to the console.
