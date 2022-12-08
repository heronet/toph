def vowels():
    tcase = int(input())
    for _ in range(tcase):
        inp = input()
        if 'a' in inp or 'e' in inp or 'i' in inp or 'o' in inp or 'u' in inp:
            print("Yes")
        else:
            print("No")

vowels()
