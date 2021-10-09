# bulletPointAdder.py – Acrescenta marcadores da Wikipedia no início
# de cada linha de texto do clipboard.
import pyperclip
text = pyperclip.paste()
pyperclip.copy(text)
# Separa as linhas e acrescenta os asteriscos.
lines = text.split('\n')
for i in range(len(lines)): # percorre todos os índices da lista "lines" em um loop
    lines[i] = '* ' + lines[i] # acrescenta um asterisco em cada string da lista "lines"
text= '\n'.join(lines)
pyperclip.copy(text)
