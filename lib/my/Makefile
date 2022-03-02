##
## EPITECH PROJECT, 2021
## Makefile DAY10
## File description:
## Makefile used to create lib
##

SRC	=	my_compute_power_it.c			\
		my_compute_square_root.c		\
		my_find_prime_sup.c				\
		my_getnbr_base.c				\
		my_getnbr.c						\
		my_is_prime.c					\
		my_isneg.c						\
		my_put_nbr.c					\
		my_dput_nbr.c					\
		my_sput_nbr.c					\
		my_putchar.c					\
		my_putnbr_base.c				\
		my_putstr.c						\
		my_revstr.c						\
		my_show_word_array.c			\
		my_sort_int_array.c				\
		my_str_isalpha.c				\
		my_str_islower.c				\
		my_str_isnum.c					\
		my_str_isprintable.c			\
		my_str_isupper.c				\
		my_str_to_word_array.c			\
		my_strcapitalize.c				\
		my_strcat.c						\
		my_strcmp.c						\
		my_strcpy.c						\
		my_strlen.c						\
		my_strlowcase.c					\
		my_strncat.c					\
		my_strncmp.c					\
		my_strncpy.c					\
		my_strstr.c						\
		my_strupcase.c					\
		my_swap_char.c					\
		my_swap.c						\
		is_alpha.c						\
		is_lower.c						\
		is_num.c						\
		is_upper.c						\
		init_int_array.c				\
		init_matrix.c					\
		init_str_array.c				\
		init_str.c						\
		open_file.c						\
		open_file_with_stat.c			\
		my_putstderr.c					\
		my_printf.c						\
		my_dprintf.c					\
		my_sprintf.c					\
		int_to_str.c					\
		append_in_linked_list.c			\
		push_in_linked_list.c			\
		print_linked_list.c				\
		delete_node_with_key.c			\
		my_list_size.c					\
		my_rev_list.c					\
		my_sort_list.c

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all:
	@$(MAKE) -s $(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		rm -rf $(OBJ)
		cp my.h ../../include
		cp linked_list.h ../../include

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
