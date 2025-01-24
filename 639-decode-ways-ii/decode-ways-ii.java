class Solution {
    public int numDecodings(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        int n = s.length();
        long[] dp = new long[n + 1];
        dp[n] = 1;
        int i = n - 1;
        int mod = (int) Math.pow(10, 9) + 7;
        while (i >= 0) {
            if (s.charAt(i) != '0') {
                if (s.charAt(i) == '*') {
                    dp[i] = (9 * dp[i + 1]) % mod;
                    if (i != n - 1) {
                        if (s.charAt(i + 1) == '*') {
                            dp[i] = (dp[i] + 15 * dp[i + 2]) % mod;
                        } else if (s.charAt(i + 1) >= '7') {
                            dp[i] = (dp[i] + dp[i + 2]) % mod;
                        } else {
                            dp[i] = (dp[i] + 2 * dp[i + 2]) % mod;
                        }
                    }
                } else {
                    dp[i] = dp[i + 1];
                    if (i != n - 1) {
                        if (s.charAt(i + 1) != '*') {
                            int temp = Integer.valueOf(s.substring(i, i + 2));
                            if (temp <= 26 && temp > 0) {
                                dp[i] = (dp[i] + dp[i + 2]) % mod;
                            }
                        } else if (s.charAt(i) == '1') {
                            dp[i] = (dp[i] + 9 * dp[i + 2]) % mod;
                        } else if (s.charAt(i) == '2') {
                            dp[i] = (dp[i] + 6 * dp[i + 2]) % mod;
                        }
                    }
                }
            }
            i --;
        }
        return (int) dp[0];
    }
}