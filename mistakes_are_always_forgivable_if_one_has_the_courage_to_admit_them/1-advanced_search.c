
/*function searches for integer in array,
takes pointer to function to compare values*/
int advanced_search(int *array, int size, int (*check_func)(int)){
  int j;
  while (j < size){
    if (check_func(array[j]) == 1){
      return j;
    }
    j++;
  }
  return -1;
}
