# C File Handling

A collection of C programs demonstrating fundamental file handling operations using the C Standard Library. These programs illustrate how to create, read, write, copy, and process files for practical applications.

---

## Topics Covered

- File Handling
- File Input and Output
- Reading Files
- Writing Files
- Character Processing
- File Copying
- Student Record Management
- Grade Calculation

---

## Repository Structure

```
c-file-handling/
│
├── 01_Count_Characters_And_Lines/
│   ├── count_characters_and_lines.c
│   └── input.txt
│
├── 02_Copy_File/
│   ├── copy_file.c
│   ├── source.txt
│   └── destination.txt
│
├── 03_Student_Record_System/
│   ├── student_record_system.c
│   └── students.txt
│
└── README.md
```

---

# Programs Included

## 1. Count Characters and Lines

**File**

```
count_characters_and_lines.c
```

### Description

This program opens a text file, reads it character by character, counts the number of characters (excluding spaces, tabs, carriage returns, and newlines), and counts the total number of lines.

### Input File

```
input.txt
```

Example:

```
HELLO WORLD
JAVA
```

### Concepts Used

- File Reading
- `fopen()`
- `fgetc()`
- `fclose()`
- Character Counting
- Line Counting

---

## 2. Copy File

**File**

```
copy_file.c
```

### Description

This program copies all the contents from a source file to a destination file using character-by-character file operations.

### Files Used

- `source.txt`
- `destination.txt`

Example Source File:

```
HELLO
JAVA
PYTHON
```

### Concepts Used

- File Reading
- File Writing
- `fgetc()`
- `fputc()`
- `fopen()`
- `fclose()`

---

## 3. Student Record System

**File**

```
student_record_system.c
```

### Description

This program stores student information in a file, retrieves the records, calculates the total marks and average, and assigns grades based on the average marks.

### Data Stored

- Roll Number
- Student Name
- Five Subject Marks

### Output

- Total Marks
- Average Marks
- Grade

### Grade Criteria

| Average | Grade |
|---------:|:-----:|
| 90 and above | A |
| 80–89 | B |
| 70–79 | C |
| 60–69 | D |
| Below 60 | F |

### Concepts Used

- File Reading
- File Writing
- `fprintf()`
- `fscanf()`
- Arrays
- Loops
- Conditional Statements

---

# Learning Outcomes

After completing these programs, you will understand:

- File handling in C
- Creating and opening files
- Reading data from files
- Writing data to files
- Copying file contents
- Character-by-character file processing
- Managing records using files
- Calculating averages and grades
- Basic error handling in file operations

---

# Technologies Used

- **Language:** C
- **Compiler:** GCC / Code::Blocks / Turbo C / Visual Studio Code

### Header Files

- `stdio.h`

---

# Functions Used

| Function | Purpose |
|----------|---------|
| `fopen()` | Opens a file |
| `fclose()` | Closes a file |
| `fgetc()` | Reads one character from a file |
| `fputc()` | Writes one character to a file |
| `fprintf()` | Writes formatted data to a file |
| `fscanf()` | Reads formatted data from a file |

---

# How to Compile

### Count Characters and Lines

```bash
gcc count_characters_and_lines.c -o output
./output
```

### Copy File

```bash
gcc copy_file.c -o output
./output
```

### Student Record System

```bash
gcc student_record_system.c -o output
./output
```

---

# Author

Created for learning and practicing **File Handling in C Programming**, covering file input/output operations, file processing, and record management.
