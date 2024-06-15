words = input().strip().split(" ")

for word in words:
    
    for i in range(1,len(word)+1):
        
        if i % 2==0:
            print(word[i-1].lower(), end="")
        else:
            print(word[i-1].upper(), end="")
    print(" ", end="")
    