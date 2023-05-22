while True:
    try:
        x, y = list(map(int, input().split()))
        if x > y:
           x, y = y, x
        z = (y * (y + 1) / 2) - ((x-1) * (x) / 2)
        print("Sum of %d to %d is -> %d;" % (x, y, z))
    except:
        break

