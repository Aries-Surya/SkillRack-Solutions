N = int(input())

# Extract the unit digit
unit_digit = N % 10

# Extract the tenth digit
tenth_digit = (N // 10) % 10

# Calculate the sum
sum_of_digits = unit_digit + tenth_digit

print(sum_of_digits)
