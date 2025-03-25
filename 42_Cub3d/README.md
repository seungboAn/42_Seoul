# Cub3D
A Raycasting Game Engine Project

## Project Overview
Cub3D is a graphics project that implements a raycasting engine similar to Wolfenstein 3D. The project focuses on creating a 3D perspective in a 2D map using raycasting techniques.

## Learning Objectives

### 1. Graphics Programming
- Raycasting implementation
- Texture mapping
- Frame rendering
- Color manipulation

### 2. Mathematics
- Vector calculations
- Trigonometry
- Collision detection
- Perspective projection

### 3. Game Development
- Player movement
- Camera rotation
- Map parsing
- Game loop

### 4. Performance Optimization
- Rendering efficiency
- Memory management
- Frame rate optimization
- Resource handling

### 5. File Operations
- Map file parsing
- Texture loading
- Configuration handling
- Error management

## Technical Details

### Program Structure

1. **Game State**
```c
typedef struct s_game
{
    void    *mlx;
    void    *win;
    int     width;
    int     height;
    char    **map;
    t_player player;
    t_texture *textures;
    t_sprite *sprites;
} t_game;
```

2. **Player Data**
```c
typedef struct s_player
{
    double  pos_x;
    double  pos_y;
    double  dir_x;
    double  dir_y;
    double  plane_x;
    double  plane_y;
} t_player;
```

### Implementation Components

1. **Map Parser**
```c
int parse_map(t_game *game, char *file)
{
    // Read map file
    // Validate map
    // Load textures
    // Initialize player
}
```

2. **Raycasting Engine**
```c
void cast_rays(t_game *game)
{
    // Calculate ray positions
    // Perform DDA algorithm
    // Draw walls
    // Apply textures
}
```

## Features

### Basic Features
- 3D perspective rendering
- Textured walls
- Player movement
- Collision detection

### Advanced Features
- Sprite rendering
- Multiple textures
- Minimap display
- Smooth movement

## Implementation Guidelines

### Core Components

1. **Initialization**
- Window setup
- Texture loading
- Map validation
- Player setup

2. **Game Loop**
- Input handling
- Ray casting
- Rendering
- Frame timing

3. **Rendering Pipeline**
- Wall casting
- Texture mapping
- Sprite sorting
- Frame buffer management

## Testing Strategy

### Basic Tests
- Map loading
- Player movement
- Wall rendering
- Texture mapping

### Edge Cases
- Invalid maps
- Boundary collisions
- Memory management
- Error handling

### Performance Tests
- Frame rate
- Memory usage
- Large maps
- Multiple sprites

## Skills Developed
- Graphics programming
- Mathematical concepts
- Game development
- Optimization techniques
- Resource management

## Common Challenges
1. Raycasting implementation
2. Performance optimization
3. Texture mapping
4. Collision detection
5. Memory management

## Bonus Features
- Floor/ceiling textures
- Animated sprites
- Dynamic lighting
- Sound effects
- Minimap

## Technical Implementation

### Raycasting Algorithm
1. **Ray Calculation**
   - Camera space to world space
   - Ray direction calculation
   - DDA implementation
   - Wall distance calculation

2. **Texture Mapping**
   - Wall coordinate calculation
   - Texture coordinate mapping
   - Color sampling
   - Perspective correction

3. **Sprite Rendering**
   - Sprite sorting
   - Transform calculation
   - Depth buffering
   - Transparency handling

## Performance Optimization

### Rendering Optimization
- View frustum culling
- Texture caching
- Frame buffering
- Draw call optimization

### Memory Management
- Resource pooling
- Texture management
- Buffer optimization
- Memory cleanup

### CPU Optimization
- Math optimization
- Loop unrolling
- Cache utilization
- Branch prediction

## Map Format
```
NO ./path_to_north_texture
SO ./path_to_south_texture
WE ./path_to_west_texture
EA ./path_to_east_texture

F 220,100,0
C 225,30,0

        1111111111111111111111111
        1000000000110000000000001
        1011000001110000000000001
        1001000000000000000000001
111111111011000001110000000000001
100000000011000001110111111111111
11110111111111011100000010001
11110111111111011101010010001
11000000110101011100000010001
10000000000000001100000010001
10000000000000001101010010001
11000001110101011111011110N0111
11110111 1110101 101111010001
11111111 1111111 111111111111