#Examination Schedule System Using Singly Linked List in C

 Project Overview

The Examination Schedule System is a simple C programming project that manages examination schedules using a Singly Linked List. It allows users to add, display, and manage exam details dynamically.

 Introduction

The Examination Schedule System is designed to help users organize and manage examination details efficiently. It uses a singly linked list to store subject names, examination dates, and examination times. Since linked lists allow dynamic memory allocation, the system can manage a flexible number of examination records without requiring a fixed-size array.

 Problem Statement

Managing examination schedules manually can be difficult and may lead to confusion, missing information, or incorrect records. A computerized system is needed to store and display examination details in an organized manner. This project solves the problem by providing a simple menu-driven application that uses a singly linked list to manage examination schedules dynamically.

 Objectives

To create an examination schedule management system.

To implement a singly linked list in C.

To store exam details dynamically.

To perform insertion and display operations.

 Technologies Used

Programming Language: C

Data Structure: Singly Linked List

Platform: GCC Compiler / VS Code

 Working of the Project

The project uses nodes to store examination details. Each node contains the subject name, examination date, examination time, and a pointer to the next node.

When a user adds an examination record, memory is allocated dynamically for a new node. The new node is connected to the existing list. When the user chooses to display the schedule, the program traverses the linked list from the first node to the last node and prints each examination record.

The system continues to operate until the user selects the exit option.

Stages Included

Start the program

Display the menu

Add examination details

Create a new linked-list node

Insert the node into the schedule

Display all examination records

Traverse the linked list

Exit the program and release memory

 Features

Add examination details.

Display the examination schedule.

Store subject name, exam date, and exam time.

Manage records dynamically using linked lists.

Applications

Managing school examination schedules.

Organizing college and university exam timetables.

Maintaining subject-wise examination records.

Demonstrating linked-list implementation in academic projects.

Practicing dynamic memory allocation and pointer operations in C.

 Project Structure

examination-schedule-system/
│
├── examination_schedule.c
└── README.md

 How to Run the Project

Clone the repository:

git clone YOUR_REPOSITORY_URL

Open the project folder:

cd examination-schedule-system

Compile the C program:

gcc examination_schedule.c -o exam_schedule

Run the program:

Windows:

exam_schedule.exe

Linux/macOS:

./exam_schedule
Data Structure Used

A Singly Linked List consists of nodes, where each node contains:

Subject details

Examination date and time

A pointer to the next node

Each node points to the next node, and the last node points to NULL.

 Advantages

Dynamic memory allocation.

Efficient insertion of examination records.

Flexible management of schedule data.

 Conclusion

The Examination Schedule System demonstrates the practical use of a singly linked list in C programming. It provides a simple way to store and display examination schedules while improving understanding of dynamic memory allocation and linked-list operations.
