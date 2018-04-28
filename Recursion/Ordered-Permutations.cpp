/*

Given an array of n elements, print all possible permutations (without repetitions) in lexographical order.

Approach: Just keep swapping the element at the start position with the other elements, recursively call with the next start position (begin+1)
and repeat till a new permutation has been achieved, ie,
start position is equal to the size of the array, and then print the set. Then when we return to the loop of the previous call(backtracking), just unswap the elements
of this loop again to retrieve the original array of this loop and repeat till all iterations are over. So basically swap till a new permutation is achieved
and then while backtracking, unswap.

This will produce all the permutations in lexographical sorted order.

*/

// Implementation:

void permutate(vector<int> num, int begin, vector<vector<int>> res){
  if(begin>=num.size()){
    res.push_back(num);
    return;
  }
  for(int i = begin; i<num.size(); i++){
    swap(num[begin], num[i]);
    permutate(num, begin+1, res);
    swap(num[begin], num[i]); //unswap while backtracking
  }
}
