# get-next-line

## Function Usage

The primary objective of this project is to implement a function that reads from an opened file, identified by its file descriptor (FD), and returns the next line of text, stopping at the first newline character ("\n") encountered. This process continues until the End Of File (EOF) is reached or a NULL TERMINATOR is found. the function will return each time a char *next_line, a variable that was malloc and will need to be freed from the main function to evoid leaks. 

## Remarks
---

## Functionality and Implementation
---
## 1. functionality
Upon each invocation, if the file remains open, the function remembers the position where the last newline was encountered and resumes reading from the next character.
## 2. Data Structures:
- Linked List: Utilizes a linked list to store chunks of text read from the file in a buffer.
- Control Structure: Employs a secondary structure to maintain references to the head and tail of the linked list, facilitating efficient data management.
- bonus part: Reading Many Files at Once

This special part of the project lets you read from more than one file at the same time. It does this by using different file descriptors for each file. This means you can handle several files together, which is a big step up from the basic version of the project where you could only work with one file at a time.

---
## Testing

Test Implementation: A supplementary file, main_tester.c, has been created to test the functionality of the bonus feature. This file specifically tests reading from multiple files.

Included Test File: The project includes a test.txt file for testing purposes, that is included in the same folder, but feel free to test it with other files.

Compilation and Execution: To compile and run the test, use the following command:


```
gcc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main_tester.c -o get_next_line
```



