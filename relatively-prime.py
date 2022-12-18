def factors(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

def relative():
    num = int(input())
    num_factors = factors(num)
    # num_coprimes = []
    cocount = 0

    for i in range(1, num):
        isco = True
        ifacs = factors(i)
        for j in ifacs:
            if j != 1 and j in num_factors:
                isco = False
        if isco:
            cocount += 1
            isco = True
    print(cocount)

relative()
