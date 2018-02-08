#45th prb
d=int(input().split(' '))
s=int(p[1]**0.5)
if float(s)==float(d[1]**0.5):
    if int(d[1]**(0.5))==(d[0]//4):
        print('Yes')
    else:
        print('No')
else: print('No')
