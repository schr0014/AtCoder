import re

S = input()

if S[0] != "A":
    print ("WA")
elif S[2:-1].count("C") != 1:
    print ("WA")
elif len(re.findall('[A-Z]{1}', S)) != 2:
    print ("WA")
else:
    print ("AC")
