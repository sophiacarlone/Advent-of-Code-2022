#Sophia Carlone

#just get priority by ascii

file = open("day3.txt")
total = 0
lines = []

place = 0

line1 = ""
line2 = ""
line3 = ""

for line in file:
    lines.append(line)

while place < len(lines):
    line1 = lines[place]
    line2 = lines[place + 1]
    line3 = lines[place + 2]

    for x in line1:
        if (line2.find(x) != -1) and (line3.find(x) != -1):
            total += ((ord(x) % 64) + 26) % 58
            break
    place += 3

# #Part 1
# for line in file:
#     line_half_size = int(len(line)/2)
#     first = line[0: line_half_size]
#     last = line[line_half_size :]

#     for x in first:
#         #Originally planned to use filter(), but we should only find one instance of x
#         if last.find(x) != -1:
#             total += ((ord(x) % 64) + 26) % 58
#             break

print(total)
# print(line_count)
# print(found_count)