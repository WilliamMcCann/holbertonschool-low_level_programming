/*function that checks if a string contains only alphabetical characters*/
int string_alpha(char *s)
{
    int i;
    i = 0;

    while (s[i] != '\0')
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
      {
        return (1);
      }
      else
      {
        return (0);
      }
    i++;
    }

}

/*main*/
int main(void)
{
   char s[] = "Holberton School!\n";
   char *p;

   p = string_alpha(s);
   return (0);
}
