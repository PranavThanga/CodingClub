score, bonus = input().split(" ")
score = int(score)
bonus = int(bonus)

while score < bonus:
    score *= 2
    print(score)

print("BONUS UNLOCKED!")