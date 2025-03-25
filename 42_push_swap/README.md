# push_swap
A Sorting Algorithm Project Using Two Stacks

## Project Overview
Push_swap is a project that challenges you to sort data on a stack using a limited set of operations. The goal is to create an efficient sorting algorithm using two stacks and a specific set of operations.

## Learning Objectives

### 1. Algorithm Design
- Sorting algorithm development
- Complexity analysis
- Algorithm optimization
- Operation minimization

### 2. Stack Operations
- Stack data structure
- Push and pop operations
- Stack manipulation
- Dual stack coordination

### 3. Algorithm Analysis
- Time complexity
- Space complexity
- Operation count optimization
- Edge case handling

### 4. Problem Solving
- Algorithm strategy
- Operation sequence planning
- Edge case handling
- Performance optimization

### 5. Code Organization
- Modular programming
- Data structure implementation
- Error handling
- Code optimization

## Technical Details

### Available Operations
- `sa`: Swap first two elements of stack A
- `sb`: Swap first two elements of stack B
- `ss`: sa and sb at the same time
- `pa`: Push top element from stack B to stack A
- `pb`: Push top element from stack A to stack B
- `ra`: Rotate stack A up by one
- `rb`: Rotate stack B up by one
- `rr`: ra and rb at the same time
- `rra`: Rotate stack A down by one
- `rrb`: Rotate stack B down by one
- `rrr`: rra and rrb at the same time

### Data Structures

```c
typedef struct s_stack {
    int     *numbers;
    int     size;
    int     top;
} t_stack;

typedef struct s_data {
    t_stack *stack_a;
    t_stack *stack_b;
    int     total_ops;
} t_data;
```

## Implementation Guidelines

### Core Components

1. **Input Processing**
```c
int parse_input(int argc, char **argv, t_data *data)
{
    // Validate input
    // Convert strings to integers
    // Check for duplicates
    // Initialize stacks
}
```

2. **Stack Operations**
```c
void swap(t_stack *stack);
void push(t_stack *src, t_stack *dst);
void rotate(t_stack *stack);
void reverse_rotate(t_stack *stack);
```

3. **Sorting Algorithm**
```c
void sort_stack(t_data *data)
{
    // Implement sorting strategy
    // Optimize operation count
    // Handle different sizes
}
```

## Algorithm Strategies

### Small Sort (≤ 5 elements)
1. Hardcoded optimal solutions
2. Direct comparison-based sorting
3. Minimal operation sequences

### Large Sort
1. Chunk-based sorting
2. Quick sort adaptation
3. Insertion sort optimization
4. Operation count minimization

## Performance Requirements

### Operation Limits
- 3 numbers: ≤ 3 operations
- 5 numbers: ≤ 12 operations
- 100 numbers: ≤ 700 operations
- 500 numbers: ≤ 5500 operations

## Testing Strategy

### Basic Tests
- Small number sets
- Ordered sequences
- Reverse ordered sequences
- Random sequences

### Edge Cases
- Negative numbers
- Duplicate numbers
- Maximum/minimum values
- Single element

### Performance Tests
- Large datasets
- Operation counting
- Memory usage
- Edge case handling

## Skills Developed
- Algorithm design
- Data structure implementation
- Optimization techniques
- Problem-solving
- Code organization

## Common Challenges
1. Operation count optimization
2. Large dataset handling
3. Edge case management
4. Algorithm efficiency
5. Memory management

## Bonus Features
- Error management
- Operation visualization
- Performance statistics
- Multiple sorting algorithms
- Interactive mode
