while True:
    password = input("Enter Password:")

    has_letter = False
    has_number = False

    for char in password:
        if char.isalpha():
            has_letter = True
        elif char.isdigit():
            has_number = True

    if has_letter and has_number:
        print("Password Accepted")
        break
    else:
        print("Password must contain at least one letter and one number. Please try again.")
