class Solution {
    public int countPrimes(int n) {
        if(n == 0 || n == 1)
            return 0;
     
        boolean arr[] = new boolean[n];
        arr[0] = true;
        
        for(int i = 1; i <= Math.sqrt(n); i++) {
            if(isPrime(i+1)) {
                for(int j = i+i+1; j < n; j += i+1) {
                    arr[j] = true;
                }
            }
        }
        
        
        int count = 0;
        for(int i = 0; i < n-1; i++) {
            if(!arr[i])
                count++;
        }
        return count;
    }
    
    
    boolean isPrime(int n) {
        if(n <= 1)
            return false;
        if(n == 2)
            return true;
        for(int i = 2; i <= (int) Math.sqrt(n); i++) {
            if(n%i == 0)
                return false;
        }
        return true;
    }
}