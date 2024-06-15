def fibonacci_sequence(N):
    fib_sequence = [0, 1]
    for i in range(2, N):
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
    return fib_sequence[:N]

N = int(input())
print(" ".join(map(str, fibonacci_sequence(N))))
