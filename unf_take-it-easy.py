import math
x = int(input())
a = int(0)
for i in range(0, x+1):
    a += i
b = pow(x, x)
c = math.factorial(x)
d = pow(2, x) + pow(3, x)

print("%d %d %d %d" % ((a % 1000000007), (b % 1000000007), (c % 1000000007), (d % 1000000007)))
