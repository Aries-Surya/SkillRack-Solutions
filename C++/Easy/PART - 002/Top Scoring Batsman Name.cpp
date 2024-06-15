n = int(input())
name_list = []

for i in range(n):
    name_list.append(input().split(','))
print(max(name_list, key = lambda e : int(e[1]))[0])