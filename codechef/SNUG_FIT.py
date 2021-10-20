t = int(input())
s = t
ans = []
for i in range(t):
    k = 0
    t = 0
    n = int(input())
    a = []
    b = []
    a = input().split()
    b = input().split()
    
    
    for j in range(0, len(a)): 
        a[j] = int(a[j])
    for j in range(0, len(b)): 
        b[j] = int(b[j])
    
    a.sort()
    b.sort()
    for j in range(n):
        if int(a[j]) < int(b[j]):
            k += int(a[j])
        else:
            k += int(b[j])
    ans.append(k)
for i in range(s):
    print(ans[i])
