int strings_compare(char *s1, const char *s2);

/*function compares two strings and outputs an int that tells the
diff between the ASCII values*/
int strings_compare(char *s1, const char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == 0)
            return (0);
    return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}
