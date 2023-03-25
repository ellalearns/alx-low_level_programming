from datetime import datetime
day = datetime.today().strftime('%A')

def Week(day):
 if (day == "Monday"):
    return("today is monday")
 elif(day == "Tuesday"):
     return("today is tuesday")
 elif(day == "Wednesday"):
     return("today is wednesday")
 elif (day == "Thursday"):
     return("today is thursday")
 elif (day == "Friday"):
     return("Today is friday")
 elif (day == "Saturday"):
     return("today is saturday")
 elif(day == "Sunday"):
     return("today is sunday")
 else:
     return("This is not a valid days of the week")
print(Week(day))
