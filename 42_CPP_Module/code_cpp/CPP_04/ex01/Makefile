TARGET			= a.out

SRCS			= main.cpp \
					Animal.cpp \
					Cat.cpp \
					Dog.cpp \
					Brain.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

all:			$(TARGET)

$(TARGET):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(TARGET)

re:				fclean $(TARGET)

.PHONY:			all clean fclean re
