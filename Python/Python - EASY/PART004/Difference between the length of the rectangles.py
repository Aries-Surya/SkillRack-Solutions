
amounts = input().strip().split()
widths = input().strip().split()
amount_spent_alen = int(amounts[0])
amount_spent_tim = int(amounts[1])
width_alen = int(widths[0])
width_tim = int(widths[1])
area_alen = amount_spent_alen / 5
area_tim = amount_spent_tim / 5
length_alen = area_alen / width_alen
length_tim = area_tim / width_tim
length_difference = abs(length_alen - length_tim)
print(f"{length_difference:.2f}")
