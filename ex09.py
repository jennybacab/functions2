number = int(input())

if number > 1:
   for i in range(2,number):
       if (number % i) == 0:
           print("not prime")
           break
   else:
       print("prime")
       
else:
   print("please repeat with a valid number")
