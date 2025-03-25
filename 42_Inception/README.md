# Inception
System Administration with Docker

## Project Overview
Inception is a project focused on Docker containerization and system administration. The goal is to create a small infrastructure composed of different services under specific rules using Docker Compose.

## Learning Objectives

### 1. Docker Fundamentals
- Container concepts
- Docker architecture
- Image creation and management
- Dockerfile syntax and best practices
- Container networking
- Volume management

### 2. Services Setup
- NGINX with TLSv1.2 or TLSv1.3
- WordPress + php-fpm
- MariaDB
- Redis cache (optional)
- FTP server (optional)
- Static website

### 3. System Administration
- Virtual machine setup
- Network configuration
- SSL/TLS certificate management
- Service orchestration
- Security implementation

## Technical Details

### Infrastructure Requirements
```yaml
version: '3'
services:
  nginx:
    build: ./requirements/nginx
    ports:
      - "443:443"
    volumes:
      - wordpress:/var/www/html
    networks:
      - inception
    depends_on:
      - wordpress

  wordpress:
    build: ./requirements/wordpress
    volumes:
      - wordpress:/var/www/html
    networks:
      - inception
    depends_on:
      - mariadb

  mariadb:
    build: ./requirements/mariadb
    volumes:
      - mariadb:/var/lib/mysql
    networks:
      - inception
```

## Implementation Guidelines

### 1. Container Setup
- Each service must run in a dedicated container
- Containers must be built from either Alpine or Debian
- Each service must have its own Dockerfile
- Images must be built from scratch (no ready-made images)

### 2. Volume Configuration
- WordPress database
- WordPress website files
- Data persistence across container restarts

### 3. Network Configuration
- Container network isolation
- Port mapping
- Service discovery

## Testing Strategy

### Basic Tests
- Service availability
- Container communication
- Data persistence
- SSL/TLS functionality
- WordPress functionality

### Security Tests
- SSL/TLS verification
- Network isolation
- Access controls
- Data protection

## Skills Developed
- Docker containerization
- System administration
- Network configuration
- Security implementation
- Service orchestration
- Troubleshooting

## Common Challenges
1. Container networking
2. SSL/TLS setup
3. Service dependencies
4. Data persistence
5. Performance optimization

## Best Practices
- Container security
- Resource management
- Logging and monitoring
- Backup strategies
- Documentation
- Version control

## Bonus Features
- Redis cache implementation
- FTP server setup
- Adminer/phpMyAdmin
- Static website
- Service monitoring

## Performance Considerations
- Resource allocation
- Cache optimization
- Network efficiency
- Volume management
- Load balancing

## Debugging Tools
- Docker logs
- Container inspection
- Network debugging
- Volume management
- Performance monitoring
