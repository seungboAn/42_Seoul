# so_long
A 2D Game Development Project using MinilibX

## Project Overview
So_long is a simple 2D game project that introduces game development concepts using the MinilibX graphics library. The project focuses on creating an engaging game with basic graphics, player movement, and collision detection.

## Learning Objectives

### 1. Graphics Programming
- MinilibX library usage
- Window management
- Image rendering
- Animation basics
- Event handling

### 2. Game Development
- Game loop implementation
- Player movement
- Collision detection
- Map parsing
- Score tracking

### 3. File Operations
- Map file reading
- File format validation
- Error handling
- Resource management

### 4. Memory Management
- Dynamic memory allocation
- Resource cleanup
- Memory leak prevention
- Texture management

### 5. Data Structures
- Map representation
- Game state management
- Sprite management
- Collision maps

## Technical Details

### Game Components

1. **Map Requirements**
- Walls ('1'): Define boundaries
- Player ('P'): Starting position
- Collectibles ('C'): Items to gather
- Exit ('E'): Level completion
- Empty space ('0'): Walkable areas

2. **Game Rules**
- Player must collect all items
- Exit only accessible after collecting all items
- Movement count displayed
- Clean exit on game completion

### Implementation Components

1. **Graphics Engine**
```c
typedef struct s_game {
    void    *mlx;
    void    *win;
    char    **map;
    void    *sprites[5];
    int     collectibles;
    int     moves;
    // Additional game state
} t_game;
```

2. **Map Validation**
- Rectangular shape
- Closed walls
- Valid path existence
- Required elements presence

3. **Player Movement**
- WASD key handling
- Collision detection
- Movement counting
- State updates

## Implementation Guidelines

### Core Functions

1. **Initialization**
```c
int init_game(t_game *game)
{
    // Initialize MLX
    // Load sprites
    // Parse map
    // Set initial state
}
```

2. **Game Loop**
```c
int game_loop(t_game *game)
{
    // Handle events
    // Update game state
    // Render frame
    // Check win condition
}
```

3. **Event Handling**
```c
int handle_input(int keycode, t_game *game)
{
    // Process movement keys
    // Update player position
    // Check collisions
    // Update game state
}
```

## Features
- Smooth player movement
- Collectible items
- Win condition
- Score tracking
- Clean exit handling

## Testing Strategy

### Basic Tests
- Valid map loading
- Player movement
- Collectible gathering
- Exit functionality

### Edge Cases
- Invalid maps
- Boundary conditions
- Memory management
- Error handling

### Performance Tests
- Large maps
- Multiple sprites
- Animation smoothness
- Resource usage

## Skills Developed
- Graphics programming
- Game development
- Event handling
- Memory management
- File operations
- Error handling

## Common Challenges
1. Smooth graphics rendering
2. Proper event handling
3. Memory leak prevention
4. Collision detection
5. Game state management

## Bonus Features
- Enemy patrols
- Animated sprites
- Multiple levels
- Sound effects
- Score display 