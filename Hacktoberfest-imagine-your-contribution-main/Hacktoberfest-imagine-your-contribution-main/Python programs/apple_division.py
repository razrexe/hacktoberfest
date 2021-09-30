n = int(input())
ls = sorted(int(i) for i in input().split())

s = sum(ls)


def minimum(s, ls):
    if len(ls) == 1:
        return abs(s - 2*ls[0])
    else:
        m = abs(s - 2*ls[0])
        for i in range(1, len(ls)):
            m = min(m, abs(minimum(s - 2*ls[i], ls[:i])))
        return m


print(minimum(s, ls))
