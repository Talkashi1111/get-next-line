# get_next_line

## Usage

The primary objective of this project is to implement a get_next_line() that reads from an opened file, identified by its file descriptor (FD), and returns the next line of text, stopping at the first newline character "\n" encountered. This process continues until the End Of File (EOF) is reached or a "\0" is found. the get_next_line() will return each time a char *next_line, a variable that was allocated and should be freed by you after use to evoid leaks. 
## basic usage:

```c
#include "get_next_line.h"
int main(void)
{
	int fd;
	fd = open("test.txt, O_RDONLY)", O_RDONLY);
	char *str = get_next_line(fd);
	printf("%s\n", str);
	free(str);
	str = NULL;
	return (0);
}
```
---

Compilation and Execution:

```shell
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c "your_func".c -D BUFFER_SIZE=<size> -o get_next_line
```

## Remarks
---
The function is implemented in C on Linux.
Upon each invocation, if the file remains open, the function remembers the position where the last newline was encountered and resumes reading from the next character.
## Data Structures:
- Linked List: Utilizes a linked list to store chunks of text read from the file in a buffer.
- Control Structure: Employs a secondary structure to maintain references to the head and tail of the linked list, facilitating efficient data management.
Data structure: single linked list with head and tail, where each node is a buffer of size BUFFER_SIZE. 
- In case last buffer include the mix of the end of current line and the beggining of the next one, the "cleanup" shift will be done in place(polish()), whithout additional allocations.  
- bonus part: Reading Many Files at Once

---
## Testing

Test Implementation: A supplementary file, main_tester.c, has been created to test the functionality of the bonus feature. This file specifically tests reading from multiple files.

Included Test File: The project includes a test.txt file for testing purposes, that is included in the same folder, but feel free to test it with other files.

Compilation and Execution: To compile and run the test, use the following command:


```
gcc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main_tester.c -o get_next_line
```



