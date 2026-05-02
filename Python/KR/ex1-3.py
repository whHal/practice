LOWER = 0
UPPER = 300
STEP  = 20

print('\n')
print("Fahrenheit to Celsius Conv. Table")
print('\n')

def table():
    for fahr in range(LOWER, UPPER + 1, STEP):
        cel = (5.0 / 9.0) * (fahr - 32.0)
        print(f"{fahr}\t{cel: .1f}")

table()
print('\n')   
