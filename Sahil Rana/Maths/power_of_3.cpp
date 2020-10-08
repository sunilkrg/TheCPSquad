class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 && 1162261467%n==0; 
  }
};


/*  - Max value of n for power of 3 is 1162261467
    - 3 ^⌊log 3 MaxInt⌋=3 ^⌊19.56⌋ =3^19=1162261467
    - 3^19 id divisible only by 3^0, 3^1, 3^2.....3^19  since 3 is a prime number.
    
Time Complexity : O(1)
Space Complexity : O(1)

*/
