# Minitalk
Inter-Process Communication using UNIX Signals

## Project Overview
Minitalk is a communication program that implements a small data exchange protocol using UNIX signals (SIGUSR1 and SIGUSR2). The project consists of a server and client that communicate with each other using binary signals.

## Learning Objectives

### 1. Signal Handling
- UNIX signal concepts
- Signal handlers
- Signal masks
- Signal safety
- Real-time signals

### 2. Process Communication
- Inter-process communication (IPC)
- Process identification (PID)
- Binary communication
- Data synchronization
- Error handling

### 3. Bit Manipulation
- Binary operations
- Bit shifting
- Character encoding
- Data serialization
- Error checking

## Technical Details

### Server Implementation
```c
void signal_handler(int signum, siginfo_t *info, void *context)
{
    static int bit = 0;
    static unsigned char c = 0;

    (void)context;
    if (signum == SIGUSR1)
        c |= (1 << bit);
    bit++;
    if (bit == 8)
    {
        write(1, &c, 1);
        bit = 0;
        c = 0;
        kill(info->si_pid, SIGUSR2);  // Acknowledge receipt
    }
}

int main(void)
{
    struct sigaction sa;
    
    sa.sa_sigaction = signal_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    
    ft_printf("Server PID: %d\n", getpid());
    while (1)
        pause();
    return (0);
}
```

### Client Implementation
```c
void send_char(pid_t server_pid, unsigned char c)
{
    int bit;

    bit = 0;
    while (bit < 8)
    {
        if (c & (1 << bit))
            kill(server_pid, SIGUSR1);
        else
            kill(server_pid, SIGUSR2);
        usleep(100);
        bit++;
    }
}

int main(int argc, char **argv)
{
    pid_t server_pid;
    char *message;

    if (argc != 3)
        return (1);
    server_pid = ft_atoi(argv[1]);
    message = argv[2];
    while (*message)
        send_char(server_pid, *message++);
    return (0);
}
```

## Implementation Guidelines

### 1. Server Requirements
- Display PID on launch
- Handle incoming signals
- Convert binary signals to characters
- Handle multiple clients
- Acknowledge received messages

### 2. Client Requirements
- Take server PID as argument
- Convert characters to binary
- Send signals to server
- Handle transmission errors
- Wait for acknowledgment

### 3. Error Handling
- Invalid PID
- Signal transmission failures
- Memory management
- Process termination
- Synchronization issues

## Testing Strategy

### Basic Tests
- Character transmission
- Special characters
- Long messages
- Multiple clients
- Error cases

### Edge Cases
- Invalid PIDs
- Signal interruption
- Process termination
- Resource limits
- Unicode characters

## Skills Developed
- Signal handling
- Process management
- Binary operations
- Error handling
- IPC mechanisms
- System programming

## Common Challenges
1. Signal synchronization
2. Data integrity
3. Error handling
4. Process management
5. Performance optimization

## Best Practices
- Robust signal handling
- Proper error checking
- Clean process termination
- Efficient binary operations
- Clear documentation
- Comprehensive testing

## Bonus Features
- Unicode support
- Transmission acknowledgment
- Error detection
- Multiple client handling
- Performance optimization

## Debugging Tools
- Signal monitoring
- Process inspection
- Binary visualization
- Error logging
- Performance profiling

## Additional Resources
- UNIX signal documentation
- IPC mechanisms guide
- Binary operations tutorial
- Process management guide
- Signal handling best practices