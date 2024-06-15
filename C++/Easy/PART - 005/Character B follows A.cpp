S = input().strip()
A = input().strip()
B = input().strip()

count = 0
for i in range(len(S) - 1):
    if S[i] == A and S[i + 1] == B:
        count += 1

print(count)
