/*

397. Integer Replacement

Given a positive integer n, you can apply one of the following operations:

If n is even, replace n with n / 2.
If n is odd, replace n with either n + 1 or n - 1.
Return the minimum number of operations needed for n to become 1.

 

Example 1:

Input: n = 8
Output: 3
Explanation: 8 -> 4 -> 2 -> 1
Example 2:

Input: n = 7
Output: 4
Explanation: 7 -> 8 -> 4 -> 2 -> 1
or 7 -> 6 -> 3 -> 2 -> 1
Example 3:

Input: n = 4
Output: 2
 

Constraints:

1 <= n <= 231 - 1

*/

// Solution : Worked 

/*
int solve(unsigned int n,unordered_map<unsigned int,int> &dp){
        if(n==1){
            return 0;
        }
        if(dp.find(n)!=dp.end()){
            return dp[n];
        }
        if(n%2){
            return dp[n] = min(solve(n-1,dp),solve(n+1,dp))+1;
        }
        else{
            return dp[n] = solve(n/2,dp)+1;
        }
    }
    
    int integerReplacement(int n) {
        unordered_map<unsigned int,int> dp;
        return solve(n,dp);

    }
};
*/

// Soltuion : Didn't worked for large test case and shows memory limit exceeds

/*
class Solution {
public:
    int integerReplacement(int n) {
        if(n == 1) {
            return 0 ;
        }

        vector<int> dp(n+1, 0) ;

        for( int i = 2; i <= n; i++) {
            if(i % 2 == 0){
                dp[i] = 1 + dp[i/2] ;
            } else {
                dp[i] = 1 + min( dp[i-1], dp[(i+1)/2] + 1) ;
            }
        } 

        return dp[n] ;
    }
};
*/