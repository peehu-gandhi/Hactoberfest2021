import sys


def dec_to_base(number, base):  # Maximum base - 36
    base_num = ""
    while number > 0:
        dig = int(number % base)
        if dig < 10:
            base_num += str(dig)
        else:
            base_num += chr(ord('A')+dig-10)  # Using uppercase letters
        number //= base
    base_num = base_num[::-1]  # To reverse the string
    return base_num


try:
    number = int(input("Enter a number with base 10 (decimal)"))
    base = int(input("Now enter the base to which you want to convert your number."))
except:
    print("Im sorry, your input is invalid.")
    sys.exit(0)

answer = dec_to_base(number, base)
