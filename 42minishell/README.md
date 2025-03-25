# minishell
A Simple Shell Implementation

## Project Overview
Minishell is a project that involves creating a basic shell, similar to bash. It implements command interpretation, execution, and basic shell functionalities while handling various edge cases and shell features.

## Learning Objectives

### 1. Process Management
- Process creation
- Process execution
- Signal handling
- Process synchronization

### 2. Command Parsing
- Lexical analysis
- Syntax parsing
- Command tokenization
- Error handling

### 3. Environment Management
- Environment variables
- Shell variables
- Path resolution
- Variable expansion

### 4. File Operations
- File descriptor management
- Redirection handling
- Pipe implementation
- File permission handling

### 5. Shell Features
- Built-in commands
- Command history
- Line editing
- Signal handling

## Technical Details

### Required Features

1. **Command Line**
```c
typedef struct s_command {
    char    **args;          // Command arguments
    char    *input_file;     // Input redirection
    char    *output_file;    // Output redirection
    int     append;          // Append mode flag
    int     pipe;           // Pipe flag
} t_command;
```

2. **Built-in Commands**
- echo: Display messages
- cd: Change directory
- pwd: Print working directory
- export: Set environment variables
- unset: Remove environment variables
- env: Display environment
- exit: Exit the shell

### Implementation Components

1. **Parser**
```c
typedef struct s_token {
    char    *value;
    int     type;
    struct s_token *next;
} t_token;

t_token *tokenize_input(char *input);
t_command *parse_tokens(t_token *tokens);
```

2. **Executor**
```c
int execute_command(t_command *cmd, char **envp)
{
    // Handle built-ins
    // Create processes
    // Handle redirections
    // Execute commands
}
```

## Implementation Guidelines

### Core Components

1. **Input Processing**
- Line reading
- History management
- Signal handling
- Error detection

2. **Command Execution**
- Path resolution
- Process creation
- Status handling
- Error management

3. **Built-in Commands**
- Directory management
- Environment handling
- Shell control
- Variable management

## Features

### Basic Features
- Command execution
- Path handling
- Error management
- Signal handling

### Advanced Features
- Pipes
- Redirections
- Environment variables
- Quote handling

## Testing Strategy

### Basic Tests
- Simple commands
- Built-in commands
- File operations
- Environment handling

### Edge Cases
- Invalid commands
- Signal handling
- Memory management
- Error conditions

### Integration Tests
- Pipeline operations
- Complex commands
- Script execution
- Environment manipulation

## Skills Developed
- Process management
- Shell programming
- System calls
- Memory management
- Error handling
- Signal handling

## Common Challenges
1. Signal handling
2. Memory management
3. Command parsing
4. Process control
5. Error handling

## Bonus Features
- Command history
- Line editing
- Auto-completion
- Job control
- Shell scripting support

## Error Handling
1. **Syntax Errors**
   - Invalid commands
   - Missing arguments
   - Quote errors
   - Pipe errors

2. **Runtime Errors**
   - Command not found
   - Permission denied
   - File not found
   - Memory allocation failures

3. **Signal Handling**
   - Ctrl+C (SIGINT)
   - Ctrl+D (EOF)
   - Ctrl+\ (SIGQUIT)
   - Background processes 