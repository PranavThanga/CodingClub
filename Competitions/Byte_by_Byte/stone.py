num = input()
materials = input().split(" ")
stone = 0

for material in materials:
    stone += 1 if material == "STONE" else 0

print(stone)