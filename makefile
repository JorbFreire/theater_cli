TARGET=cli_bin
CXX=gcc
LD=gcc
SRC_DIR= src

SRC_FILES = \
	src/main.c \
	src/controllers/matrizController/liberarMatriz.c \
	src/controllers/matrizController/inicializarMatriz.c \
	src/controllers/matrizController/index.c \
	src/controllers/teatroController/criarTeatro.c \
	src/controllers/teatroController/exibirTeatro.c \
	src/controllers/teatroController/index.c \
	src/repository/salvarEstado.c \
	src/repository/carregarEstado.c \
	src/repository/index.c \


HEADER_FILES = \
	src/models/Assento.h \
	src/models/Teatro.h \
	src/controllers/matrizController/matrizController.h \
	src/controllers/teatroController/teatroController.h \
	src/repository/repository.h \

OBJS=$(SRC_FILES:.c=.o)

$(TARGET): $(OBJS)
	$(LD) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CXX) -c -o $@ $< -Wall -g


clean:
	rm src/**/*.o $(TARGET)
