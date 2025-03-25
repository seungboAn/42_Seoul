# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 12:46:46 by seuan             #+#    #+#              #
#    Updated: 2022/02/08 16:01:27 by seuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET			= Fix

SRCS			= main.cpp \
					Fixed.cpp \

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
