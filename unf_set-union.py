def set_union():
    _ = input().split()

    a = list(input().split())
    b = list(input().split())
    c = list(set(a+b))
    c.sort()
    print(*c)
set_union()

