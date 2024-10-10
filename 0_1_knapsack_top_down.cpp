//
int knapsack(int n, int weight[], int value[], int w)
{

    if (n == 0 || w == 0){
          return 0;
    }
    if (dp[n][w] != -1)
        return dp[n][w];

    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, weight, value, w - weight[n]) + value[n];
        int op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op = knapsack(n - 1, weight, value, w);
        return dp[n][w] = op;
    }
}
