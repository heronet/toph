def puzzle():
    wdups = input()
    unique = ""
    for ch in wdups:
        if ch not in unique:
            unique = unique + ch
    print(26 - len(unique))
puzzle()

