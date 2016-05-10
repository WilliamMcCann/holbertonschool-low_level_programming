CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic
VPATH =
SOURCES=src/0-print_content.c
OBJECTS=
TARGET=0-print_content

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm $(OBJECTS) $(TARGET)

re:
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)
