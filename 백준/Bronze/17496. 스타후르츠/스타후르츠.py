def total_profit(n, t, c, p):
    return ((n - 1) // t) * c * p

n, t, c, p = map(int, input().split())
print(total_profit(n, t, c, p))