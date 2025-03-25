# minitalk
A small data exchange program using UNIX signals

## Project Overview
Minitalk is a communication program that implements a client-server architecture using UNIX signals. The project focuses on bit manipulation and signal handling to transmit data between processes.

## Learning Objectives

### 1. UNIX Signals
- Signal handling mechanisms
- SIGUSR1 and SIGUSR2 usage
- Signal handler implementation
- Process communication

### 2. Process Management
- Process identification (PID)
- Inter-process communication
- Process synchronization
- Error handling

### 3. Bit Manipulation
- Binary data representation
- Bit-level operations
- Data encoding/decoding
- Bitwise operators

### 4. Client-Server Architecture
- Basic client-server model
- Data transmission protocols
- Error recovery
- Connection handling

### 5. System Programming
- System call usage
- Resource management
- Signal safety
- Process coordination

## Technical Details

### Components

1. **Server Program**
```c
int main(void)
{
    // Setup signal handlers
    // Display PID
    // Wait for client connections
    // Handle incoming signals
}
```

2. **Client Program**
```c
int main(int argc, char **argv)
{
    // Validate input
    // Convert string to binary
    // Send signals to server
    // Wait for acknowledgment
}
```

### Signal Handling
- SIGUSR1: Represent binary 1
- SIGUSR2: Represent binary 0
- Error handling signals
- Acknowledgment signals

## Implementation Guidelines

### Server Implementation
1. **Signal Setup**
   - Register signal handlers
   - Display server PID
   - Handle interruptions

2. **Data Reception**
   - Bit assembly
   - Character reconstruction
   - Message display

3. **Error Handling**
   - Signal timeout
   - Invalid signals
   - Process termination

### Client Implementation
1. **Message Processing**
   - String to binary conversion
   - Signal transmission
   - Timing management

2. **Error Recovery**
   - Retransmission
   - Timeout handling
   - Server verification

## Features
- Reliable message transmission
- Binary data conversion
- Signal-based communication
- Error detection and recovery
- Process synchronization

## Testing Strategy

### Basic Tests
- Simple message transmission
- Various message lengths
- Special characters
- Empty messages

### Edge Cases
- Long messages
- Unicode characters
- Signal interruption
- Process termination

### Performance Tests
- Transmission speed
- Resource usage
- Signal handling efficiency
- Error recovery time

## Skills Developed
- UNIX signal handling
- Process management
- Bit manipulation
- Error handling
- System programming
- Client-server architecture

## Common Challenges
1. Signal race conditions
2. Data synchronization
3. Error recovery
4. Performance optimization
5. Character encoding

## Bonus Features
- Unicode support
- Transmission acknowledgment
- Multiple client handling
- Color output
- Progress indication