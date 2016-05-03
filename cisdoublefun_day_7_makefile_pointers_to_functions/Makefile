CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic
VPATH = inc
SOURCES=src/0-absolute.c src/0-print_number.c src/1-power.c src/2-print_array.c src/3-print_string.c src/4-strings_compare.c src/0-first_digit.c src/0-uppercase_string.c src/1-swap_int.c src/2-square_root.c src/4-positive_or_not.c src/5-string_to_integer.c src/0-lowercase.c src/1-cap_string.c src/1-uppercase.c src/2-str_len.c src/4-reverse_string.c src/print_char.c
OBJECTS=$(SOURCES:.c=.o)
TARGET=libholberton.a

all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar -rc libholberton.a $(OBJECTS)

clean:
	rm edit $(OBJECTS)

re:
	$(CC) $(SOURCES) -o $(TARGET)
