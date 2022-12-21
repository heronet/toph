def main():
    tc = int(input())
    for _ in range(tc):
        size = input()
        text = input()
        newstr = ""
        for i in text:
            if i.isupper():
                i = i.lower()
            if i != ' ':
                newstr += i
        print(newstr)
main()

