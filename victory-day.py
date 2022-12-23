def main():
    t = int(input())
    for _ in range(t):

        birs = [
            "Captain Mohiuddin Jahangir",
            "Sepahi Hamidur Rahman",
            "Sepahi Muhammad Mustafa",
            "Engine Room Artificer Mohammad Ruhul Amin",
            "Flight Lieutenant Matiur Rahman",
            "Lance Naik Munshi Abdur Rouf",
            "Lance Naik Noor Mohammad Sheikh"
        ]
        n = int(input())
        out = "Bir Sreshtho {name}: Amra Tomay Vulbo Na.".format(name = birs[n - 1])
        print(out)
main()
