# Read the input string S
S = input().strip()

# Read the value of N
N = int(input())

# Calculate the length of the string
L = len(S)

# Rotate the string by N positions in the backward direction
rotated_string = S[-(N % L):] + S[:-(N % L)]

# Print the rotated string
print(rotated_string)
