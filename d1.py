#Sophia Carlone

file = open("day1.txt")
sum = 0
sum_list = []

for line in file:
    if line == "\n":
        sum_list.append(sum)
        sum = 0
    else:
        sum += int(line)

sum_list.sort()
print(sum_list[-1])
print("part 2 answer:")
print(sum_list[-1]+sum_list[-2]+sum_list[-3])