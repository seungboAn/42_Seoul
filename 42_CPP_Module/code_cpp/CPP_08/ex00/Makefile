TARGET			= a.out

SRCS			= main.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
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