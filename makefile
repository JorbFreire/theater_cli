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
	src/controllers/reservaController/reservarAssento.c \
	src/controllers/reservaController/cancelarReserva.c \
	src/controllers/reservaController/cancelarReservas.c \
	src/controllers/reservaController/cancelarTodasAsReservas.c \
	src/controllers/reservaController/index.c \
	src/repository/salvarEstado.c \
	src/repository/carregarEstado.c \
	src/repository/index.c \
	src/utils/printMenu.c \
	src/utils/exibirInformacoes.c \


HEADER_FILES = \
	src/models/Assento.h \
	src/models/Teatro.h \
	src/controllers/matrizController/matrizController.h \
	src/controllers/teatroController/teatroController.h \
	src/controllers/reservaController/reservaController.h \
	src/repository/repository.h \
	src/utils/utils.h \


OBJS=$(SRC_FILES:.c=.o)

$(TARGET): $(OBJS)
	$(LD) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CXX) -c -o $@ $< -Wall -g


clean:
	rm src/**/*.o $(TARGET)
