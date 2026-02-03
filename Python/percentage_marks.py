marks = [float(input(f"Enter marks for subject {i+1}: ")) for i in range(5)]
total = sum(marks)
print(f"Total: {total}\nPercentage: {total / 5}%")