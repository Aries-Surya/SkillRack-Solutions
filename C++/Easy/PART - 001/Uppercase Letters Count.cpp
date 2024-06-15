S = input().strip()

upper_count = sum(1 for char in S if char.isupper())

print(upper_count)
