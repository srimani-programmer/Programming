# This problem is from HackerRank..!

rd,rm,ry = input().split()
dd,dm,dy = input().split()

rd = int(rd)
rm = int(rm)
ry = int(ry)
dd = int(dd)
dm = int(dm)
dy = int(dy)

if dy == ry and rd - dd <= 0:
    print('0')
elif dy == ry and rm == dm and rd - dd > 0:
    print(15 * (rd - dd))
elif dy == ry and rm!=dm:
    print(500 * (rm - dm))
else:print('10000')