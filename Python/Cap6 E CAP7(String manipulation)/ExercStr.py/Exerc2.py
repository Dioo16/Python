import re, pyperclip
count1 = 0
datas = str(pyperclip.paste())
searchData = re.compile(r'''(
(\d{1,4})\-?\:?\/?
(\d{1,2})\-?\:?\/?
(\d{1,4})\-?\:?\/?
)''', re.VERBOSE)
dates = []
years = []
months = []
days = []
dates = searchData.findall(datas)

for x in range(0, len(searchData.findall(datas))):
     for y in range(1, len(searchData.findall(datas))):  
         if (int(dates[x][y]) > 1000):
             years.append(dates[x][y])
         if(y == 2):
             if(int(dates[x][y]) <= 12):
                months.append(dates[x][y])
         if(y == 3) or (y == 1):
            if(int(dates[x][y]) < 1000):
                days.append(dates[x][y])

for z in range(0, len(searchData.findall(datas))):
    print(days[z] + '/' + months[z] + '/' + years[z])


            
# print(days[y] + '/' + months[y] + '/' + years[y])  

