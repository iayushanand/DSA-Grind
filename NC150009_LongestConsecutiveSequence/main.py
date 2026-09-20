nums = [0,3,2,5,4,6,1,1]

s = set(nums)

longest = 0


for i in s:
    length = 1
    flag = True
    while(flag):
        if (i+length) in s:
            length+=1
        else:
            flag=False
            
    longest = max(length, longest)

print(longest)