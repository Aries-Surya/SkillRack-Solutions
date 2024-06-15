X = int(input())
Y = int(input())

odd_numbers = [str(num) for num in range(X + 1, Y) (if num % 2 != 0)]

print(' '.join(odd_numbers))
