m = int(input())
n = int(input())

count = 0

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**.5) + 1):
        if n % i == 0:
            return False
    return True

for i in range(m, n+1):
    if is_prime(i):
        count += 1
print(count)