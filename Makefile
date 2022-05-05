NAME	= libftprintf.a

SRCS	= ft_printf.c ft_print_str.c ft_print_num.c ft_print_pointer.c ft_print_hex.c

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

AR		= ar
ARFLAGS	= rcs

RM		= rm -f

OBJS	= $(SRCS:.c=.o)

LIBFT= ./libft/libft.a

all : $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp ${LIBFT} .
	mv libft.a $(NAME)
	${AR} ${ARFLAGS} $(NAME) $(OBJS)
	ranlib $(NAME) 

clean :
	$(MAKE) -C ./libft clean
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) -C ./libft fclean
	$(RM) $(NAME)

re : fclean all

.PHONY	: all clean fclean re