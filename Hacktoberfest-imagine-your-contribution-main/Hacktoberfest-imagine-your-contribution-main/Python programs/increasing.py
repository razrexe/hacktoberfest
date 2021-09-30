n = int(input())
ls = [int(i) for i in input().split()]
count = 0

for i in range(1, n):
    if ls[i] < ls[i-1]:
        count = count + (ls[i-1] - ls[i])
        ls[i] = ls[i-1]

print(count)
