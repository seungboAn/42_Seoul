# ft_printf
A recreation of the printf function from the C standard library

## Project Overview
This project involves recreating the printf function, one of the most versatile and widely used functions in C. The implementation includes handling various format specifiers and conversion flags.

## Learning Objectives

### 1. Variadic Functions
- Understanding variable argument lists
- va_start, va_arg, va_end usage
- Argument type handling
- Parameter parsing

### 2. String Formatting
- Format specifier parsing
- String manipulation
- Number to string conversion
- Character encoding

### 3. Memory Management
- Buffer management
- Dynamic memory allocation
- Memory efficiency
- String concatenation

### 4. Type Conversion
- Integer to string conversion
- Floating point handling
- Hexadecimal conversion
- Pointer address formatting

### 5. Error Handling
- Input validation
- Edge cases management
- Buffer overflow prevention
- Return value handling

## Technical Details

### Function Prototype
```c
int ft_printf(const char *format, ...);
```

### Supported Format Specifiers
- %c - Character
- %s - String
- %p - Pointer address
- %d - Decimal integer
- %i - Integer
- %u - Unsigned integer
- %x - Hexadecimal (lowercase)
- %X - Hexadecimal (uppercase)
- %% - Percent sign

### Implementation Components

1. **Parser**
   - Format string analysis
   - Specifier identification
   - Flag detection
   - Width and precision parsing

2. **Converter**
   - Number base conversion
   - String formatting
   - Character handling
   - Pointer address formatting

3. **Output Handler**
   - Buffer management
   - Write operations
   - Length tracking
   - Error handling

## Implementation Guidelines

### Main Structure
```c
typedef struct s_format
{
    va_list args;
    int     width;
    int     precision;
    int     total_length;
    // Additional format flags
} t_format;

int ft_printf(const char *format, ...)
{
    t_format    fmt;
    int         i;

    // Initialize format structure
    // Parse format string
    // Handle each specifier
    // Return total length
}
```

### Key Functions
1. **Format Parsing**
   - Identify format specifiers
   - Extract width and precision
   - Handle flags

2. **Type Handling**
   - Character printing
   - String formatting
   - Number conversion
   - Pointer handling

3. **Output Management**
   - Buffer writing
   - Length tracking
   - Error checking

## Testing Strategy

### Basic Tests
- Simple string printing
- Basic format specifiers
- Number formatting
- Character output

### Edge Cases
- NULL pointers
- Empty strings
- Maximum/minimum values
- Invalid format strings

### Comparison Tests
- Output matching with real printf
- Return value verification
- Error handling comparison

## Skills Developed
- Variadic function handling
- String manipulation
- Type conversion
- Memory management
- Code organization
- Error handling

## Common Challenges
1. Handling multiple format specifiers
2. Memory management
3. Edge case handling
4. Performance optimization
5. Matching printf behavior exactly

## Bonus Features
- Field width handling
- Precision specification
- Zero padding
- Left alignment
- Space/plus sign flags 