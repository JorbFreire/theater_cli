TARGET=cli_bin
CXX=gcc
LD=gcc
SRC_DIR= src

SRC_FILES = \
	src/main.c \
	src/controllers/matrizController/liberarMatriz.c \
	src/controllers/matrizController/inicializarMatriz.c \
	src/controllers/matrizController/index.c \

HEADER_FILES = \
	src/controllers/matrizController/matrizController.h \

OBJS=$(SRC_FILES:.c=.o)

$(TARGET): $(OBJS)
	$(LD) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CXX) -c -o $@ $<

clean:
	rm src/**/*.o $(TARGET)
