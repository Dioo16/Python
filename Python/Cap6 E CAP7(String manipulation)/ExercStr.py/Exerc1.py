import re, pyperclip
site = re.compile(r'''(
\w{1,5}?
\:
\/\/
\w{1,50}\.?
\w{1,50}\.?
\w{,3}\.?\w{1,5}?
)''', re.VERBOSE,)
text = str(pyperclip.paste())
TotalSites = []
for groups in site.findall(text):
    TotalSites.append(groups)

print('\n'.join(TotalSites))
