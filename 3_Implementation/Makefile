SRC = 3_Implementation/src/load.c\
3_Implementation/src/main.c\
3_Implementation/src/phonebook.c\
unity/unity.c\
test/test_phonebook.c\

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = miniproject.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
#doc:
#	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/load.c src/main.c src/phonebook.c