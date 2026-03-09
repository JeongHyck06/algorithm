a,b = map(int, input().split())
a_row, a_col = (a-1)//4, (a-1)%4
b_row, b_col = (b-1)//4, (b-1)%4
ans = abs(a_row - b_row) + abs(a_col - b_col)
print(ans)