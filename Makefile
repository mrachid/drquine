EXO1 = ./ex01/Colleen

EXO2 = ./ex02/Grace

EXO3 = ./ex03/Sully

SRC1 = ./ex01/Colleen.c

SRC2 = ./ex02/Grace.c

SRC3 = ./ex03/../Sully.c


OBJ = $(SRC3:.c=.o)

FLAG = -Wall -Werror -Wextra

CC = clang

.PHONY: clean all re fclean

all: $(EXO1) $(EXO2) $(EXO3)

$(EXO1):

	@$(CC) $(FLAG) $(SRC1) -o $(EXO1)
$(EXO2):

	@$(CC) $(FLAG) $(SRC2) -o $(EXO2)

$(EXO3):
	@$(CC) $(FLAG) $(SRC3) -o $(EXO3)

clean:
	@/bin/rm -rf ./ex03/*.c ./ex03/*.o #$(OBJ)

fclean: clean
	@/bin/rm -f $(EXO1) $(EXO2) $(EXO3)

re: fclean all
