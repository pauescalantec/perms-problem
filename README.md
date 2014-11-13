perms-problem
=============

Count the number of permutations that have a specific number of inversions.
Given a permutation a1, a2, a3,..., an of the n integers 1, 2, 3, ..., n, an inversion is a pair (ai, aj) where i < j and ai > aj. The number of inversions in a permutation gives an indication on how "unsorted" a permutation is. If we wish to analyze the average running time of a sorting algorithm, it is often useful to know how many permutations of n objects will have a certain number of inversions.

In this problem you are asked to compute the number of permutations of n values that have exactly k inversions.

For example, if n = 3, there are 6 permutations with the indicated inversions as follows:
123 0 inversions
132 1 inversion (3 > 2)
213 1 inversion (2 > 1)
231 2inversions(2>1,3>1)
312 2inversions(3>1,3>2)
321 3inversions(3>2,3>1,2>1)

Therefore, for the permutations of 3 things -1 of them has 0 inversions
- 2 of them have 1 inversion
- 2 of them have 2 inversions
- 1 of them has 3 inversions
- 0 of them have 4 inversions
- 0 of them have 5 inversions
- Etc.

Input
The input consists one or more problems. The input for each problem is specified on a single line, giving the integer n (1 <= n <= 18) and a non-negative integer k (0 <= k <= 200). The end of input is specified by a line with n = k = 0.

Output
For each problem, output the number of permutations of {1, ..., n}with exactly k inversions.

Sample Input
30 31 32 33 42
4 10 13 23 18 80 00

Sample Output
1
2
2
1
5
0
46936280 184348859235088
