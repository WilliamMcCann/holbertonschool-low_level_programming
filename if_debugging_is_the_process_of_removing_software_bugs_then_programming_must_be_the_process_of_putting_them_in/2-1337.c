char *leet(char *z){
int j;
for(j=0; z[j] != '\0'; j++) {
  if (z[j] == 'a')
    z[j] = '4';
  else if (z[j] == 'A')
    z[j] = '4';
  else if (z[j] == 'e')
    z[j] = '3';
  else if (z[j] == 'E')
    z[j] = '3';
  else if (z[j] == 'o')
    z[j] = '0';
  else if (z[j] == 'O')
    z[j] = '0';
  else if (z[j] == 't')
    z[j] = '7';
  else if (z[j] == 'T')
    z[j] = '7';
  else if (z[j] == 'l')
      z[j] = '1';
  else if (z[j] == 'L')
      z[j] = '1';
  }
return(z);
}
