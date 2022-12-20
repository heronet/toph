def isPrime(n):
    prime = True
    for i in range(2, n):
        if n % i == 0:
            prime = False
    return prime

def primestr():
    tc = int(input())
    for it in range(tc):
        size = int(input())
        sen = input()
        total = 0
        for i in range(size):
            total += ord(sen[i])
        if isPrime(total):
            print("Case #" + str(it+1) + ": Yes")
        else:
            print("Case #" + str(it+1) + ": No")

primestr()
