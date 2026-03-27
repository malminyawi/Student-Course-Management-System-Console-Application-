# Student Course Management System

A C++ console application that manages students and their enrolled courses, applying Object-Oriented Programming (OOP) principles and the Standard Template Library (STL).

---

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Compiling](#compiling)
  - [Running](#running)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Built With](#built-with)
- [Author](#author)

---

## About the Project

This is a menu-driven console application developed in C++ for managing student records and course enrollments. It demonstrates the use of inheritance, encapsulation, STL containers (`vector`, `set`), and STL algorithms (`sort`, `remove_if`).

---

## Features

- Add a student with a unique ID, name, and GPA
- Remove a student by ID
- Search for a student by ID
- Display all students
- Enroll a student in a course (no duplicates allowed)
- Display all courses for a student
- Sort students by GPA (descending)

---

## Getting Started

### Prerequisites

- A C++ compiler that supports **C++11** or later
  - **GCC** (g++) — recommended
  - **Clang** (clang++)
  - **MSVC** (Visual Studio)
- **Operating System:** Windows, macOS, or Linux

### Installation

1. Clone the repository:

```bash
git clone https://github.com/your-username/student-management-system.git
cd student-management-system
```

2. Or download the source file directly:

```bash
# Just download the .cpp file
wget https://raw.githubusercontent.com/your-username/student-management-system/main/final_project_c__.cpp
```

### Compiling

**Linux / macOS (using g++):**

```bash
g++ -std=c++11 -o student_system final_project_c__.cpp
```

**Windows (using g++ via MinGW or WSL):**

```bash
g++ -std=c++11 -o student_system.exe final_project_c__.cpp
```

**Using Visual Studio (MSVC):**

Open the `.cpp` file in Visual Studio and press `Ctrl+F5` to build and run.

### Running

**Linux / macOS:**

```bash
./student_system
```

**Windows:**

```bash
student_system.exe
```

---

## Usage

When the program starts, you will see the main menu:

```
===== MENU =====
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Enter choice:
```

**Example — Adding a Student:**

```
Enter choice: 1
Enter ID: 1001
Enter Name: Ali
Enter GPA: 3.5
Student added successfully.
```

**GPA Constraints:** Must be between `0.0` and `4.0`.  
**ID Constraints:** Must be unique across all students.  
**Course Constraints:** Duplicate courses for the same student are automatically rejected.

---

## Project Structure

```
student-management-system/
├── final_project_c__.cpp   # Main source file
└── README.md               # This file
```

---

## Built With

| Technology | Purpose |
|------------|---------|
| C++11 | Core programming language |
| `<vector>` | Dynamic student list storage |
| `<set>` | Duplicate-free course enrollment |
| `<algorithm>` | Sorting and removal algorithms |
| `<iostream>` | Console I/O |

---

## Author

- **Student Name:** [Your Name]
- **Student ID:** [Your ID]
- **Course:** Object-Oriented Programming with C++
- **Institution:** [Your University]
