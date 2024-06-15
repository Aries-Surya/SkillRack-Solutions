nums = list(map(int, input().split()))
n = int(input())
d = nums[1] - nums[0]
term = nums[0] + (n-1) * d
print(term)
