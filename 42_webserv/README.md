# Webserv
HTTP/1.1 Web Server Implementation in C++

## Project Overview
Webserv is a project to create a HTTP/1.1 compliant web server from scratch using C++98. This project teaches fundamental concepts of network programming, HTTP protocol, and server architecture.

## Learning Objectives

### 1. Network Programming
- Socket programming
- TCP/IP protocol
- Non-blocking I/O
- Event handling
- Connection management

### 2. HTTP Protocol
- HTTP/1.1 specification
- Request parsing
- Response formatting
- Header handling
- Method implementation (GET, POST, DELETE)

### 3. Server Architecture
- Event-driven programming
- Multi-client handling
- Request queuing
- Resource management
- Error handling

### 4. Configuration
- Server configuration
- Virtual hosts
- Route handling
- MIME types
- Error pages

### 5. Performance
- Memory management
- Connection pooling
- Request timeout
- Load handling
- Resource limits

## Technical Details

### Server Configuration
```nginx
server {
    listen 8080;
    server_name example.com;
    error_page 404 /404.html;
    client_max_body_size 10M;

    location / {
        root /var/www/html;
        index index.html;
        allowed_methods GET POST;
    }
}
```

### Implementation Components

1. **Server Core**
```cpp
class Server {
private:
    int socket_fd;
    std::vector<Client> clients;
    Config config;

public:
    void start();
    void handleConnections();
    void processRequest(Client &client);
};
```

2. **Request Handler**
```cpp
class RequestHandler {
public:
    Response processGET(const Request &req);
    Response processPOST(const Request &req);
    Response processDELETE(const Request &req);
};
```

## Features

### Basic Features
- HTTP/1.1 compliance
- Multiple server support
- Request routing
- File serving
- Error handling

### Advanced Features
- Virtual hosts
- Keep-alive connections
- Request body limits
- Custom error pages
- Directory listing

## Testing Strategy

### Basic Tests
- HTTP methods
- Status codes
- Header handling
- File operations
- Error pages

### Edge Cases
- Large files
- Concurrent connections
- Invalid requests
- Resource limits
- Timeout handling

### Performance Tests
- Connection handling
- Memory usage
- Response time
- Load testing
- Stress testing

## Skills Developed
- Network programming
- Protocol implementation
- Server architecture
- Configuration parsing
- Error handling
- Performance optimization

## Common Challenges
1. Non-blocking I/O
2. Memory management
3. Connection handling
4. Request parsing
5. Performance tuning

## Best Practices
- Clean code architecture
- Proper error handling
- Resource cleanup
- Security considerations
- Documentation
- Testing methodology

## Security Considerations
- Input validation
- Resource limits
- Error handling
- File access control
- Buffer overflow prevention
- Request sanitization

## Performance Optimization
- Connection pooling
- Memory management
- Cache implementation
- Request queuing
- Resource limiting

## Debugging Tools
- Network analyzers
- HTTP clients
- Load testers
- Memory profilers
- Log analysis 