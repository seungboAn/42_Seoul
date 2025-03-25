# ft_containers
C++ STL Container Implementation

## Project Overview
ft_containers is a project that involves reimplementing several container types from the C++ Standard Template Library (STL). The goal is to understand the inner workings of STL containers by implementing them from scratch while maintaining the same functionality and performance characteristics.

## Learning Objectives

### 1. Container Implementation
- Vector
- Stack
- Map
- Set (bonus)
- Queue (bonus)
- Deque (bonus)

### 2. Iterator Implementation
- Input iterators
- Output iterators
- Forward iterators
- Bidirectional iterators
- Random access iterators

### 3. Algorithm Understanding
- Memory allocation
- Data structure operations
- Time complexity
- Space complexity
- Iterator operations

## Technical Details

### Vector Implementation
```cpp
template <class T, class Allocator = std::allocator<T> >
class vector {
private:
    T* _data;
    size_t _size;
    size_t _capacity;
    Allocator _alloc;

public:
    // Member types
    typedef T value_type;
    typedef Allocator allocator_type;
    typedef typename allocator_type::reference reference;
    typedef typename allocator_type::const_reference const_reference;
    typedef typename allocator_type::pointer pointer;
    typedef typename allocator_type::const_pointer const_pointer;
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    typedef ptrdiff_t difference_type;
    typedef size_t size_type;

    // Member functions
    vector();
    explicit vector(const allocator_type& alloc);
    explicit vector(size_type count, const T& value = T(), const Allocator& alloc = Allocator());
    template <class InputIt> vector(InputIt first, InputIt last, const Allocator& alloc = Allocator());
    vector(const vector& other);
    ~vector();
    vector& operator=(const vector& other);
};
```

### Map Implementation
```cpp
template <class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<std::pair<const Key, T> > >
class map {
private:
    typedef struct s_node {
        std::pair<const Key, T> data;
        struct s_node* left;
        struct s_node* right;
        struct s_node* parent;
        int height;
    } t_node;

    t_node* _root;
    size_t _size;
    Compare _comp;
    Allocator _alloc;

public:
    // Member types and functions similar to vector
};
```

## Implementation Guidelines

### 1. Container Requirements
- Must follow C++98 standard
- Must implement all member functions
- Must maintain STL container time complexities
- Must handle memory properly
- Must implement appropriate iterators

### 2. Testing Requirements
- Compare with STL containers
- Test all member functions
- Test edge cases
- Test performance
- Test memory usage

## Testing Strategy

### Functional Tests
- Member function behavior
- Iterator operations
- Exception handling
- Memory management
- Edge cases

### Performance Tests
- Time complexity
- Space complexity
- Memory allocation
- Iterator efficiency
- Comparison with STL

## Skills Developed
- Template programming
- Memory management
- Data structures
- Algorithm implementation
- Iterator design
- Testing methodology

## Common Challenges
1. Memory management
2. Iterator implementation
3. Exception safety
4. Performance optimization
5. Template programming

## Best Practices
- Clean code architecture
- Proper documentation
- Efficient algorithms
- Memory safety
- Exception handling
- Testing coverage

## Performance Considerations
- Memory allocation efficiency
- Operation complexity
- Iterator efficiency
- Exception handling overhead
- Template instantiation

## Debugging Tools
- Memory checkers
- Performance profilers
- Unit tests
- Iterator tests
- Comparison tests

## Additional Resources
- C++98 Standard
- STL documentation
- Container specifications
- Iterator requirements
- Algorithm complexity guidelines 