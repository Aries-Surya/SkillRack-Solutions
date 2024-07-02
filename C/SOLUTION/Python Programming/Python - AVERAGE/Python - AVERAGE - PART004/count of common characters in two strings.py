"""INPUT:
china
india
OUTPUT:
3
"""
s1 = input()
s2 = input()
s1 = list(s1)
s2 = list(s2)
r = 0

for char in s1:
    if char in s2:
        s2.remove(char)
        r += 1

print(r)

