n = 10

bing = []
for i in range(n):
    if i % 2 == 1: bing = input().split() + bing
    else: bing = input().split()[::-1] + bing
bing = ['0'] + bing

momy = ['0'] * 101
mp1 = {'Start': 1, 'End': 100}

for i, v in enumerate(bing):
    if (v[0] == 'S' or v[0] == 'L') and v[1] == '(':
        if v[2].isdigit():
           momy[i] = int(v[2:-1])
        else: momy[i] = mp1[v[2:-1]]
    else:
        momy[i] = mp1.get(v[2:-1], i)

dice = list(map(int, input().split()))
curr = 0
s, l = 0, 0

for v in dice:
    if curr + v < 101: curr += v
    while momy[curr] != curr: 
        if curr > momy[curr]: s += 1
        else: l += 1
        curr = momy[curr]

if curr == 100:
    print(f'Possible {s} {l}')
else: 
    print(f'Not possible {s} {l} {"Start" if curr == 1 else curr}')