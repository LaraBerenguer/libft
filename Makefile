NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS_DIR = srcs #directorio donde están los .c
INCS_DIR = includes #directorio donde están los .h

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS_FILES = $(addprefix $(SRCS_DIR)/, $(SRCS)) #path srcs/archivo.c

OBJS = $(SRC_FILES:.c=.o) #objs es .o, el ejecutable -> srcs/archivo.o

#aquí empiezan reglas
all: $(NAME) #all necesita nombre para ejecturarse, ejecutar make ejecuta all por defecto
$(NAME): $(OBJS) #indica a all cómo construir nombre, en este caso con los OBJS, los .o
	ar rcs $(NAME) $(OBJS)
#ar: crea librería estática
#r: añade archivos
#c: crea librería
#s: crea índice
#resultado: libft.a

%.o: %.c #para un .o necesito un .c
	$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@
#comando de compilación
#cc flags -I (includes) -c (compilar, no enlazar) $< (.c) $@ (.o)
#EJEMPLO: cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strlen.c -o srcs/ft_strlen.o

clean: #borra todos los .o
	rm -f $(OBJS)

fclean: clean #borra la librería + hace clean
	rm -f $(NAME)

re: fclean all #hace clean + hace all, ejecuta desde 0 limpito