
import sys, pyperclip
PASSWORDS = {'nomeEmail': 'F7minlBDDuvMJuxESSKHFhTxFtjVB6','NomeBlog': 'VmALvQyKAxiVH5G8v01if1MLZF3sdt','NomeSite': '12345', 'NomeSkype': 'Soudoidodelo23', 'NomeRedeSocial': 'kklmjnq1249qvyztiqzvqq', 'NomeCanalYT': '@huashu328951hrkmkzkczguia#'}
if len(sys.argv) < 2:
    print('Usage: py pw.py [account] - copy account password')
    sys.exit()
    
account = sys.argv[1]

if account in PASSWORDS:
    pyperclip.copy(PASSWORDS[account])
    print('Password for ' + account + ' copied to clipboard.')

else:
    print('pau no seu cu')
    