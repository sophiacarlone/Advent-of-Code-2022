#Sophia Carlone

from collections import deque

stack1 = deque()
stack2 = deque()
stack3 = deque()
stack4 = deque()
stack5 = deque()
stack6 = deque()
stack7 = deque()
stack8 = deque()
stack9 = deque()
allStacks = [stack1, stack2, stack3, stack4, stack5, stack6, stack7, stack8, stack9]

file = open("day5.txt")

def moveOver(amount, src, des):
    start = allStacks[src]
    end = allStacks[des]
    trading = deque()
    for x in range(amount):
        trading.appendleft(start.pop())
    for x in trading:
        end.append(x)

    # for x in range(amount):
    #     end.append(temp)

for line in file:
    if not line.find('['):
        index = 0
        for i in allStacks:
            x = 2 + (4 * index - 1)
            
            # print(x)
            if line[x] != " ":
                i.appendleft(line[x])
                # i.append(line[x])
                # print(line[x])
            index += 1
            # print(index)

    if not line.find("move"):
        # print(line)
        split = line.split()
        # print(split)
        # print(split[1])
        moveOver(int(split[1]), int(split[3]) - 1, int(split[5]) - 1)
        # print(line)


# #I know I know, very bad, but I am also tired

print(allStacks)

# for i in allStacks:
#     print(i.pop())

print( "".join([ i.pop() for i in allStacks ]))