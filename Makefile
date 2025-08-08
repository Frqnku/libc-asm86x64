NAME=libasm.a

SRC_DIR=asm
OBJ_DIR=obj

SRCS=$(addprefix $(SRC_DIR), /ft_strlen.s /ft_strcpy.s /ft_strcmp.s /ft_write.s /ft_read.s /ft_strdup.s)
OBJS=$(patsubst $(SRC_DIR)/%.s, $(OBJ_DIR)/%.o, $(SRCS))

NASM=nasm
NASMFLAGS=-f elf64


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	@mkdir -p $(OBJ_DIR)
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f libasm

re: fclean all

main:
	gcc -Werror -Wextra -Wall main.c libasm.a -L. -lasm -o libasm

.PHONY: all clean fclean re