def isprime(n):
    prime = True
    for i in range(2, n):
        if n % i == 0:
            prime = False
    return prime

def zuck():
    tc = int(input())
    for _ in range(tc):
        age = int(input())
        if isprime(age):
            print(1)
        else:
            print(0)
zuck()
