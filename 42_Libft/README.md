# Libft
Your Very First Own Library

## Project Overview
Libft is the first project at 42 school where students create their own C library. This library will be used in most subsequent projects throughout the curriculum. The project involves recreating various standard C library functions as well as implementing additional utility functions.

## Learning Objectives

### 1. Standard Library Functions
#### String Manipulation
- ft_strlen
- ft_strcpy
- ft_strncpy
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split

#### Memory Operations
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memccpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

#### Character Operations
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

#### String to Number Conversion
- ft_atoi
- ft_itoa

### 2. Additional Functions
#### Linked List Operations
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

#### String Manipulation
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi

## Technical Details

### Function Prototypes
```c
// Part 1 - Libc functions
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);

// Part 2 - Additional functions
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
```

## Implementation Guidelines

### 1. Function Requirements
- Must follow 42's Norm
- No undefined behaviors
- Memory must be properly allocated/freed
- Must use allowed functions only
- Must handle error cases

### 2. Project Structure
- Makefile
- Header file
- Source files
- Bonus files (optional)

## Testing Strategy

### Basic Tests
- Function behavior
- Memory management
- Error handling
- Edge cases
- Performance

### Memory Tests
- Memory leaks
- Invalid memory access
- Buffer overflows
- Memory allocation failures

## Skills Developed
- C programming
- Memory management
- Function implementation
- Library creation
- Makefile usage
- Documentation
- Testing

## Common Challenges
1. Memory management
2. String manipulation
3. Linked list implementation
4. Error handling
5. Performance optimization

## Best Practices
- Clean code
- Proper error handling
- Memory safety
- Documentation
- Testing coverage
- Code organization

## Bonus Features
- Linked list functions
- Additional string functions
- Custom utility functions

## Debugging Tools
- GDB/LLDB
- Valgrind
- Address Sanitizer
- Unit tests
- Memory checkers

## Additional Resources
- C Standard Library documentation
- Memory management guides
- String manipulation tutorials
- Linked list implementations
- Testing frameworks

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
