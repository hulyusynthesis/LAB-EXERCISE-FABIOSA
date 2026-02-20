def num():
    a = int(input(f"Enter your first number: "))
    b = int(input(f"Enter your second number: "))
    c = int(input(f"Enter your third number: "))
    
    if a > b and a > c:
        print(f"Letter a is the largest number with the value of {a}")
    elif b > c and b > a:
        print(f"Letter b is the largest number with the value of {b}")
    elif c > b and c > a:
        print(f"Letter c is the largest number with the value of {c}")
    elif a == b and b == c:
        print(f"Letter a, b, and c have the same value of {a}")
    else:   
        print(f"Try Again. ")
num()
