TARGET=cli_bin
CXX=gcc
LD=gcc
OBJS=src/main.c
cli_bin:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
clean:
	rm -rf *.o