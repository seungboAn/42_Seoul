# Get Next Line (GNL)
Reading a Line from a File Descriptor

## Project Overview
Get Next Line is a programming project that challenges students to create a function that reads a line from a file descriptor. This project introduces the concepts of static variables, file operations, and memory management in C programming.

## Learning Objectives

### 1. File Operations
- File descriptor handling
- Reading from files
- Buffer management
- EOF handling

### 2. Memory Management
- Static variables
- Dynamic memory allocation
- Memory leaks prevention
- Buffer management

### 3. String Manipulation
- Line parsing
- String concatenation
- Newline handling
- Buffer operations

## Technical Details

### Function Prototype
```c
int get_next_line(int fd, char **line);
```

### Return Values
- 1: A line has been read
- 0: EOF has been reached
- -1: An error occurred

### Implementation Requirements
- Buffer size can be modified during compilation
- Must handle multiple file descriptors
- No memory leaks allowed
- Limited number of static variables

### Example Usage
```c
int main(void)
{
    int fd;
    char *line;
    int ret;

    fd = open("test.txt", O_RDONLY);
    while ((ret = get_next_line(fd, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

## Implementation Guidelines

### 1. Core Function
- Read from file descriptor
- Handle buffer management
- Process line endings
- Manage memory allocation

### 2. Helper Functions
- Buffer manipulation
- String operations
- Memory management
- Error handling

### 3. Static Variables
- Buffer storage
- Position tracking
- State management

## Testing Strategy

### Basic Tests
- Single line files
- Multiple line files
- Empty files
- No newline at EOF
- Large files

### Edge Cases
- Invalid file descriptors
- Memory allocation failures
- Different line endings
- Buffer size variations
- Multiple file descriptors

## Skills Developed
- File I/O operations
- Memory management
- Buffer handling
- Static variables
- Error handling
- Code organization

## Common Challenges
1. Memory leaks
2. Buffer management
3. EOF handling
4. Multiple file descriptors
5. Performance optimization

## Best Practices
- Clean code structure
- Proper error handling
- Memory safety
- Efficient buffer management
- Clear documentation
- Comprehensive testing

## Bonus Features
- Multiple file descriptor support
- Variable buffer size
- Binary file handling
- Error recovery
- Performance optimization

## Debugging Tools
- GDB/LLDB
- Valgrind
- Address Sanitizer
- File I/O tests
- Memory checkers

## Additional Resources
- File I/O documentation
- Memory management guides
- Buffer handling tutorials
- Static variable usage
- Testing frameworks 