while True:
    password = input("Enter a password: ")

    has_letter = False
    has_number = False

    for char in  password:
        if char.isalpha():
            has_letter = True

        elif char.isdigit():
            has_number = True

    if has_letter and has_number:
        print("Password Accepted.")
        break;
    
    elif not has_letter:
        print("The password must contain at least one letter. ")

    elif not has_number:
        print("The password must contain at least one number.")

    else:
        print("Invalid Password, Try again. ")