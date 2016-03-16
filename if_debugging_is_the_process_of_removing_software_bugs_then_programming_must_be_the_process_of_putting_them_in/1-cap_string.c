/*function capitalizes the first letter of each word*/
char *cap_string(char *z){
  int j;
  for(j=0; z[j] != '\0'; j++) {
    if ((z[0]>='a' && z[0]<='z') ||(z[j-1]==' ' && z[j]>='a' &&z [j]<='z'))
      z[j] = (z[j] - 32);
  }
return(z);
}
