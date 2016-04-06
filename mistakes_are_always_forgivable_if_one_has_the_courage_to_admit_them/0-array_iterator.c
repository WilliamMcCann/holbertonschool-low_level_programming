/*function executes a function given as a parameter on each element of an array*/
void array_iterator(int *array, int size, void (*action_func)(int));

void array_iterator(int *array, int size, void (*action_func)(int)){
  int j;
  while (j < size){
    action_func(array[j]);
    j++;
  }
}
