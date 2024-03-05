def calculate_bill(units):
    if units <= 100:
        return units * 1.50
    elif units <= 200:
        return 100 * 1.50 + (units - 100) * 2.00
    elif units <= 300:
        return 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00
    else:
        return 100 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 4.00

def main():
    units = float(input("Enter units consumed: "))
    bill_amount = calculate_bill(units)
    print("Electricity bill amount: $", bill_amount)

if __name__ == "__main__":
    main()
