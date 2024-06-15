string = input()
length = len(string)
for i in range(length):
    done = False
    for j in range(i+1, length ):
        if string[i] == string[j]:
            print(string[i])
            done = True
            break
    if done:
        break