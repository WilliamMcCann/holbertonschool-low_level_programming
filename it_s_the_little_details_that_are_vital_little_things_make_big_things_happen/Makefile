#Makefile compiles a library from important files
CC=gcc
CFLAGS=-WALL -pedantic -Werror -Wextra
SRC=0-absolute.c 0-print_number.c 1-power.c 2-square_root.c 3-print_string.c 4-strings_compare.c 0-contact_strings.c 0-uppercase_string.c 1-swap_int.c 2-string_copy.c 3-string_ncopy.c 5-reverse_array.c 0-first_digit.c 1-cap_string.c 1-uppercase.c 2-str_len.c 4-positive_or_not.c 5-string_to_integer.c 0-lowercase.c 1-nconcat_strings.c 2-print_array.c 3-is_prime_number.c 4-reverse_string.c
VPATH = src
OBJECTS = $(SRC:.c=.o)

all: libholbertonschool.a

libholbertonschool.a: $(OBJECTS)
	 ar -rc libholbertonschool.a $(OBJECTS)

$(OBJECTS): $(SRC)

clean:
	rm -f $(OBJECTS)

re:	$(OBJECTS)
