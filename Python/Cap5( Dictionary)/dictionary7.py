import pprint  # Pretty print, introduz uma apresentação mais limpa/''elegante'' dos valores no dicionário
message = 'It was a bright cold day in Aprill, and the clocks were striking thirteen.'
count = {}
for character in message:
    count.setdefault(character, 0)
    count[character] = count[character] + 1

pprint.pprint(count)
