# CPT113 - Data Structures (Assignment 2)

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="Language" />
  <img src="https://img.shields.io/badge/Course-CPT113-24292e?style=for-the-badge" alt="Course" />
  <a href="https://github.com/ahmedtags">
    <img src="https://img.shields.io/badge/Profile-ahmedtags-D9A34A?style=for-the-badge&logo=github&logoColor=white" alt="Profile" />
  </a>
  <a href="https://blxman-37fy.vercel.app/">
    <img src="https://img.shields.io/badge/Portfolio-blxman--37fy-0A66C2?style=for-the-badge&logo=googlechrome&logoColor=white" alt="Portfolio" />
  </a>
</p>

---

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

---

## 📸 Sample Output

```
--- iTaxPro Menu ---
1. Display All Individuals
2. Search Individual by Job ID
3. Add Individual
4. Delete Individual by Job ID
5. Show Category
6. Count Individuals in Tax Categories
7. Exit
Enter your choice: 3
Enter Name: Ali Hassan
Enter Job ID: J001
Enter Annual Income: 85000

Enter your choice: 3
Enter Name: Nora Said
Enter Job ID: J002
Enter Annual Income: 42000

Enter your choice: 1
Name            Job ID          Annual Income   Chargeable Income       Estimated Tax
----------------------------------------------------------------------------
Ali Hassan      J001            85000RM         73950RM                 4450.5
Nora Said       J002            42000RM         36540RM                 692.4

Enter your choice: 6

Tax Categories Count:
Category A : 0 individuals
Category B : 0 individuals
Category C : 0 individuals
Category D : 1 individuals
Category E : 0 individuals
Category F : 1 individuals
Category G : 0 individuals
Category H : 0 individuals
Category I : 0 individuals
Category J : 0 individuals

Enter your choice: 7
Exiting program. Goodbye
```
