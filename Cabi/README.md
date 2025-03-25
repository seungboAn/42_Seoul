# Cabi
42 Seoul's Cabinet Management System

## Project Overview
Cabi is a web-based cabinet management system designed specifically for 42 Seoul students. The project streamlines the process of cabinet allocation, usage tracking, and management through an intuitive web interface and robust backend system.

## Learning Objectives

### 1. Full-Stack Development
- Frontend (React)
- Backend (Spring Boot)
- Database design
- RESTful API
- Real-time updates

### 2. System Architecture
- Microservices
- Database design
- Security implementation
- Scalability planning
- Performance optimization

### 3. User Experience
- Responsive design
- Intuitive interface
- Real-time feedback
- Error handling
- Accessibility

## Technical Details

### System Components

1. **Backend Architecture**
```java
@Entity
public class Cabinet {
    @Id
    private Long id;
    private String location;
    private boolean isOccupied;
    private LocalDateTime lastUpdated;
    
    @ManyToOne
    private User currentUser;
    
    @OneToMany
    private List<UsageHistory> history;
}

@RestController
@RequestMapping("/api/cabinets")
public class CabinetController {
    @PostMapping("/assign")
    public ResponseEntity<Cabinet> assignCabinet(@RequestBody AssignRequest request) {
        // Cabinet assignment logic
    }
    
    @PostMapping("/release")
    public ResponseEntity<Void> releaseCabinet(@PathVariable Long cabinetId) {
        // Cabinet release logic
    }
    
    @GetMapping("/status")
    public ResponseEntity<List<CabinetStatus>> getStatus() {
        // Status retrieval logic
    }
}
```

2. **Frontend Components**
```typescript
interface CabinetProps {
    id: number;
    location: string;
    isOccupied: boolean;
    currentUser?: User;
    onAssign: (userId: number) => void;
    onRelease: () => void;
}

const Cabinet: React.FC<CabinetProps> = ({
    id,
    location,
    isOccupied,
    currentUser,
    onAssign,
    onRelease
}) => {
    // Cabinet component implementation
};
```

## Implementation Guidelines

### 1. Backend Requirements
- User authentication
- Cabinet management
- Status tracking
- Notification system
- Admin controls

### 2. Frontend Requirements
- Responsive design
- Real-time updates
- Interactive map
- User dashboard
- Admin interface

### 3. Security Requirements
- Access control
- Data protection
- Session management
- Audit logging
- Error handling

## Features

### Core Features
- User registration/login
- Cabinet assignment
- Status monitoring
- Usage history
- Admin management

### Advanced Features
- Usage analytics
- Automatic assignment
- Email notifications
- Report generation
- System monitoring

## Testing Strategy

### Backend Tests
- Unit tests
- Integration tests
- API endpoints
- Security testing
- Load testing

### Frontend Tests
- Component testing
- User interface
- State management
- Error handling
- Performance testing

## Skills Developed
- Full-stack development
- Database design
- System architecture
- Security implementation
- Project management
- UI/UX design

## Common Challenges
1. Data consistency
2. Real-time updates
3. User experience
4. System scalability
5. Performance optimization

## Best Practices
- Clean architecture
- Code documentation
- Error handling
- Security measures
- Testing coverage
- Performance monitoring

## Deployment
- Server setup
- Database configuration
- Frontend deployment
- Monitoring setup
- Backup strategy

## Maintenance
- Regular updates
- Performance monitoring
- Database maintenance
- Security patches
- User support

## Additional Resources
- API documentation
- User manual
- Admin guide
- Style guide
- Troubleshooting guide 