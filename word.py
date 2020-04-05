word = input()
up = 0
low = 0
for c in word:
    if c.isupper():
        up += 1
    else:
        low += 1

if up > low :
    word = word.upper()
else:
    word = word.lower()

print(word)