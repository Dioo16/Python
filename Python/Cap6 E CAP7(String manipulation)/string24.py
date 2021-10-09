import re
robocop = re.compile(r'robocop', re.I) # re.I = PARA TRANSFORMAR EM CASE ISENTIVE(Sem diferença de maiuscula e minuscula)
print(robocop.search('RoboCop is part man, part machine, all cop.').group())

namesRegex = re.compile(r'Agent \w+')
print(namesRegex.sub('CENSORED', 'Agent Alice gave the secret documents to Agent Bob.')) #Troca de caracteres = sub


agentNamesRegex = re.compile(r'Agent (\w)\w*')
print(agentNamesRegex.sub(r'\1****', 'Agent Alice told Agent Carol that Agent Eve knew Agent Bob was a double agent.'))