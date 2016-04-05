void reverse_array(int *a, int n);

/*prints a array of numbers reversed from its original order*/
void reverse_array(int *a, int n){

	  int j, k, temp;

    j=0;
    k = n - 1;
      /*while loop switches the first position and last postion of the array, through the var temp, moving outside to inside*/
    while (j < k){
        temp = a[k];
        a[k] = a[j];
        a[j] = temp;
        j++;
        k--;
    }
}
