def give():
    a = input()
    b = input()
    for ch in a:
        if ch in b:
            return "YES"
    return "NO"
print(give())
