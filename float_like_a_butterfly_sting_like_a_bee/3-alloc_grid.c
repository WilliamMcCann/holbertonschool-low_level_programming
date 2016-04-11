#include<stdlib.h>

/*function returns a pointer to a newly created 2 dimensional integers grid*/
int **alloc_grid(int width, int height) {
int **outer_grid;
int i = 0, j = 0;
  outer_grid = malloc(sizeof(int*) * width);

  while (i < width) {
    outer_grid[i] = malloc(sizeof(int) * height);

      while (j < height){
      outer_grid[i][j] = 0;
      j++;
    }
      i++;
    }
    return (outer_grid);
}
