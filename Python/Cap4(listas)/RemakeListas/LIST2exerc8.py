Words = []
for t in range(10):
    c = input()
    Words.append(c)


Words.sort(reverse = True)
print(Words[0:10])
