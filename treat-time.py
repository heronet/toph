a, b, c = list(map(int, input().split()))

items = {
    b: "Chocolate",
    c: "Ice-cream"
}
if b > a and c > a:
    print("Chocolate")
elif (b + c) > a:
    x = min(b, c)
    if x == b:
        print("Chocolate")
    else:
        print("Ice-cream")
else:
    print("Chocolate")
