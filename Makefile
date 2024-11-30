INC = ft_printf.c check_specifier.c ft_putstr.c ft_putchar.c ft_hex_addr.c \
		ft_putnbr.c ft_putun.c ft_low_hex.c ft_up_hex.c

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(INC:%.c=%.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all