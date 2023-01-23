function fewestCoins(coins, amount)
    n = length of coins
    dp = array of size (amount+1) filled with infinity
    dp[0] = 0
    for i = 1 to amount
        for j = 0 to n-1
            if coins[j] <= i
                dp[i] = min(dp[i], dp[i-coins[j]] + 1)
    if dp[amount] == infinity
        return -1
    else
        return dp[amount]

