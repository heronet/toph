def code():
    tc = int(input())
    for _ in range(tc):
        n, p, h, c = list(map(int, input().split()))
        problems, books, contests = False, False, False

        if p // n >= 3:
            problems = True
        if h // n >= 3:
            books = True
        if (c > 0 and c / n >= 0.142) or n < 7:
            contests = True
        if problems and books and contests:
            print("Yes")
        else:
            print("No")

code()
