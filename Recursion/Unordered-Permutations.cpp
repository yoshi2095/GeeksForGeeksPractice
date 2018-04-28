/* Given an integer 'n', print all the permutations from 1 to n in no specific order.
   ex: n = 3
   so, 123,132, 213, 312, 231, 321.

   Approach:
    Initially take num = -1 and a set which initially contains all 0's. Now make the elements of the set equal to the num (after incrementing it)
    start a loop with n iterations. in This we check whether any element of set is zero, if it is, then we recursively call the function (passing
    the current i of the iteration as the position at which the set will be updated), increment the num, and update the ith pos of the set with
    the num. We repeat this process untill all the positions of the set are filled with unique num values and once all the positions are filled,
    ie, a permutation has been achieved, we just print that set and return to the previous call. We further check for any further iterations
    in the for loop of the previous call and if there arn't any, we decrease the value of num by one and make the set's current position's element
    equal to zero to procede for a new permutation.
    One by one all the permutations are printed.
*/

// Implementation:

void permutate( int perm[], int N, int pos){
  static int num = -1;
  num = num + 1;
  perm[pos] = num;
  if(num == N){
    print(perm, N);
  }
  else{
    for(int i = 0; i < N; i++){
      if(perm[i]==0){
        permutate(perm, N, i);
      }
    }
  }
 num = num - 1;
 perm[pos] = 0;

}
