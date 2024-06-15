S = input().strip()
C = input().strip()

output = ''
for char in S:
    if char == C:
        break
    output += char

print(output)
