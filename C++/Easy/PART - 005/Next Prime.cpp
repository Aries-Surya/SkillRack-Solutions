def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

N = int(input())

next_prime = N + 1
while True:
    if is_prime(next_prime):
        print(next_prime)
        break
    next_prime += 1
