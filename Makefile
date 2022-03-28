NAME = testing
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I.
SRCS =	circle/circle.cpp \
		rectangle/rectangle.cpp \
		shapes/shapes.cpp \
		square/square.cpp  \
		triangle/triangle.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
		${CC} -g ${FLAGS} -o ${INCLUDE} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
				${CC} -g ${FLAGS} ${INCLUDE} -o ${NAME} ${OBJS}
pusk:
			./webserv config.conf

clean:
				-rm -rf ${OBJS}

fclean:
				-rm -rf ${OBJS} ${NAME}

re:				fclean all

.PHONY:
				all clean fclean re test