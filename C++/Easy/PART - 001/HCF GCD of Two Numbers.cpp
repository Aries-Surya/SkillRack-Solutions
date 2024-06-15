def gcd(x, y):
    while y:
        x, y = y, x % y
    return x

X = int(input())
Y = int(input())

